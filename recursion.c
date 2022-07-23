#include <stdio.h>

int somar(int valor){
    if(valor==0){
        return valor;
    }else{
        return valor + somar(valor-1);
    }
}
void main(){
    int n, resultado;
    printf("\nDigite um valor de numero natural: ");
    scanf("%d",&n);
    resultado = somar(n);
    printf("\nResultado: %d",resultado);
}
