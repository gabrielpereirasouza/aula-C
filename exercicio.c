#include <stdio.h>

int main(void){
    char nome[100];

    printf("Digite seu nome:\n");
    scanf("%s", nome); 

    printf("Bem vindo meu amigo %s\n", nome); 

    return 0;
}