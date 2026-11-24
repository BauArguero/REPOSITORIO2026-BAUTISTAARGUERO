#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int anio;
};

int main() {

    struct Alumno alumnos[3] = {
        {"Ana Lopez", 14, 2},
        {"Luis Gomez", 16, 4},
        {"Sofia Diaz", 17, 5}
    };

    printf("=== Datos originales ===\n");
    for (int i = 0; i < 3; i++) {
        printf("\nAlumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Anio: %d\n", alumnos[i].anio);
    }

    for (int i = 0; i < 3; i++) {
        printf("\n=== Ingrese los nuevos datos del alumno %d ===\n", i + 1);
        printf("Nombre: ");
        scanf(" %49[^\n]", alumnos[i].nombre);
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("Anio: ");
        scanf("%d", &alumnos[i].anio);
    }

    printf("\n=== Datos modificados ===\n");
    for (int i = 0; i < 3; i++) {
        printf("\nAlumno %d\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Anio: %d\n", alumnos[i].anio);
    }

    return 0;
}
