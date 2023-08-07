//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void bsf(int c, vector<vector<int>> &adj, vector<bool> &vis){
        queue<int> q;
        q.push(c);
        int V = adj.size();
        vis[c] = true;
        while(!q.empty()){
            int node = q.front();
            for(int i=0;i<V;i++){
                if(adj[node][i] == 1 && !vis[i] && i != node){
                    q.push(i);
                    vis[i] = true;
                }
            }
            q.pop();
        }
        return ;
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<bool> vis(V,false);
        int count = 0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bsf(i, adj, vis);
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends