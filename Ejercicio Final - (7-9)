
#include <stdio.h>

void ordenar(int vector[], int tamaño) {
    int i, j, aux;

    for (i = 0; i < tamaño - 1; i++) {
        for (j = i + 1; j < tamaño; j++) {

            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

void sumarPromedio(int vector[], int tamaño) {
    int i;
    int suma = 0;
    float promedio;

    for (i = 0; i < tamaño; i++) {
        suma = suma + vector[i];
    }

    promedio = (float)suma / tamaño;

    printf("\nLa suma de los valores es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);
}

int main() {
    int vector[10];
    int i;

    printf("Ingrese los 10 valores del vector:\n");

    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    ordenar(vector, 10);

    printf("\nVector ordenado de mayor a menor:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\n", vector[i]);
    }

    sumarPromedio(vector, 10);

    return 0;
}

