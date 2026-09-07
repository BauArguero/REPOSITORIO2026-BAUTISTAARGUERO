
#include <stdio.h>

void comparar(int vector1[], int vector2[], int tamaño) {
    int i;

    for (i = 0; i < tamaño; i++) {

        if (vector1[i] > vector2[i]) {
            printf("Posicion %d: el mayor es %d y pertenece al vector 1\n",
                   i + 1, vector1[i]);
        }
        else if (vector2[i] > vector1[i]) {
            printf("Posicion %d: el mayor es %d y pertenece al vector 2\n",
                   i + 1, vector2[i]);
        }
        else {
            printf("Posicion %d: los valores son iguales (%d)\n",
                   i + 1, vector1[i]);
        }
    }
}

int main() {
    int vector1[5];
    int vector2[5];
    int i;

    printf("Ingrese los datos del vector 1:\n");

    for (i = 0; i < 5; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("\nIngrese los datos del vector 2:\n");

    for (i = 0; i < 5; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    printf("\nComparacion de los vectores:\n");
    comparar(vector1, vector2, 5);

    return 0;
}

