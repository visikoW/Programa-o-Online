#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int InserirValor(int x);

int main() {
  
  printf("%f\n", sqrt(16));
  
}

int InserirValor(int x) {
  printf("Por favor insira um valor válido");
  scanf("%i", x);
  return sqrt(x);
}