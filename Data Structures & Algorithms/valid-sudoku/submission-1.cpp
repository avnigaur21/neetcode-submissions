class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9);
        vector<unordered_set<int>> col(9);
        vector<unordered_set<int>> boxes(9);

        for(int r = 0 ; r < 9; r++){
            for(int c = 0; c < 9; c++){
                char digit = board[r][c];
                if(digit == '.') continue;
                int box = (r / 3) * 3 + (c / 3);

                if(row[r].count(digit) ||
                col[c].count(digit) ||
                boxes[box].count(digit)){
                    return false;
                }

                row[r].insert(digit);
                col[c].insert(digit);
                boxes[box].insert(digit);
            }
        }
        return true;

    }
};
