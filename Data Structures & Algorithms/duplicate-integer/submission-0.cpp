class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>mpp;
        for(int it:nums){
            mpp.insert(it);
        }
        if(mpp.size()==nums.size()) return false;
        return true;
    }
};