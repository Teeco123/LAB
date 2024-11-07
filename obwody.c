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

    int obwod_kwadratu(){
        int obwod;
        obwod = a + a + a + a;
        printf("obwod kwadratu to: %d \n", obwod);
    }

    int obwod_prostokatu(){
        int obwod;
        obwod = a + a + b + b;
        printf("obwod prostakatu to: %d \n", obwod);
    }

    int obwod_trapezu(){
        int obwod;
        obwod = a + b + c + d;
        printf("obwod trapezu to: %d \n", obwod);
    }

    int obwod_trojkata(){
        int obwod;
        obwod = a + b +c;
        printf("obwod trojkata to: %d \n", obwod);
    }

    obwod_kwadratu();
    obwod_prostokatu();
    obwod_trapezu();
    obwod_trojkata();

    return 0;
}
