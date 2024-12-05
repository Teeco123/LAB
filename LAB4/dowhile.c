#include <stdio.h>

int menu();

int main()
{
  int wybor;

  do{
    wybor = menu();

    switch (wybor) {
      case 1: printf("wybrales cos1\n"); break;
      case 2: printf("wybrales cos2\n"); break;
      case 3: printf("wybrales cos3\n"); break;
      case 4: printf("koniec\n"); break;
      default: printf("wybrales zla opcje\n");
    }
  } while (wybor != 4);
  return 0;
}

int menu(){
  int w;
  
  printf("MENU\nWybierz jedna z opcji\n");
  printf("1. cos1\n");
  printf("2. cos2\n");
  printf("3. cos3\n");
  printf("4. Koniec programu\n");
  scanf("%d", &w);

  return w;
}
