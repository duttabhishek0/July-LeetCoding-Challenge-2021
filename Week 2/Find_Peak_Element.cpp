class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max_till = nums[0];
        int index_max = 0;
        
        
        for(int i = 1;i < nums.size();i++){
            if(nums[i] > max_till){
                max_till = nums[i];
                index_max = i;
            }
        }
        return index_max;
    }
};
