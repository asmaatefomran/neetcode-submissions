class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int curr=1,mx=1;
        if(nums.empty())return 0;
        for(int i=1;i<nums.size();++i){
            if (nums[i] == nums[i - 1]) {
                continue;                
            } else if (nums[i] == nums[i - 1] + 1) {
                curr++;
            } else {
                mx = max(mx, curr);
                curr = 1;
            }
        }
        return max(mx,curr);
        
    }
};
