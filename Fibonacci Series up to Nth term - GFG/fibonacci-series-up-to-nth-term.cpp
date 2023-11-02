//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int N) {
        if(N==0)
        {
            return {0};
        }
        if(N==1)
        {
            return {0,1};
        }
        
        vector<long long> fib(N+1);
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=N; i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        return fib;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends