class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<pair<int,int>>order;
        for(auto const& [a,b]:mp){
            order.push_back({b,a});
        }
        sort(order.begin(),order.end());
        vector<int>ans;
        while(k--){
            ans.push_back(order.back().second);
            order.pop_back();
        }
        return ans;
    }
};
