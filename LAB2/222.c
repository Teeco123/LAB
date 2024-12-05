#include <stdio.h>
#include <stdlib.h>

int main() {
  int kwadrat_a;
  int prostokat_a, prostokat_b;
  int trapez_a, trapez_b, trapez_c, trapez_d, trapez_h;
  int trojkat_a, trojkat_b, trojkat_c, trojkat_h;
  int obwod_kwadrat, obwod_prostokat, obwod_trapez, obwod_trojkat;
  int pole_kwadrat, pole_prostokat, pole_trapez, pole_trojkat;

  printf("Podaj bok a kwadratu:");
  scanf("%d", &kwadrat_a);
  obwod_kwadrat = kwadrat_a + kwadrat_a + kwadrat_a + kwadrat_a;
  printf("obwod kwadratu to: %d \n", obwod_kwadrat);
  pole_kwadrat = kwadrat_a * kwadrat_a;
  printf("pole kwadratu to: %d \n", pole_kwadrat);
  printf(" \n");

  printf("Podaj bok a prostokatu:");
  scanf("%d", &prostokat_a);
  printf("Podaj bok b prostokatu:");
  scanf("%d", &prostokat_b);
  obwod_prostokat = prostokat_a + prostokat_a + prostokat_b + prostokat_b;
  printf("obwod prostakatu to: %d \n", obwod_prostokat);
  pole_prostokat = prostokat_a * prostokat_b;
  printf("pole prostakatu to: %d \n", pole_prostokat);
  printf(" \n");

  printf("Podaj bok a trapezu:");
  scanf("%d", &trapez_a);
  printf("Podaj bok b trapezu:");
  scanf("%d", &trapez_b);
  printf("Podaj bok c trapezu:");
  scanf("%d", &trapez_c);
  printf("Podaj bok d trapezu:");
  scanf("%d", &trapez_d);
  printf("Podaj wysokosc trapeu:");
  scanf("%d", &trapez_h);
  obwod_trapez = trapez_a + trapez_b + trapez_c + trapez_d;
  printf("obwod trapezu to: %d \n", obwod_trapez);
  pole_trapez = (trapez_a + trapez_b) * trapez_h / 2;
  printf("pole trapezu to: %d \n", pole_trapez);
  printf(" \n");

  printf("Podaj bok a trojkatu:");
  scanf("%d", &trojkat_a);
  printf("Podaj bok b trojkatu:");
  scanf("%d", &trojkat_b);
  printf("Podaj bok c trojkatu:");
  scanf("%d", &trojkat_c);
  printf("Podaj wysokosc trojkatu:");
  scanf("%d", &trojkat_h);
  obwod_trojkat = trojkat_a + trojkat_b + trojkat_c;
  printf("obwod trojkata to: %d \n", obwod_trojkat);
  pole_trojkat = (trojkat_a * trojkat_h) / 2;
  printf("pole trojkata to: %d \n", pole_trojkat);

  return 0;
}
