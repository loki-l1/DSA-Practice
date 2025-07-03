#include<iostream>
#include<vector>
using namespace std;

void nqueen(vector<vector<bool>>& board, int row) {
    int n = board.size();
    if(row == n) {
        // Print the board
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << (board[i][j] ? "Q " : ". ");
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for(int col = 0; col < n; col++) {
        // Check if it's safe to place a queen at (row, col)
        bool safe = true;
        // Check column
        for(int i = 0; i < row; i++) {
            if(board[i][col]) {
                safe = false;
                break;
            }
        }
        // Check upper left diagonal
        for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--) {
            if(board[i][j]) {
                safe = false;
                break;
            }
        }
        // Check upper right diagonal
        for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++) {
            if(board[i][j]) {
                safe = false;
                break;
            }
        }
        if(safe) {
            board[row][col] = true;
            nqueen(board, row + 1);
            board[row][col] = false; // backtrack
        }
    }
}

int main() {
    int n = 4; // Change n for different board sizes
    vector<vector<bool>> board(n, vector<bool>(n, false));
    nqueen(board, 0);
    return 0;
}