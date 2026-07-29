class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int ans = 0,maxfre = 0,j = 0;
        for(int i =0 ;i<s.size();i++){
            mp[s[i]]++;
            maxfre = max(maxfre, mp[s[i]]);
            if ((i - j + 1) - maxfre > k) {
                mp[s[j]]--;
                j++;
            }
            ans = max(ans, i - j + 1);    
        }
        return ans;    
    }
};
