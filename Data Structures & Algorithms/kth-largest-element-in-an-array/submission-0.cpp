class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            // if(mp.find(nums[i]) != mp.end()) continue;
            mp[nums[i]]++;
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};
