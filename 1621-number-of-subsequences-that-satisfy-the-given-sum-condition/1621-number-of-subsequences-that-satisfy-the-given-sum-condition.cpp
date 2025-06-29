class Solution {
public:
    const int mod=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;

        sort(nums.begin(),nums.end());
        vector<int> power(n+1,1);
        for(int i=1;i<=n;++i){
            power[i]=(power[i-1]*2LL)%mod;
        }
        int l=0,r=n-1;
        while(l<=r){
            int s=nums[l]+nums[r];
            if(s<= target){
                count=(count+power[r-l]) % mod;
                l++;
            }
            else r--;
        }
        return count;
    }
};