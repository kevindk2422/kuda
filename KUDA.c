#include <stdio.h>

void imaginaryKoboChess(int row, int col, int board[8][8]) {
    
    int steps[8][2] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1},
                       {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};

    
    for (int k = 0; k < 8; k++) {
        int newRow = row + steps[k][0];
        int newCol = col + steps[k][1];
        
        if (newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8) {
            board[newRow][newCol] = 1;
        }
    }
}


void printChessBoard(int board[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col;
    scanf("%d %d", &row, &col); 
    int board[8][8] = {{0}}; 
    imaginaryKoboChess(row, col, board);
    printChessBoard(board); 
    return 0;
}
