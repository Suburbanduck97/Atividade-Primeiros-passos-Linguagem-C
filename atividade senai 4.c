#include <stdio.h>
//Declarando uma constante
#define texto "Antecessor e Sucessor"
int main(){
	printf("%s\n", texto);
	
	//Declarando variáveis
	int numero = 0;
	
	//Solicitando dados
	printf("INSIRA UM NUMERO: ");
	scanf("%d",&numero);
    system("cls");
	
	//Exebindo dados
	printf("NUMERO INSERIDO: %d ", numero);

	//Processo de sucessão
	numero++;
	printf("\nO SUCESSOR DE %d E: %d", numero,numero--);
	
	//Processo de antecessão
	numero--;
	printf("\nO ANTECESSOR DE %d E: %d", numero,numero++);
	
	//Fim do programa
	return 0;
}

  
