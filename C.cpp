#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
// Cria��o de um Array, um vetor permite com que eu grave diversas informa��es em um un�co espa�o, por�m as informa��es precisam ser do mesmo tipo. (INT,FLOAT,CHAR)
    int id_usuario[5];
    int i;
    for(i=;i<5;i++)
    {
     printf("Informe o ID do usu�rio: %d ", i+1 );
     scanf("%d", &id_usuario[i]);
     }
}
