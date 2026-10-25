#include <stdio.h>

            struct Aluno{
                int idade;
                float nota;

            };

            int main (){
                    struct Aluno aluno1;

                    aluno1.idade = 20;
                    aluno1.nota = 9.5;

                    printf("Idade; %d\n" , aluno1.idade);
                    printf("Nota: %1.f\n", aluno1.nota);

                    return 0;

}