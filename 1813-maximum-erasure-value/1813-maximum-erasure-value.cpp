class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>sets;

        int CurrSum=0,MaxSum=0; 
        int left=0,right=0;

        for(int left=0,right=0;right<n;right++){
            while(sets.find(nums[right])!=sets.end()){
                CurrSum=CurrSum-nums[left];
                sets.erase(nums[left]);
                left++;
            }
            CurrSum=CurrSum+nums[right];
            sets.insert(nums[right]);

            MaxSum=max(CurrSum,MaxSum);
        }
        return MaxSum;
    }
};