#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"");
	int n1;
	int n2;
	char escolha;
	

	while(escolha!=5) {
	fflush(stdin);
	printf("Qual o valor do segundo numero: ");
	scanf("%d", &n2);	
		printf("qual operacao você deseja usar  \n[1] Adicao \n[2] Subtracao \n[3] Multiplicacao \n[4] Divicao \ndigite [5] para sair ");
		scanf("%d",  &escolha);
		if (escolha == 1){
		//somando os numeros no input
		int adicao;
		adicao = n1+n2;
		printf("\n \n o resultado  da Soma: %d \n \n", adicao);
		}
		if  (escolha == 2){
		int subtracao;
		subtracao = n1-n2;
		printf("\n \n o resultado  da Subtracao: %d \n \n", subtracao);
		}
		if  (escolha == 3){
		int multiplicacao;
		multiplicacao = n1*n2;
		printf("\n \n o resultado da multiplicacao: %d \n \n", multiplicacao);
		}
		if (escolha == 4){
		int divisao;
		divisao = n1/n2;
		printf("\n \n o resultado da divisao: %d \n \n", divisao);
	}
	}
}