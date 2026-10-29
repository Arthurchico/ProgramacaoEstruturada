
#include <stdio.h>

void B(int v[], int n, int valor) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio < n && v[inicio] < valor) {
        inicio++;
    }

    fim = inicio;

    while (fim < n && v[fim] == valor) {
        fim++;
    }

    printf("B(v,%d) = [%d,%d]\n", valor, inicio, fim - 1);
}

int main() {
    int v[] = {-9, -2, 0, 4, 4, 4, 4, 8, 10, 11};
    int n = 10;

    B(v, n, 4);
    B(v, n, 8);
    B(v, n, 9);

    return 0;
}