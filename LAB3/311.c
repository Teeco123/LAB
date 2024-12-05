#include <stdio.h>
#include <math.h>
#define PI 3.14

float wartoscFunkcji(int t, float alfa);

int main()
{
  int t;
  float alfa;
  
  printf("Podaj wartosc t:");
  scanf("%d", &t);
  printf("Podaj alfe:");
  scanf("%f", &alfa);

  if(t >= 0 || t <=6){
    printf("Wartosc funkcji dla t = %d, wynosi %.2f\n", t, wartoscFunkcji(t, alfa));
  }else {
    printf("Podaj t w zakresie 0-3");
  }

  return 0;
}

float wartoscFunkcji(int t, float alfa){
  float z;

  alfa = alfa * PI / 180;
  
  if(t==8){
    z = 1 - sin(alfa);
  } else if (t >= 0 || t <= 3) {
    z = -0.5 * (1 + cos(alfa));
  } else if (t >= 4 || t <= 6) {
    z = sqrt(alfa * alfa + 1);
  }

  return z;
}
