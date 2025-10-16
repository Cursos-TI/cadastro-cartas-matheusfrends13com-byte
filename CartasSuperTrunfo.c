#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char riodejaneiro = 'A';
  char carta[6];
  char cidade[20];
  int populaçao;
  float area;
  float PIB;
  int pontoturistico;
 // Área para entrada de dados
  printf("PRIMEIRA CARTA\n");
  printf("ESTADO: %c\n",riodejaneiro);

  printf("digite o código: \n");
  scanf("%s", &carta);
  printf("CÓDIGO: %s\n", carta);

  printf("digite a cidade: \n");
  scanf("%s", &cidade);
  printf("CIDADE: %s\n", cidade);

  printf("digite a população: \n");
  scanf("%d", &populaçao);
  printf("POPULAÇÃO: %d\n", populaçao);

  printf("digite a área: \n");
  scanf("%f", &area);
  printf("ÁREA: %f\n", area);

  printf("digite o pib: \n");
  scanf("%f", &PIB);
  printf("PIB: %f\n", PIB);

  printf(": \n");
  scanf("%i", &pontoturistico);
    
   return 0;
  // Área para exibição dos dados da cidade

} 
