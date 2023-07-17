//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans = "";
		    vector<int> frq(26,0);
		    vector<char> v;
		    for(int i=0;i<A.size();i++){
		        if(!frq[A[i]-'a']){
		            v.push_back(A[i]);
		        }
		      //  int idx = -1;
		      frq[A[i] - 'a']++;
		      int f = 0, m = v.size();
		        for(int j=0;j<m;j++){
		            if(frq[v[j] - 'a'] == 1){
		                ans.push_back(v[j]);
		                f = 1;
		                break;
		            }
		        }
		        if(f == 0){
		            ans.push_back('#');
		        }
		        
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends