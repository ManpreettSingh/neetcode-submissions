class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // priority_queue<tuple<double,int,int>, vector<tuple<double,int,int>>, greater<tuple<double,int,int>>> pq;
        priority_queue<tuple<double,int,int>> pq;
        for(int i = 0;i<points.size();i++){
            double ans = sqrt ((double) (points[i][0] * points[i][0]) + (double) ( points[i][1] * points[i][1]));
            pq.push({ans,points[i][0],points[i][1]});
            if(pq.size() > k) pq.pop();
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            auto [a,b,c] = pq.top();
            pq.pop();
            ans.push_back({b,c});
        }
        return ans;
    }
};
