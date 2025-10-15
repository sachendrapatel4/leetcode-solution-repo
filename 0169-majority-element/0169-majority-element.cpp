class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>maps;
        int maxfreq=0;
        int maxelement=nums[0];
        for(int i=0;i<nums.size();i++){
            maps[nums[i]]++;
        }
        for(auto i: maps){
            if(i.second>n/2)
                return i.first;
        
        }
        return -1;/*
        sort(nums.begin(),nums.end());
        return nums[(nums.size())/2];*/
    }
};