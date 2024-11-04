class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i = 0;i < nums.size();i++){
            if(mp[nums[i]]>(nums.size())/3) {
                res.push_back(nums[i]);
                mp[nums[i]]=0;
            }
        }
        return res;
    }
};