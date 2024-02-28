#include <stdio.h>

//Declarando constante
#define texto "Calculo de notas."
int main(){
	printf("%s\n\n", texto);
	
	//Declarando variáveis
	char nomeAluno[100] = "";
	int idade = 0;
	float notaAv1 = 0.0, notaAv2 = 0.0, notaAv3 = 0.0, notaAv4 = 0.0, media = 0.0;
	
	//Solicitando dados ao usuário
	printf("DIGITE SEU NOME: ");
	scanf("%s",&nomeAluno);
	system("cls");
	
	printf("DIGITE SUA IDADE: ");
	scanf("%i",&idade);
	system("cls");
	
	//Solicitando Notas ao aluno
	printf("INSIRA A NOTA DA AVALIACAO 1: ");
	scanf("%f",&notaAv1);
	system("cls");
	
	printf("INSIRA A NOTA DA AVALIACAO 2: ");
	scanf("%f",&notaAv2);
	system("cls");
	
	printf("INSIRA A NOTA DA AVALIACAO 3: ");
	scanf("%f",&notaAv3);
	system("cls");
	
	printf("INSIRA A NOTA DA AVALIACAO 4: ");
	scanf("%f",&notaAv4);
	system("cls");
	
	//Calculando a média aritmética
	media =  (notaAv1 + notaAv2 + notaAv3 + notaAv4) / 4;
	
	//Exibindo dados ao usuário
	printf("\nALUNO: %s" ,nomeAluno);
	printf("\nIDADE: %i" , idade);
	printf("\nNOTA DA AVALIACAO 1: %.1f" , notaAv1);
	printf("\nNOTA DA AVALIACAO 2: %.1f" , notaAv2);
	printf("\nNOTA DA AVALIACAO 3: %.1f" , notaAv3);
	printf("\nNOTA DA AVALIACAO 4: %.1f" , notaAv4);
	printf("\nMEDIA DAS NOTAS: %.1f" , media);
	
	if(media >= 7){
		printf("\n\nVOCE ESTA APROVADO(a)!");
	}else{
		printf("\n\nVOCE ESTA REPROVADO!");
	}
 
 //Fim do programa
 return 0;
}
