
#include <stdio.h>

int main() {
    int AND[4][3];
    int OR[4][3];
    int XOR[4][3];
    int NAND[4][3] = {
        {0, 0, 1},
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}
    };

    int i, j;

    printf("Complete la tabla de verdad de AND:\n");

    for (i = 0; i < 4; i++) {
        printf("Ingrese A, B y resultado de la fila %d: ", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &AND[i][j]);
        }
    }

    printf("\nComplete la tabla de verdad de OR:\n");

    for (i = 0; i < 4; i++) {
        printf("Ingrese A, B y resultado de la fila %d: ", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &OR[i][j]);
        }
    }

    printf("\nComplete la tabla de verdad de XOR:\n");

    for (i = 0; i < 4; i++) {
        printf("Ingrese A, B y resultado de la fila %d: ", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &XOR[i][j]);
        }
    }

    printf("\nTABLA AND\n");
    printf("A\tB\tS\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", AND[i][j]);
        }
        printf("\n");
    }

    printf("\nTABLA OR\n");
    printf("A\tB\tS\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", OR[i][j]);
        }
        printf("\n");
    }

    printf("\nTABLA XOR\n");
    printf("A\tB\tS\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", XOR[i][j]);
        }
        printf("\n");
    }

    printf("\nTABLA NAND\n");
    printf("A\tB\tS\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", NAND[i][j]);
        }
        printf("\n");
    }

    return 0;
}
