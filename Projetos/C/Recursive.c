#include <stdio.h>

int calcular(int n);

int main (void) {
  int ordem;

  printf("Digite a ordem que quer receber da sequência de Fibonacci: ");
  scanf("%i", &ordem);
  printf("A soma será de : %d\n", calcular(ordem));

}

int calcular(int n) {
  
  if (n <= 1) {
    return n;
  } else {
    printf("Nº %d: %d e %d\n", n, calcular(n-1), calcular(n-2));
    return calcular(n-1) + calcular(n-2);
  }

}
