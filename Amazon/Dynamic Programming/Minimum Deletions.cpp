class Solution{
  public:
    
    string glob;
    vector<vector<int>> dp;
    int n;
    
    int recur ( int i , int j ) {
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(glob[i]==glob[j]) return dp[i][j] = recur ( i + 1 , j - 1 );
        else{
            return dp[i][j] = min(1+recur(i+1,j),1+recur(i,j-1));
        }
    }
    
    int minimumNumberOfDeletions(string S) { 
        glob = S;
        n = S.size();
        dp.resize(n+1);
        for ( int i = 0 ; i<=n ; ++i ) {
            dp[i].resize(n+1);
            for ( int j = 0 ; j<=n ; ++j ) dp[i][j] = -1;
        }
        return recur ( 0 , n - 1 );
    } 
};
