#include <stdio.h>

typedef struct {
    int edad;
    char iniciales[10];
    char tipoSangre[5];
    float altura;
} Paciente;

int main() {
    Paciente paciente;
    int opcion;

    printf("Edad: ");
    scanf("%d", &paciente.edad);
    printf("Iniciales: ");
    scanf("%9s", paciente.iniciales);
    printf("Tipo de sangre: ");
    scanf("%4s", paciente.tipoSangre);
    printf("Altura (en metros): ");
    scanf("%f", &paciente.altura);

    do {
        printf("\n1. Imprimir edad\n");
        printf("2. Imprimir iniciales\n");
        printf("3. Imprimir tipo de sangre\n");
        printf("4. Imprimir altura\n");
        printf("5. Imprimir todos los datos\n");
        printf("0. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Edad: %d\n", paciente.edad);
                break;
            case 2:
                printf("Iniciales: %s\n", paciente.iniciales);
                break;
            case 3:
                printf("Tipo de sangre: %s\n", paciente.tipoSangre);
                break;
            case 4:
                printf("Altura: %.2f m\n", paciente.altura);
                break;
            case 5:
                printf("Edad: %d\n", paciente.edad);
                printf("Iniciales: %s\n", paciente.iniciales);
                printf("Tipo de sangre: %s\n", paciente.tipoSangre);
                printf("Altura: %.2f m\n", paciente.altura);
                break;
            case 0:
                printf("Fin del programa\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while (opcion != 0);

    return 0;
}
