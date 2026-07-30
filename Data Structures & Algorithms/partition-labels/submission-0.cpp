class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt = 0;
        set<char> st;
        for(int i = 0;i<s.size();i++){
            cnt++;
            st.insert(s[i]);
            mp[s[i]]--;
            if(mp[s[i]]==0){
                // mp.erase(s[i]);
                st.erase(s[i]);
                if(st.size()==0) {
                    ans.push_back(cnt);
                    cnt = 0;
                }
            }
        }
        return ans;
    }
};
