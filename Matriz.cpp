// Matriz, ao pensar na matriz iremos então criar um vetor que receberá os dados na ordem em que a matriz for estipulada
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int id_usuario [5] [2]; //O Vetor terá 5 posiçõo e irá receber as informações conforme o valor da matriz. 
	int i;
	for (i=0;i<5;i++){
		printf("Informe a id do usuário %D: ", i+1);
		scanf("%d", &id_usuario[i] [0]);
		printf("Informe o grau de risco do usuário: ");
		scanf("%d", &id_usuario[i] [1]);
		
	}
	for (i=0;i<5;i++){ 
		printf (" \n O id do usuário %d: é %d e seu risco é: %d", i+1, id_usuario[i] [0], id_usuario[i] [1]);
		if(id_usuario[i] [1]==10){
			printf("*********Atenção*********");
		}
		
	}


}