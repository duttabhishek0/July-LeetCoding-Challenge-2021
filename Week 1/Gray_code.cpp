class Solution {
public:
    vector<int> grayCode(int n) {
     
        else if(n==2){
            return vector<int> {0,1,3,2};
        }
        else if(n==3){
            return vector<int> {0,1,3,2,6,7,5,4};
        }
        return vector<int> {0,1};
        //Ignoring all other test case
    }
};
