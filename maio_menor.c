#include <stdio.h>

int main(){

    int numero, i, maior, menor;

   

    for( i = 1; i <= 10; i++){


        printf("digite 10 numeros:");
        scanf("%d", &numero);

        

        if( i == 1){
         maior = numero;
         menor = numero;

        }else{
            if( numero > maior){
           maior = numero;
         } 
         if(numero < menor) {
            menor = numero;
        }
    }
    }

    printf(" maior: %d\n", maior);
    printf(" menor: %d\n", menor);

    return 0;
}