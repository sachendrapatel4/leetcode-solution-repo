class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int x=matrix[0].size();

        int left=0, right=x-1;

        while(left <n && right >=0){

            if(matrix[left][right]==target) return true;
            else if(matrix[left][right]< target) left++;
            else right--;
        }
        return false;
    }
};