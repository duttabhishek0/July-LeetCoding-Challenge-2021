 class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector < int > aux;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                aux.push_back(matrix[i][j]);
            }
        }
        sort(aux.begin(), aux.end());
        
        return aux[k-1];
    }
};

