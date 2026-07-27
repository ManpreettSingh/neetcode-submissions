class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int divide = 1;
        bool one = false;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0 and !one){
                one = true;
                continue;
            }
            divide *= nums[i];
        }
        vector<int> ans(nums.size(),0);
        if(divide==0) return ans;
        if(one){
            for(int i = 0;i<nums.size();i++){
                if(nums[i]==0) ans[i] = divide;
            }
            return ans;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0) ans[i] = nums.size();
            else ans[i] = divide/nums[i];
        }
        return ans;
    }
};
