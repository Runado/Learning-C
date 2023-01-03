#include <stdio.h>
#include <locale.h>
#include <math.h>
struct dadosfiap{

	int n1;
	int n2;
	int escolha;	
};
int main(){
	setlocale(LC_ALL,"");
	struct dadosfiap dados;
	while(dados.escolha!=5) {
	fflush(stdin);
	printf("Qual o valor do primeiro numero: ");
	scanf("%d", &dados.n1);	
	printf("Qual o valor do segundo numero: ");
	scanf("%d", &dados.n2);	
	printf("qual operacao você deseja usar  \n[1] Adicao \n[2] Subtracao \n[3] Multiplicacao \n[4] Divicao \n[5] para sair ");
	scanf("%d",  &dados.escolha);
	
		if (dados.escolha==1){
		//somando os numeros no input
		int adicao;
		adicao = dados.n1+dados.n2;
		printf("\n \n o resultado  da Soma: %d \n \n", adicao);
		}
		if(dados.escolha==2){
		int subtracao;
		subtracao=dados.n1-dados.n2;
		printf("\n \n o resultado  da Subtracao: %d \n \n", subtracao);
		}
		if  (dados.escolha==3){
		int multiplicacao;
		multiplicacao=dados.n1*dados.n2;
		printf("\n \n o resultado da multiplicacao: %d \n \n", multiplicacao);
		}
		if (dados.escolha==4){
		int divisao;
		divisao=dados.n1/dados.n2;
		printf("\n \n o resultado da divisao: %d \n \n", divisao);
	}
	}
}