#include <stdio.h>
#include <stdlib.h>

int kwadrat_obw(int kwadrat_a);
int kwadrat_pol(int kwadrat_a);
int prostokat_obw(int prostokat_a, int prostokat_b);
int prostokat_pol(int prostokat_a, int prostokat_b);
int trapez_obw(int trapez_a, int trapez_b, int trapez_c, int trapez_d);
int trapez_pol(int trapez_a, int trapez_b, int trapez_h);
int trojkat_obw(int trojkat_a, int trojkat_b, int trojkat_c);
int trojkat_pol(int trojkat_a, int trojkat_h);

int main() {
  int kwadrat_a;
  int prostokat_a, prostokat_b;
  int trapez_a, trapez_b, trapez_c, trapez_d, trapez_h;
  int trojkat_a, trojkat_b, trojkat_c, trojkat_h;

  printf("Podaj bok a kwadratu:");
  scanf("%d", &kwadrat_a);
  kwadrat_obw(kwadrat_a);
  kwadrat_pol(kwadrat_a);

  printf("Podaj bok a prostokatu:");
  scanf("%d", &prostokat_a);
  printf("Podaj bok b prostokatu:");
  scanf("%d", &prostokat_b);
  prostokat_obw(prostokat_a, prostokat_b);
  prostokat_pol(prostokat_a, prostokat_b);

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
  trapez_obw(trapez_a, trapez_b, trapez_c, trapez_d);
  trapez_pol(trapez_a, trapez_b, trapez_h);

  printf("Podaj bok a trojkatu:");
  scanf("%d", &trojkat_a);
  printf("Podaj bok b trojkatu:");
  scanf("%d", &trojkat_b);
  printf("Podaj bok c trojkatu:");
  scanf("%d", &trojkat_c);
  printf("Podaj wysokosc trojkatu:");
  scanf("%d", &trojkat_h);
  trojkat_obw(trojkat_a, trojkat_b, trojkat_c);
  trojkat_pol(trojkat_a, trojkat_h);

  return 0;
}

int kwadrat_obw(int kwadrat_a) {
  int obwod;
  obwod = kwadrat_a + kwadrat_a + kwadrat_a + kwadrat_a;
  printf("obwod kwadratu to: %d \n", obwod);

  return obwod;
}

int kwadrat_pol(int kwadrat_a) {
  int pole;
  pole = kwadrat_a * kwadrat_a;
  printf("pole kwadratu to: %d \n", pole);
  printf(" \n");

  return pole;
}

int prostokat_obw(int prostokat_a, int prostokat_b) {
  int obwod;
  obwod = prostokat_a + prostokat_a + prostokat_b + prostokat_b;
  printf("obwod prostakatu to: %d \n", obwod);

  return obwod;
}

int prostokat_pol(int prostokat_a, int prostokat_b) {
  int pole;
  pole = prostokat_a * prostokat_b;
  printf("pole prostakatu to: %d \n", pole);
  printf(" \n");

  return pole;
}

int trapez_obw(int trapez_a, int trapez_b, int trapez_c, int trapez_d) {
  int obwod;
  obwod = trapez_a + trapez_b + trapez_c + trapez_d;
  printf("obwod trapezu to: %d \n", obwod);

  return obwod;
}

int trapez_pol(int trapez_a, int trapez_b, int trapez_h) {
  int pole;
  pole = (trapez_a + trapez_b) * trapez_h / 2;
  printf("pole trapezu to: %d \n", pole);
  printf(" \n");

  return pole;
}

int trojkat_obw(int trojkat_a, int trojkat_b, int trojkat_c) {
  int obwod;
  obwod = trojkat_a + trojkat_b + trojkat_c;
  printf("obwod trojkata to: %d \n", obwod);

  return obwod;
}

int trojkat_pol(int trojkat_a, int trojkat_h) {
  int pole;
  pole = (trojkat_a * trojkat_h) / 2;
  printf("pole trojkata to: %d \n", pole);

  return pole;
}
