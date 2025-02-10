class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i < nums.size();i++){
            sum+=nums[i];
        }
        int currsum = 0;
        for(int i = 0;i < nums.size();i++){
            sum-=nums[i];
            // cout<<sum<<" "<<currsum<<endl;
            if(sum==currsum) return i;
            currsum+=nums[i];
        }
        return -1;
    }
};