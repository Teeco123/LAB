#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj a:");
    scanf("%d", &a);

    int b;
    printf("Podaj b:");
    scanf("%d", &b);

    int c;
    printf("Podaj c:");
    scanf("%d", &c);

    int d;
    printf("Podaj d:");
    scanf("%d", &d);

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
