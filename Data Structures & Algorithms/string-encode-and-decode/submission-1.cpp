#include <bits/stdc++.h>
class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for(int i = 0;i<strs.size();i++){
            int size = strs[i].size();
            ans+=to_string(size);
            ans+="#";
            ans+=strs[i];            
        }
        return ans;
    }
    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.size()){
            string num ="";
            while(s[i]<='9' and s[i]>='0') {
                num+=s[i];
                i++;
            }
            i++;
            int number = stoi(num);
            string temp;
            int size = i+number;
            for(;i<size;i++){
                temp.push_back(s[i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
