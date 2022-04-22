#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tiposCPU[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

typedef struct computadora {
    int velocidad;
    int anio;
    int cantidad;
    char *tipoCPU;
} PC;

void mostrarComputadoras(PC *listadoPCs);
void computadoraMasVieja(PC *listadoPCs);
void computadoraMasRapida(PC *listadoPCs);

int main() {
    srand(time(0));

    PC computadoras[5];
    // printf("===Alta de computadoras===\n");
    for (int i = 0; i < 5; i++) {
        computadoras[i].velocidad = rand() % 3 + 1; // Velocidad será aleatorio entre 1 y 3
        computadoras[i].cantidad = rand() % 8 + 1; // Cant. nucleos será aleatorio entre 1 y 3
        computadoras[i].anio = rand() % 8 + 2015; // Año será aleatorio entre 2015 y 2022
        computadoras[i].tipoCPU = tiposCPU[rand() % 5];
    }

    mostrarComputadoras(computadoras);
    computadoraMasVieja(computadoras);
    computadoraMasRapida(computadoras);

    return 0;
}

void mostrarComputadoras(PC *listadoPCs) {
    for (int i = 0; i < 5; i++) {
        printf("\n=== Computadora [%d] ===\n", i + 1);
        // printf("Tipo CPU: %s\n", listadoPCs[i].tipoCPU);
        printf("Tipo CPU: ");
        puts(listadoPCs[i].tipoCPU);
        printf("Velocidad procesador: %d GHz\n", listadoPCs[i].velocidad);
        printf("Cantidad de nucleos: %d\n", listadoPCs[i].cantidad);
        printf("Año de fabricacion: %d\n", listadoPCs[i].anio);
    }
}

void computadoraMasVieja(PC *listadoPCs) {
    PC *pcVieja = listadoPCs;
    for (int i = 0; i < 5; i++) {
        if (pcVieja->anio > listadoPCs[i].anio) {
            pcVieja = &listadoPCs[i];
        }
    }
    printf("\n=== Computadora mas antigua ===\n");
    printf("Tipo CPU: %s\n", pcVieja->tipoCPU);
    printf("Velocidad procesador: %d GHz\n", pcVieja->velocidad);
    printf("Cantidad de nucleos: %d\n", pcVieja->cantidad);
    printf("Año de fabricacion: %d\n", pcVieja->anio);
}

void computadoraMasRapida(PC *listadoPCs) {
    PC *pcMasRapida = listadoPCs;
    for (int i = 0; i < 5; i++) {
        if (pcMasRapida->velocidad < listadoPCs[i].velocidad) {
            pcMasRapida = &listadoPCs[i];
        }
    }
    printf("\n=== Computadora mas rapida ===\n");
    printf("Tipo CPU: %s\n", pcMasRapida->tipoCPU);
    printf("Velocidad procesador: %d GHz\n", pcMasRapida->velocidad);
    printf("Cantidad de nucleos: %d\n", pcMasRapida->cantidad);
    printf("Año de fabricacion: %d\n", pcMasRapida->anio);
}
