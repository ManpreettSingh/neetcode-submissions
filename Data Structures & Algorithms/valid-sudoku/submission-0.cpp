class Solution {
public:
    bool rowcheck(vector<vector<char>>& board){
        for(int i = 0;i<9;i++){
            vector<int> freq(10,0);
            for(int j = 0;j<9;j++){
                if(board[i][j]!='.') freq[board[i][j]-'0']++;
            }
            for(int i = 1;i<=9;i++){
                if(freq[i]>1) return false;
            }
        }
        return true;
    }
    bool colcheck(vector<vector<char>>& board){
        for(int i = 0;i<9;i++){
            vector<int> freq(10,0);
            for(int j = 0;j<9;j++){
                if(board[j][i]!='.') freq[board[j][i]-'0']++;
            }
            for(int i = 1;i<=9;i++){
                if(freq[i]>1) return false;
            }
        }
        return true;
    }
    bool rowcol(vector<vector<char>>& board){
        for(int i = 0;i<9;i+=3){
            for(int j = 0;j<9;j+=3){
                vector<int> freq(10,0);
                for(int k = 0;k<3;k++){
                    for(int l = 0;l<3;l++){
                        if(board[i+k][j+l]!='.') freq[board[i+k][j+l]-'0']++;
                    }
                }
                for(int i = 1;i<=9;i++){
                    if(freq[i]>1) return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        if(rowcheck(board) and colcheck(board) and rowcol(board)){
            return true;
        }
        return false;
    }
};
