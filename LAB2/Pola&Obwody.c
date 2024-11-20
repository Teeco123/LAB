#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kwadrat_a;
    printf("Podaj bok a kwadratu:");
    scanf("%d", &a);

    int prostokat_a, prostokat_b;
    printf("Podaj bok a prostokatu:");
    scanf("%d", &prostokat_a);

    printf("Podaj bok b prostokatu:");
    scanf("%d", &prostokat_b);

    int trapez_a, trapez_b, trapez_c, trapez_d;
    printf("Podaj bok a trapezu:");
    scanf("%d", &trapez_a);
    
    printf("Podaj bok b trapezu:");
    scanf("%d", &trapez_b);
    
    printf("Podaj bok c trapezu:");
    scanf("%d", &trapez_c);
    
    printf("Podaj bok d trapezu:");
    scanf("%d", &trapez_d);

    int h;
    printf("Podaj h:");
    scanf("%d", &h);

    int kwadrat(){
        int obwod;
        int pole;
        obwod = a + a + a + a;
        pole = a * a;
        printf("obwod kwadratu to: %d \n", obwod);
        printf("pole kwadratu to: %d \n", pole);
        printf(" \n");
    }

    int prostokat(){
        int obwod;
        int pole;
        obwod = a + a + b + b;
        pole = a * b;
        printf("obwod prostakatu to: %d \n", obwod);
        printf("pole prostakatu to: %d \n", pole);
        printf(" \n");
    }

    int trapez(){
        int obwod;
        int pole;
        obwod = a + b + c + d;
        pole = (a + b) * h / 2;
        printf("obwod trapezu to: %d \n", obwod);
        printf("pole trapezu to: %d \n", pole);
        printf(" \n");
    }

    int trojkat(){
        int obwod;
        int pole;
        obwod = a + b +c;
        pole = (a * h) / 2;
        printf("obwod trojkata to: %d \n", obwod);
        printf("pole trojkata to: %d \n", pole);
    }

    kwadrat();
    prostokat();
    trapez();
    trojkat();

    return 0;
}
