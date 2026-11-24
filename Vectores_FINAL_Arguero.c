
#include <stdio.h>

int main() {
    int vector[5];
    int i;
    int opcion;
    int posicion;
    int valor;

    printf("Ingrese los 5 valores del vector:\n");

    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    do {
        printf("\nMENU\n");
        printf("1. Acceder a un valor\n");
        printf("2. Modificar un valor\n");
        printf("3. Imprimir todos los valores\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                printf("Ingrese la posicion que desea consultar (1-5): ");
                scanf("%d", &posicion);

                if (posicion >= 1 && posicion <= 5) {
                    printf("El valor es: %d\n", vector[posicion - 1]);
                } else {
                    printf("Posicion no valida\n");
                }
                break;

            case 2:
                printf("Ingrese la posicion que desea modificar (1-5): ");
                scanf("%d", &posicion);

                if (posicion >= 1 && posicion <= 5) {
                    printf("Ingrese el nuevo valor: ");
                    scanf("%d", &valor);

                    vector[posicion - 1] = valor;

                    printf("Valor modificado correctamente\n");
                } else {
                    printf("Posicion invalida\n");
                }
                break;

            case 3:
                printf("\nValores del vector:\n");

                for (i = 0; i < 5; i++) {
                    printf("Posicion %d: %d\n", i + 1, vector[i]);
                }
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while (opcion != 4);

    return 0;
}
