#include <stdio.h> 

int main (void){
    float nota1, nota2, media;

    printf("Digete a primeira nota\n");
    if( scanf("%f", &nota1) != 1)return 1 ;

    printf("Digete a segunda nota\n");
    if( scanf("%f", &nota1) != 2)return 2 ;


    media = (nota1 + nota2) / 2;
printf("Sua media é: %.2f\n", media);

    if(media >= 6.0){
        printf("aprovadoo\n");
    }
    
    else {
        printf("Rreprovado\n");
    }
        
    return 0;
}