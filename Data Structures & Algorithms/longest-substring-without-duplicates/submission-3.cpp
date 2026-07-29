class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1) return 1;
        unordered_map<char,int> mp;
        int mini = 0,i = 0,ans = 0;
        while(i<s.size()){
            if(mp.find(s[i])!=mp.end()){
                mini=max(mini,mp[s[i]]+1);
                mp[s[i]]=i;
            }
            else{
                mp[s[i]]=i;
            }
            ans = max(ans,i-mini+1);
            i++;
        }
        return ans;
    }
};
