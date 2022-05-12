#include <stdio.h>
#include <stdlib.h>

float Litro();
float Distancia();

int main(void) {
  int opcao = 0;
  const int parar = 9;

  do {
    printf("\nDigite uma das opções abaixo:\n");
    printf("------------------------\n");
    printf("Litro: 1\n");
    printf("Distacia: 2\n");
    printf("Parar: 9\n");
    printf("------------------------\n");
    printf("Do que precisa calcular: ");
    scanf("%i", &opcao);
    printf("\n");

    switch (opcao) {
    case 1:
      printf("Quantidade de litros irá obter com o valor: %.2fL\n", Litro());
      break;
      
    case 2:
      printf("A quantidade percorrida será de: %.2fKm\n", Distancia());
      break;
    }
  } while (opcao != parar);
}

float Litro(void) {
  float dinheiro;
  float precoLitro;

  printf("Digite o seu saldo: ");
  scanf("%f", &dinheiro);
  
  printf("Digite o preço por litro: ");
  scanf("%f", &precoLitro);

  return dinheiro / precoLitro;
}

float Distancia(void) {
  float litros;
  float consumo;

  printf("Digite a litragem atual: ");
  scanf("%f", &litros);
  
  printf("Digite o cosumo por km: ");
  scanf("%f", &consumo);

  return litros * consumo;
}
