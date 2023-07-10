#include <stdio.h>
#include <stdlib.h>
int main(){

int escolha;
int valor;

printf("Conversor de bases numéricas \n");
printf("Digite 1 para realizar a conversão de decimal para hexadecimal \n");
printf("Digite 2 para realizar a conversão de hexadecimal para decimal \n");
scanf("%d", &escolha);          //Exibição de instruções de uso do algoritmo na tela, e recebimento dos dados solicitados
getchar();                      //Limpeza de buffer

    if(escolha==1){
    printf("\n Informe o valor do número decimal à ser convertido: ");
    scanf("%d", &valor);
    getchar();
    printf("%d em hexadecimal é: %x", valor, valor);
    }
//Estrutura de condição onde a variável 1 irá receber o valor do tipo inteiro-decimal e convertê-la no identificador %x que representa o hexadecimal

        else if(escolha==2){
        printf("\n Informe o valor do número hexadecimal à ser convertido: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em decimal é: %d", valor, valor);
        }
//Estrutura de condição onde a variável 2 irá receber o valor do tipo inteiro-hexadecimal e convertê-la no identificador %d que representa o decimal

            else
            printf("Opção inválida, por favor digite a opção correta.");
//Última opção da estrutura de repetição, onde verificará se a opção selecionada no inicio do código é válida, caso não seja, retornará a mensagem de "opção inválida"
return 0;
}
