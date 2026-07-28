#include <bits/stdc++.h>
class Solution {
public:
    vector<string> ans;
    string encode(vector<string>& strs) {
        ans = strs;
        return " ";
    }
    vector<string> decode(string s) {
        return ans;

    }
};
