/******************************************************************************

4 ultimos digitos da matricula:5488
Desenvolva um algoritmo que leia numeros inteiros em um vetor de tamanho 7, 
e mostre os endereços de cada posiçao desse vetor

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor_5488[7];
    
    printf("O endereço da primeira posiçao do vetor é: %d\n", &vetor_5488[1]);
    printf("O endereço da segunda posiçao do vetor é: %d\n", &vetor_5488[2]);
    printf("O endereço da terceira posiçao do vetor é: %d\n", &vetor_5488[3]);
    printf("O endereço da quarta posiçao do vetor é: %d\n", &vetor_5488[4]);
    printf("O endereço da quinta posiçao do vetor é: %d\n", &vetor_5488[5]);
    printf("O endereço da sexta posiçao do vetor é: %d\n", &vetor_5488[6]);
    printf("O endereço da setima posiçao do vetor é: %d\n", &vetor_5488[7]);

    return 0;
}
