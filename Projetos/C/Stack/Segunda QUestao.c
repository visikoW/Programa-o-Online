#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "Portuguese");

  long cpf;
  printf("Insira CPF: ");
  scanf("%li", &cpf);
  printf("CPF: %li\n", cpf);
}