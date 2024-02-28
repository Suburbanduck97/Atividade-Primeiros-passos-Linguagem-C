#include <stdio.h>
//Declarando uma constante
#define texto "Atividade 1."
int main(){
printf("%s\n", texto);

//Declarando variáveis
float soma = 0.0 , subtracao = 0.0 , multiplicacao = 0.0 , divisao = 0.0, numeroA = 0.0 , numeroB = 0.0;

//Solicitando dados ao usuário
printf("INSIRA UM NUMERO: ");
scanf("%f",&numeroA);

printf("\nINSIRA UM OUTRO NUMERO: ");
scanf("%f",&numeroB);

//Exibindo dados
printf("\nNUMERO A INSERIDO: %.1f",numeroA);

printf("\nNUMERO B INSERIDO: %.1f", numeroB);

//Cálculo do sistema

//Soma
soma = numeroA + numeroB;

printf("\n\nA soma de %.1f + %.1f = %.1f",numeroA , numeroB, soma);

//Subtrção
subtracao = numeroA - numeroB;

printf("\n\nA subtracao de %.1f - %.1f = % .1f",numeroA , numeroB, subtracao);


//Multiplicação
multiplicacao = numeroA * numeroB;

printf("\n\nA multiplicacao de %.1f x %.1f = %1.f", numeroA , numeroB , multiplicacao);

//Divisão
divisao = numeroA / numeroB;

printf("\n\nA divisao de %.1f / %.1f = %1.f", numeroA , numeroB , divisao);

//Fim do programa
return 0;

}
