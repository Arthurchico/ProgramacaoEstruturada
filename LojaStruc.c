#include <stdio.h>

        struct Produto {
            float preco;
            int quantidade;
        };

    int main (){

        struct Produto produto1;

        produto1.preco = 19.90;
        produto1.quantidade = 5;


        printf("Preco: %2.f\n" , produto1.preco);
        printf("Quantidade: %d\n" , produto1.quantidade);

        return 0;
    }