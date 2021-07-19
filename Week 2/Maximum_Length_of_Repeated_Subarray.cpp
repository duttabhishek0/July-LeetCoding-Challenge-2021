 class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int res = 0;
        int dp[m+1][n+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i = 1;i <= m;i++){
            for(int j = 1;j <= n;j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = 0;
                }
               res = max(res,dp[i][j]);
            } 
             
        }
        return res;
    }   
}; 
