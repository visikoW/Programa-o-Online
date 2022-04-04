#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float a, b, f = 0;
  int c, d, e = 0;
  printf("Por favor! digite dois valores!\n");
  printf("Primeiro valor: ");
  scanf("\n%f", &a);
  printf("Segundo valor: ");
  scanf("\n%f", &b);

  c = a + b;
  d = a - b;
  e = a * b;
  f = a / b;

  printf("A soma dos números é equivalenta a: %i\n", c);
  printf("A subtração dos números é equivalenta a: %i\n", d);
  printf("A multiplicação dos números é equivalenta a: %i\n", e);
  printf("A divisão dos números é equivalenta a: %.4f\n", f);

  return 0;
  
}
