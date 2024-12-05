#include <math.h>
#include <stdio.h>

int main() {
  int silnia;
  int n;

  printf("Podaj liczbe do polczenia silni:");
  scanf("%d", &n);

  while (n < 0) {
    printf("podaj n wieksze od 0\n");
    scanf("%d", &n);
  };

  for (int i = 1; i <= n; i++) {
    silnia *= i;
  }

  printf("silnia liczby %d jest rowna %d\n", n, silnia);

  return 0;
}
