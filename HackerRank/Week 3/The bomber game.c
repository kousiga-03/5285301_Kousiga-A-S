#include <stdio.h>
#include <string.h>

#define MAX 201

char grid[MAX][MAX];
char temp[MAX][MAX];

int R, C, N;

// Fill the whole grid with bombs
void fillBombs() {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            grid[i][j] = 'O';
        }
    }
}

// Detonate bombs and update the grid
void detonate(char source[MAX][MAX]) {
    // Copy grid to temp initially filled with bombs
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            temp[i][j] = 'O';
        }
    }
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (source[i][j] == 'O') {
                temp[i][j] = '.';
                if (i > 0) temp[i-1][j] = '.';
                if (i < R-1) temp[i+1][j] = '.';
                if (j > 0) temp[i][j-1] = '.';
                if (j < C-1) temp[i][j+1] = '.';
            }
        }
    }

    // Copy temp back to grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            grid[i][j] = temp[i][j];
        }
    }
}

int main() {
    scanf("%d %d %d", &R, &C, &N);
    for (int i = 0; i < R; i++) {
        scanf("%s", grid[i]);
    }

    if (N == 1) {
        // Print initial grid
    } else if (N % 2 == 0) {
        fillBombs();
    } else {
        // Pattern repeats every 4 after first few seconds
        detonate(grid);       // after 3 sec
        if ((N - 3) % 4 == 0) {
            // state after first detonation
        } else {
            detonate(grid);   // after 5 sec
        }
    }

    for (int i = 0; i < R; i++) {
        printf("%s\n", grid[i]);
    }

    return 0;
}
