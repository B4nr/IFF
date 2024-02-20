#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma; float n1,n2,med; char nome;
    //printf("Valor de X:"); scanf("%d",&x);
    //printf("Valor de Y:"); scanf("%d",&y);
    //soma = x+y; printf("Valor da soma eh igual a %d", soma);
    printf("Valor de N1:"); scanf("%f",&n1);
    printf("Valor de N2:"); scanf("%f",&n2);
    med = (n1+n2)/2;
    if (med >= 6){
        printf("Aprovado com nota %.2f", med);
    }
    else {
        if(med >= 4){
            printf{"Em recuperacao com nota %.2f", med};
        }
        else{
            prinf{"Reprovado com nota %.2f", med}
        }
    }
        return 0;
}
