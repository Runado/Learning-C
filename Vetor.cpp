#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
// Criação de um Array, um vetor permite com que eu grave diversas informações em um uníco espaço, porém as informações precisam ser do mesmo tipo. (INT,FLOAT,CHAR)
    int id_usuario[5]; // o tamanho do vetor será de 6 posições de 0 até 5.
    int i;
    for(i=0;i<5;i++){
     printf("Informe o ID do usuário %d: ", i+1);
     scanf("%d", &id_usuario[i]);
     }
     for(i=0;i<5;i++){
     printf("\nO ID do usuário %d é:  %d ", i+1, id_usuario[i]);
     }
}