class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>(nums.size()/2)) return nums[i];
        }
        return nums[0];
    }
};