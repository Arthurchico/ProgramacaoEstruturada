#include <stdio.h>
#include <stdlib.h>
void swap(int* values, int i, int j){
    int t = *(values + i);
    *(values + i) = *(values + j);
    *(values + j) = t;
}
void sort(int* values, int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(*(values + j) < *(values + min)){
                min = j;
            }
        }
        swap(values, i, min);
    }
}
int* readValues(int n){

  int* values = malloc (n * sizeof(int));

    for (int i = 0; i < n; i++){
        scanf

    }
/* Implemente a função readValues em Linguagem C. 
A função deve
*Alocar dinamicamente um vetor de n inteiros;
*Ler n valores da entrada padrão;
*Retornar o ponteiro para o vetor alocado.
Escreva apenas o corpo da função.
*/
 
}
    void printValues(int* values, int n){
        for(int i = 0; i < n; i++){
            printf("%d", *(values + i));
            if(i < n - 1){
                printf(" ");
            }
        }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    int * values = readValues(n);
    printValues(values, n);
    sort(values, n); /* ordenação crescente (padrão)*/

    printValues(values, n);
    free(values);
    return 0;
}