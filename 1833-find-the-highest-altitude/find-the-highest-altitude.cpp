class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0,mx = 0;
        for(int i = 0;i < gain.size();i++){
            mx = max(mx,sum);
            sum+=gain[i];
        }
            mx = max(mx,sum);
        return mx;
    }
};