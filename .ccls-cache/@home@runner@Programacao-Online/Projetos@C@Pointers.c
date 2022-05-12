#include <stdio.h>

void space(void);

int main(void) {
  int myAge = 43;
  int* pMyAge = NULL;
  pMyAge = &myAge;
  
  space();

  printf("Endereço de memória do myAge: %p\n", &myAge);
  printf("Endereço de memória do pMyAge: %p\n", pMyAge);

  space();

  printf("Tamanho do myAge: %d bytes\n", sizeof(myAge));
  printf("Tamanho do pMyAge: %d bytes\n", sizeof(pMyAge));

  space();

  printf("Valor do myAge: %d\n", myAge);
  printf("Valor o pMyAge: %d\n",* pMyAge);

  space();

}

void space(void){
  printf("\n------------------------------------\n\n");
}
