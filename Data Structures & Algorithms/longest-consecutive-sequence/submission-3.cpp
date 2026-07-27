class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        int ans = 0,cnt = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) continue;
            if(nums[i-1]+1==nums[i]) cnt++;
            else{
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
        ans = max(ans,cnt);
        return ans;
    }
};
