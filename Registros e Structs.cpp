#include <stdio.h>
#include <locale.h>

// Ao definir uma Struct, é possível definir todas as variaveís que serão utilizado nela
struct Dados_de_Sistema{
	char sistema_operacional[20];
	char versao[20];
	int id_maquina;
	
};
int main(){
	setlocale(LC_ALL, "");
	struct Dados_de_Sistema sistema; // Nessa linha vamos dizer que a Struct Dados_de_Sistema irá ter o nome da variável "sistema".
	printf("Digite o Nome do SO: ");
	fflush(stdin);
	gets(sistema.sistema_operacional);
	
	printf("Digite a versão do SO: ");
	fflush(stdin);
	gets(sistema.versao);
	
	printf("Digite o id da máquina: ");
	fflush(stdin);
	gets(sistema.id_maquina);
	printf("\n O %s esta na versao %s na maquina %d", sistema_operacional, versao, id_maquina);
}