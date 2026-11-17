#include <stdio.h> 

int main (void){
    int opcao; 
    float nota1, nota2, media;

    do{
        printf("\n1--Calcular media \n0--Sair\nEscolha");
        if(scanf("%d",&opcao) != 1) return 1;

        if opcao == 1 { //Função que calcula a média 

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

        } 
         //Final da função que calcula a média 
        else if(opcao != 0) {
            printf("Opação inválida");
            
        }

    }while(opcao !=0); 
    printf("")


        
    return 0;
}