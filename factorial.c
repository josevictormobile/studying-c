#include <stdio.h>
#include <stdlib.h>

int factorial(int value){
    if(value==1){
        return value;
    }else{
        return value * factorial(value-1);
    }
}

void main(){
    int n, result;
    printf("\nInsira o valor a ser fatorado: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("\nO resultado da fatoracao: %d",result);
}
