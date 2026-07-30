class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int a = target[0];
        int b = target[1];
        int c = target[2];
        vector<int> ans = {INT_MIN,INT_MIN,INT_MIN};
        for(int i = 0;i<triplets.size();i++){
            const auto& t = triplets[i];
            int x = t[0];
            int y = t[1];
            int z = t[2];
            if((x<=a and y<=b and z<=c) and (x==a or y==b or z==c)){
                ans[0] = max(ans[0],x);
                ans[1] = max(ans[1],y);
                ans[2] = max(ans[2],z);
            }
        }
        return ans==target;
    }
};
