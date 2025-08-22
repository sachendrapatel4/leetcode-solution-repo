class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();

        vector<int>ans;
        vector<int>vis(n,false);
        for(int c=0;c<m;c++)
        {
            for(int r=0;r<n;r++)
            {
                if(mat[r][c]==0 && vis[r]==false)
                {
                    ans.push_back(r);
                    vis[r]=true;
                    k--;
                }
                if(k==0)break;
            }
            if(k==0)
            {
                break;
            }
        }
        /*set<pair<int,int>> sets;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) count++;
            }
            sets.insert({count,i});
        }
        int c = 0;
        for(auto &p : sets) {
            if(c == k) break;
            ans.push_back(p.second);
            c++;
        }
        */
        if(k!=0)
        {
            for(int i=0;i<n;i++)
            {
                if(k!=0 && !vis[i])
                {
                    ans.push_back(i);
                    k--;
                }
            }
        }
        if(ans.size()==0)ans.push_back(0);
        return ans;
    }
};