#include <stdlib.h>
#include <stdio.h>

int main(void) {
  
  int day;
  printf("Por favor, digite um valor entre 1 e 7: ");
  scanf("%d", &day);

  switch (day) {
    case 1:
      printf("Segunda-Feira\n");
      break;
    case 2:
      printf("Terça-Feira\n");
      break;
    case 3:
      printf("Quarta-Feira\n");
      break;
    case 4:
      printf("Quinta-Feira\n");
      break;
    case 5:
      printf("Sexta-Feira\n");
      break;
    case 6:
      printf("Sábado\n");
      break;
    case 7:
      printf("Domingo\n");
      break;
  }
  
  return 0;
  
}
