class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto i:nums){
            st.insert(i);
        }
        return !(st.size()==nums.size());
        
    }
};