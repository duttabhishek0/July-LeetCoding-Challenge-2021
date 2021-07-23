class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        
        int ones = 0;
        int n  = arr.size();
        
        for(int i : arr){
            if(i==1)
                ones++;
        }
     
        if(ones == 0) return {0,n-1};
      
        if(ones%3!=0) return {-1,-1};
        
        int k = ones/3;
   
        int firstOne = -1, secondOne = -1, thirdOne = -1;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        
      
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                firstOne = i;
                break;
            }
        }
   
        for(int i=firstOne+1;i<n;i++){
            if(arr[i]==1) cnt2++;
            if(arr[i]==1 && cnt2==k){
                secondOne = i;
                break;
            }
        }

        for(int i=secondOne+1;i<n;i++){
            if(arr[i]==1) cnt3++;
            if(arr[i]==1 && cnt3==k){
                thirdOne = i;
                break;
            }
        }
     
        int x = firstOne, y = secondOne, z = thirdOne;
        while(x<n && y<n && z<n){
            if(arr[x] == arr[y] && arr[y] == arr[z]){
                x++;y++;z++;
            }
            else
                return {-1,-1};
        }
        
     

        return {x-1,y};
        
    }
};
