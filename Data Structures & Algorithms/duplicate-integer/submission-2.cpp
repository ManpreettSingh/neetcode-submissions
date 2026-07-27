class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int it:nums){
            mpp[it]++;
        }
        for(auto [i,ind]:mpp){
            if(mpp[i]>1){
                return true;
            }
        }
        return false;
    }
};