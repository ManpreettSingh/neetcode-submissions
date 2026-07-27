class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0){
                    q.push({0,{i,j}});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().second.first;
            int j=q.front().second.second;
            int val = q.front().first;
            q.pop();
            grid[i][j]=val;
            vector<int> dx = {0,1,0,-1};
            vector<int> dy = {1,0,-1,0};
            for(int ind=0;ind<4;ind++){
                int x = i+dx[ind];
                int y = j+dy[ind];
                if(x>=0 and y>=0  and x<grid.size() and y<grid[0].size() and grid[x][y]!=-1 and grid[x][y]>val+1){
                    grid[x][y] = val+1;
                    q.push({val+1,{x,y}});
                }
            }
        }
    }
};
