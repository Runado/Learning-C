#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
// Criação de um Array, um vetor permite com que eu grave diversas informações em um uníco espaço, porém as informações precisam ser do mesmo tipo. (INT,FLOAT,CHAR)
    int id_usuario[5];
    int i;
    for(i=;i<5;i++)
    {
     printf("Informe o ID do usuário: %d ", i+1 );
     scanf("%d", &id_usuario[i]);
     }
}
