#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float a, b, divisao = 0;
  int soma, subtracao, multiplicacao = 0;
  printf("Por favor! digite dois valores!\n");
  printf("Primeiro valor: ");
  scanf("\n%f", &a);
  printf("Segundo valor: ");
  scanf("\n%f", &b);

  soma = a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = a / b;

  printf("A soma dos números é equivalenta a: %i\n", soma);
  printf("A subtração dos números é equivalenta a: %i\n", subtracao);
  printf("A multiplicação dos números é equivalenta a: %i\n", multiplicacao);
  printf("A divisão dos números é equivalenta a: %.4f\n", divisao);

  return 0;
}
