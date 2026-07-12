class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int curr=1;
        for(auto i : nums){
            if(mp[target-i]){
                return {mp[target-i]-1, curr-1};
            }
            else{
                mp[i]=curr;
                curr++;
            }
        }
    }
};
