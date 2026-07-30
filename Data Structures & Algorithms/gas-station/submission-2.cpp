class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0,total = 0;
        int total1 = 0,total2 = 0;
        for(int i = 0;i<gas.size();i++){
            total1+=gas[i];
            total2+=cost[i];
            total += gas[i] - cost[i];
            if(total<0){
                total = 0;
                ans = i+1;
            }
        }
        if(total1<total2) return -1;
        return ans;
    }
};
