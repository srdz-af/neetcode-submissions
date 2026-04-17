

class Solution {
public:

    vector<int> z = {0,0,0,0,0,0,0,0,0,0};
    vector<int> rf, cf, sf;
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            rf = cf = z;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                if(rf[board[i][j]-'0']++) return false;
            }
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.') continue;
                if(cf[board[j][i]-'0']++) return false;
            }
        }

        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                sf = z;
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        int x = i+k, y = j+l;
                        if(board[x][y] == '.') continue;
                        if(sf[board[x][y]-'0']++) return false;
                    }
                }
            }
        }

        return true;
    }
};
