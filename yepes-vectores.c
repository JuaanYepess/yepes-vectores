#include <stdio.h>
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

    printf("Ingrese los elementos del vector:\n");
    for (int i = 0; i < tamanio; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &Yepes[i]);
    }

    printf("\nContenido del vector:\n");
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", Yepes[i]);
    }

    printf("\n");
    return 0;
}
