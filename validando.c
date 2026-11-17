#include <stdio.h> 

int main (void){
    float nota1, nota2, media;

    printf("Digete a primeira nota\n");
    if( scanf("%f", &nota1) != 1)return 1 ;

    printf("Digete a segunda nota\n");
    if( scanf("%f", &nota1) != 1) return 1 ;


if (nota1 < 0 || nota1 > 1 || nota2 < 0 || nota2 >10){

    printf("Nota invalida, use valores de 0 a 10.\n");

    return 1; 
}

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