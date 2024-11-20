#include <stdio.h>
#include <stdlib.h>

int kwadrat() {

  int kwadrat_a;
  printf("Podaj bok a kwadratu:");
  scanf("%d", &kwadrat_a);

  int obwod, pole;
  obwod = kwadrat_a + kwadrat_a + kwadrat_a + kwadrat_a;
  pole = kwadrat_a * kwadrat_a;
  printf("obwod kwadratu to: %d \n", obwod);
  printf("pole kwadratu to: %d \n", pole);
  printf(" \n");

  return 0;
}

int prostokat() {
  int prostokat_a, prostokat_b;
  printf("Podaj bok a prostokatu:");
  scanf("%d", &prostokat_a);

  printf("Podaj bok b prostokatu:");
  scanf("%d", &prostokat_b);

  int obwod, pole;
  obwod = prostokat_a + prostokat_a + prostokat_b + prostokat_b;
  pole = prostokat_a * prostokat_b;
  printf("obwod prostakatu to: %d \n", obwod);
  printf("pole prostakatu to: %d \n", pole);
  printf(" \n");

  return 0;
}

int trapez() {
  int trapez_a, trapez_b, trapez_c, trapez_d, trapez_h;
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

  int obwod, pole;
  obwod = trapez_a + trapez_b + trapez_c + trapez_d;
  pole = (trapez_a + trapez_b) * trapez_h / 2;
  printf("obwod trapezu to: %d \n", obwod);
  printf("pole trapezu to: %d \n", pole);
  printf(" \n");

  return 0;
}

int trojkat() {
  int trojkat_a, trojkat_b, trojkat_c, trojkat_h;
  printf("Podaj bok a trojkatu:");
  scanf("%d", &trojkat_a);

  printf("Podaj bok b trojkatu:");
  scanf("%d", &trojkat_b);

  printf("Podaj bok c trojkatu:");
  scanf("%d", &trojkat_c);

  printf("Podaj wysokosc trojkatu:");
  scanf("%d", &trojkat_h);

  int obwod, pole;
  obwod = trojkat_a + trojkat_b + trojkat_c;
  pole = (trojkat_a * trojkat_h) / 2;
  printf("obwod trojkata to: %d \n", obwod);
  printf("pole trojkata to: %d \n", pole);

  return 0;
}

int main() {
  kwadrat();
  prostokat();
  trapez();
  trojkat();

  return 0;
}
