 #include <stdio.h>

int main() {
    int matriz[3][2];
    int i, j;

    printf("Ingrese los valores de la matriz 3x2:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 3x2:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
B) #include <stdio.h>

int main() {
    int matriz[2][3][2];
    int i, j, k;

    printf("Ingrese los valores de la matriz 2x3x2:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                printf("Matriz[%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }

    printf("\nMatriz tridimensional:\n");

    for (i = 0; i < 2; i++) {
        printf("\nCapa %d:\n", i);

        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
