#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int anio;
};

int main() {
    struct Alumno alumno = {"Juan Perez", 15, 3};

    printf("=== Datos originales ===\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Anio: %d\n", alumno.anio);

    printf("\n=== Ingrese los nuevos datos ===\n");
    printf("Nombre: ");
    scanf(" %49[^\n]", alumno.nombre);
    printf("Edad: ");
    scanf("%d", &alumno.edad);
    printf("Anio: ");
    scanf("%d", &alumno.anio);
    printf("\n=== Datos modificados ===\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Anio: %d\n", alumno.anio);

    return 0;
}
