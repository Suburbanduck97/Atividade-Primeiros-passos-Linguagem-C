#include <stdio.h>
//Declarando constante
#define texto "PAR OU IMPAR?"
 int main(){
 	printf("%s\n", texto);
 	
 	//Declarando variáveis
 	int numeroA = 0 , numeroB = 0, resto = 0;
 	
 	//Solicitando dados ao usuário
 	printf("INSIRA UM NUMERO INTEIRO: ");
 	scanf("%d", &numeroA);
 	system("cls");
 	
 	
 	//Cálculo do sistema
 	resto = numeroA % 2;
 	
 	//Exibindo dados
 	printf("NUMERO INSERIDO: %d", numeroA);
 	
 	
 	//Sistema de causa
 	if(resto == 0){
 		printf("\nESTE NUMERO E PAR");
	 }else{
	 	printf("\nESTE NUMERO E IMPAR");
	 }
 	//Terminando programa
 	return 0;
 	
 	
 }
