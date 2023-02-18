#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float a, b, c, delta, x1, x2,Xvertice,Yvertice;

    printf("Neste programa iremos determinar as raizes de uma equacao de 2 grau\n");
            printf("Para facilitar a plotagem da parabola, tambem sera calculado o x e y do vertice\n\n");

                printf("Com base na equacao ax elevado a 2 + bx + c\n");
        
        printf("Digite o valor de a:");
            scanf("%f",&a);
    
                printf("Digite o valor de b:");
                    scanf("%f",&b);
    
                    printf("Digite o valor de c:");
                        scanf("%f",&c);
                            printf("\n");

                                printf("Delta = b elevado a 2 - 4.a.c\n\n");
                                    delta = (b*b) - 4*a *c;
                                        printf("Delta = %.1f\n\n",delta);



    if (delta < 0){

        printf("Delta negativo - nao existe raizes\n");
    
    }if (delta == 0){

        printf("Concavidade da parabola para cima\n\n\n");

            x1 = (-b + (sqrt(delta)))/(2*a);
                x2 = (-b - (sqrt(delta)))/(2*a);

                    printf("Delta igual 0 - Esta operacao tera duas raizes iguais\n\n");
                        printf("X1 = X2 = %.1f\n\n",x1);

    Xvertice = -b/(2*a);
        Yvertice = -delta/(4*a);
    
            printf("O valor de X do vertice e :  %.1f\n\n",Xvertice);
                printf("O valor de Y do vertice e:  %.1f\n\n",Yvertice);
    
    }else if (delta > 0){

        printf("Concavidade da parabola para baixo\n\n");

    
    x1 = (-b + (sqrt(delta)))/(2*a);
        x2 = (-b - (sqrt(delta)))/(2*a);

            printf("Delta = %.1f\n\n",delta);
                printf("X1 = %.1f\n",x1);
                    printf("X2 = %.1f\n\n",x2);

    Xvertice = -b/(2*a);
        Yvertice = -delta/(4*a);
    
            printf("O valor de X do vertice e :  %.1f\n\n",Xvertice);
                printf("O valor de Y do vertice e:  %.1f\n\n",Yvertice);

    }
    return 0;

}

//Teste
