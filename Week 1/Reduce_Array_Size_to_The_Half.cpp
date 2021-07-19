 class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> cnt;
        
        multiset<int, greater<int>> s;
        
        for(auto itr : arr){
            cnt[itr]++;
        }
        
        for(auto [num,freq] : cnt){
            s.insert(freq);
        }
        
        for(int deleted{}, ans{}; auto freq : s){
            deleted += freq,ans++;
            if(deleted >= size(arr) / 2) {
                return ans;
            }
        }
        return -1;
    }
}; 
