#include <stdio.h>
//Declarando uma constante

#define texto "Quantidades de salarios minimos."
int main(){
	printf("%s\n", texto);
	
	//Declarando varíaveis
	float meuSalario = 0.0, salarioMinimo = 1.412;
	
	//Solicitando dados ao usuário
	printf("INSIRA SEU SALARIO DA FORMA(0.000): ");
	scanf("%f",&meuSalario);
	system("cls");
	
	//Exibindo dados ao usuário
	printf("VALOR DO SALARIO MINIMO: %.3f", salarioMinimo);
	printf("\n\nSEU SALARIO: %.3f", meuSalario);
	
	//Cálculo do sistema
	if(meuSalario < salarioMinimo){
		printf("\n\nVOCE RECEBE MENOS DO QUE UM SALARIO MINIMO");
	}else if(meuSalario == salarioMinimo){
		printf("\n\nVOCE RECEBE UM SALARIO MINIMO");
	}else if(meuSalario >= salarioMinimo && meuSalario <= salarioMinimo * 2){
		printf("\n\nVOCE RECEBE ENTRE UM A DOIS SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 2){
		printf("\n\nVOCE RECEBE DOIS SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 2 && meuSalario <= salarioMinimo * 3){
		printf("\n\nVOCE RECEBE ENTRE DOIS A TRES SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 3){
		printf("\n\nVOCE RECEBE TRES SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 3 && meuSalario <= salarioMinimo * 4){
		printf("\n\nVOCE RECEBE ENTRE TRES A QUATRO SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 4){
		printf("\n\nVOCE RECEBE QUATRO SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 4 && meuSalario <= salarioMinimo * 5){
		printf("\n\nVOCE RECEBE ENTRE QUATRO A CINCO SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 5){
		printf("\n\nVOCE RECEBE CINCO SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 5 && meuSalario <= salarioMinimo * 6){
		printf("\n\nVOCE RECEBE ENTRE CINCO A SEIS SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 6){
		printf("\n\nVOCE RECEBE SEIS SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 6 && meuSalario <= salarioMinimo * 7){
		printf("\n\nVOCE RECEBE ENTRE SEIS A SETE SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 7){
		printf("\n\nVOCE RECEBE SETE SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 7 && meuSalario <= salarioMinimo * 8){
		printf("\n\nVOCE RECEBE ENTRE SETE A OITO SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 8){
		printf("\n\nVOCE RECEBE OITO SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 8 && meuSalario <= salarioMinimo * 9){
		printf("\n\nVOCE RECEBE ENTRE OITO A NOVE SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 9){
		printf("\n\nVOCE RECEBE NOVE SALARIOS MINIMOS");
	}else if(meuSalario >= salarioMinimo * 9 && meuSalario <= salarioMinimo * 10){
		printf("\n\nVOCE RECEBE ENTRE NOVE A DEZ SALARIOS MINIMOS");
	}else if(meuSalario == salarioMinimo * 11 || meuSalario > salarioMinimo * 11){
		printf("\n\nVOCE RECEBE MAIS DO QUE DEZ SALARIOS MINIMOS");
    }
	//Fim do programa
	return 0;
}
