#include <stdio.h>

//Definindo Constante
#define texto "Atividade reajuste"
int main(){
	printf("%s\n", texto);
	
	//Declarando variáveis
	float reais = 0.0 , desconto = 0.0, valorFinal = 0.0;
	char nome[80], sexo = "";
	
	//Solicitando dados ao usuário
	printf("INSIRA SEU NOME: ");
	scanf("%s",&nome);
	system("cls");
	
	printf("SEXO: ");
	fflush(stdin);
	scanf("%c",&sexo);
	system("cls");
	
	printf("INSIRA UM VALOR EM REAIS: R$");
	scanf("%f",&reais);
	
	//Cálculo do sistema
	desconto = reais * 0.1;
	valorFinal = reais - desconto;
	
	//Exibindo dados
	printf("\nNOME: %s", nome);
	printf("\nSEXO: %c", sexo);
	printf("\nVALOR ADICIONADO: %.2f", reais);
	printf("\nDESCONTO APLICADO: 10%");
	printf("\nVALOR COM DESCONTO: %.2f", valorFinal);
	
	//Final Programa
	return 0;
}
