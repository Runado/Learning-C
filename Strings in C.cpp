#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "");
	char letra [20]; // String é um Vetor do Tipo Char, no exemplo anterior é capaz armazenar até 21 posições (21 letras)
	printf("Digite seu Nome!  ");
	fflush(stdin); // este comando será útil para limpar caracteres não desejados do input como por exemplo a tecla ENTER.
	// para exibir strings não é necessário colocar o & antes da variável e é necessário utilizar o %s para armazenar no buffer as strings.
	gets (letra); // utilizando o método getS é possível armazenar o input de strings de forma facilitada
	printf("\nO Seu nome e: %s ", letra);
	
}