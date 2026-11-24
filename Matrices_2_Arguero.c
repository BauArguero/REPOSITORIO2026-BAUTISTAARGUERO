#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {0, 0, 0, 0},
        {0, 1, 0, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 1}
    };

    int i;

    printf("TABLA DE VERDAD\n");
    printf("-------------------------\n");
    printf(" A | B | AND | OR\n");
    printf("-------------------------\n");

    for (i = 0; i < 4; i++) {
        printf(" %d | %d |  %d  | %d\n",
               matriz[i][0],
               matriz[i][1],
               matriz[i][2],
               matriz[i][3]);
    }

    return 0;
}
