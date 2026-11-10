#include <stdio.h> 

int main (void){
    float nota1, nota2, nota3, media;

    printf("Digete a primeira nota\n");
    scanf("%f", &nota1);
        printf("Digete a segunda nota\n");
    scanf("%f", &nota2);
        printf("Digete a terceira nota\n");
    scanf("%f", &nota3);


    media = (nota1 + nota2) / 3;
printf("Sua media é: %.2f\n", media);

    return 0;
}