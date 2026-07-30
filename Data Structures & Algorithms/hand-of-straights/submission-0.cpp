class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        unordered_map<int,int> mp;
        for(int i = 0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        sort(hand.begin(),hand.end());
        for(int i = 0;i<hand.size();i++){
            if(mp.find(hand[i])==mp.end()) continue;
            int start = hand[i];
            for(int j = start;j<start+groupSize;j++){
                if(mp.find(j) == mp.end()) return false;
                mp[j]--;
                if(mp[j]==0) mp.erase(j);
            }
        }
        return true;
        
    }
};
