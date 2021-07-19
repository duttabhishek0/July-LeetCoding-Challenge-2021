class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size_nums = nums.size();
        
        int arr[size_nums];
        memset(arr,0,sizeof(arr));
        int max1 = INT_MIN;
        
        for(int i = 0;i < size_nums;i++){
            if(!(i)){
                arr[i] = 1;
            }
            else{
                for(int j = 0;j < i;j++){
                    if(nums[j] < nums[i]){
                        arr[i] = max(arr[i],arr[j]+1);
                    }
                    else{
                        arr[i] = max(arr[i],1);
                    }
                }
            }
            max1 = max(max1,arr[i]);
        }
        return max1;
    }
}; 
