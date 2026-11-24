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
