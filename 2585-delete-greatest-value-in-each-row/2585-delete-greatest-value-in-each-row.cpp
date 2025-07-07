class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int res =0;
        int m =grid.size();
        int n =grid[0].size();
        vector<priority_queue<int>>heap(m);
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                heap[i].push(grid[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            int Max =0;
            for(int j=0;j<m;j++){
                int val=heap[j].top();
                heap[j].pop();
                Max =max(Max,val);
            }
            res +=Max;
        }
        return res;
    }
};
