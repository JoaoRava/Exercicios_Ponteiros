/******************************************************************************

4 ultimos digitos da matricula:5488
Achar o maior endereço de uma variavel

*******************************************************************************/
#include <stdio.h>
int AcharMaior(int *p1, int *p2){
    int *maior;
    if(p1 > p2){
        maior = p1;
    }else{
        maior = p2;
    }
    printf("O maior endereço é: %d\n", maior);
}

int main()
{
    int x_88, z_88;
    
    
    printf("O endereço de x é: %d\n", &x_88);
    printf("O endereço de y é: %d\n", &z_88);
    
    AcharMaior(&x_88, &z_88);
    
    

    return 0;
}