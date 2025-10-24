#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char const *argv[]) {
    int tamanio;
    int Yepes[MAX];

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tamanio);

    if ((tamanio <= 0) || (tamanio > MAX)) {
        printf("Tamaño inválido");
        return 1;
    }

    for (int i = 0; i < tamanio; i++) {
        Yepes[i] = rand() % 100;
    }

    printf("Contenido del vector:\n");
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", Yepes[i]);
    }

    return 0;
}