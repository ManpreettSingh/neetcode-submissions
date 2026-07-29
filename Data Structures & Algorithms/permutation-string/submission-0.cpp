class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i = 0;i<s1.size();i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        if(mp1==mp2) return true;
        for(int i=s1.size();i<s2.size();i++){
            mp2[s2[i-s1.size()]]--;
            mp2[s2[i]]++;
            if(mp2[s2[i-s1.size()]]==0) mp2.erase(s2[i-s1.size()]); 
            if(mp1==mp2) return true;
        }
        return false;
    }
};
