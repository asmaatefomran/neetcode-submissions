class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int>appear;
        vector<vector<string>>ans;
        int curr=1;
        for(auto i:strs){
            string t=i;
            sort(t.begin(), t.end());
            if(appear[t]){
                ans[appear[t]-1].push_back(i);
            }
            else{
                appear[t]=curr;
                curr++;
                ans.push_back({});
                ans[appear[t]-1].push_back(i);

            }
        }
        return ans;
    }
};
