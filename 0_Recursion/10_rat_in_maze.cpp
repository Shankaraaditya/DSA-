//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool isSafe(int x , int y , int n, vector<vector<int>> visited , vector<vector<int>> &m){
        
        // yaha yaha ham jaa skte hai
        if( (x>=0 && x<n) && 
            (y>=0 && y<n) &&
            visited[x][y]==0 &&
            m[x][y]==1
            )  return true;
            
        else return false;
    }
    
    
    void solve(vector<vector<int>>&m , int n ,
         vector<string> &ans , // pass by reference kiye hai taaki copy na bane ...
                                // taaki ans wali memory me he changes aaye...
        int x, int y,
        vector<vector<int>> visited,string path){
            
            // base case-->>
            // agar destination tak pahuch gaye hai 
            if(x==n-1 && y==n-1){
                ans.push_back(path); // ans wale vector me path gaya
                return ;            // solve se bahar aa gya
            }
            
            visited[x][y]=1; // visited to 1 mark kar do// yaha se nikl ke fir usko 0 karna padega
                            // ye bas ek path ka matter hai //nexet path tab he bana payege 
                            // jab ek step back jaate hue visited ko 0 kar de.
                            
            // down
            int newx = x+1;
            int newy = y;
            if(isSafe(newx , newy , n , visited , m)){
                path.push_back('D');
                solve(m,n,ans,newx,newy,visited,path); // ek case solve kiye baaki recursion ko de diye 
                                                        // ye exite tab karega jab base case reach hoga
                path.pop_back(); // pop kar diye "D" ko // next path ke liye // backtrack karne ke liye
            }
            
            // left
             newx = x;
             newy = y-1;
            if(isSafe(newx , newy , n , visited , m)){
                path.push_back('L');
                solve(m,n,ans,newx,newy,visited,path); 
                path.pop_back(); 
            }
            
            // right
             newx = x;
             newy = y+1;
             if(isSafe(newx , newy , n , visited , m)){
                path.push_back('R');
                solve(m,n,ans,newx,newy,visited,path); 
                path.pop_back(); 
            }

            // up
             newx = x-1;
             newy = y;
             if(isSafe(newx , newy , n , visited , m)){
                path.push_back('U');
                solve(m,n,ans,newx,newy,visited,path); 
                path.pop_back(); 
            }
                            
                   
            visited[x][y]=0;
            
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>  ans ; // isme sare paths rahege
        
        if(m[0][0] ==0){  // agar source he 0 hai to kahi pahuchega he nahi wo bhosdika
            return ans; 
        }
        
        int srcx=0;
        int srcy=0; // initially  rat (0.0 par hai)
        
        // visited array banaye aur usko 0 mark kar diye.
        // vector<vector<int>> visited ;
        
        vector<vector<int>> visited = m; // why = m...??
        
        for(int i =0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                visited[i][j]=0;
            }
        }
        
        string path = ""; // initially path
        
        solve(m,n,ans,srcx,srcy,visited,path);
        // m to intial rat wala matrix hai jisme usko chalna hai
        // n uska size hai n*n 
        
        sort(ans.begin(),ans.end()); 
        // sare paths jo aaye hai vector ans me ..usko sorted order me print karna hai
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
