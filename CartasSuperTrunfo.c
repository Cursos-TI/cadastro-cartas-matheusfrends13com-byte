#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char riodejaneiro = 'A';
  char carta1[6];
  char carta2[6];
  char cidade1[15];
  char cidade2[15];
  int populaçao1, populaçao2;
  float area1, area2;
  float PIB1, PIB2;
  int pontoturistico1, pontoturistico2;
 

 // Área para entrada de dados
  printf("PRIMEIRA CARTA\n");
  printf("ESTADO: %c\n",riodejaneiro);

  printf("digite o código: \n");
  scanf("%s", &carta1);
  
  printf("digite a cidade: \n");
  scanf("%s", &cidade1);
  
  printf("digite a população: \n");
  scanf("%d", &populaçao1);
  
  printf("digite a área: \n");
  scanf("%f", &area1);
  
  printf("digite o pib: \n");
  scanf("%f", &PIB1);
 
  printf("digite os pontos turisticos: \n");
  scanf("%d", &pontoturistico1);

  
   
  printf("SEGUNDA CARTA\n");
  printf("ESTADO: %c\n",riodejaneiro);

  printf("digite o código: \n");
  scanf("%s", &carta2);
  
  printf("digite a cidade: \n");
  scanf("%s", &cidade2);
  
  printf("digite a população: \n");
  scanf("%d", &populaçao2);
  
  printf("digite a área: \n");
  scanf("%f", &area2);
  
  printf("digite o pib: \n");
  scanf("%f", &PIB2);
 
  printf("digite os pontos turisticos: \n");
  scanf("%d", &pontoturistico2);

 
  printf("PRIMEIRA CARTA\n");
  printf("ESTADO: %c\n",riodejaneiro);
  printf("CÓDIGO: %s\n", carta1);
  printf("CIDADE: %s\n", cidade1);
  printf("POPULAÇÃO: %d\n", populaçao1);
  printf("ÁREA: %f\n", area1);
  printf("PIB: %f\n", PIB1);
  printf("PONTO TURISTICO: %d\n", pontoturistico1);
  printf("DENSIDADE POPULACIONAL: %.f\n", populaçao1 / area1);
  printf("PIB PER CAPITA: %f\n", PIB1 / populaçao1);

  printf("SEGUNDA CARTA\n");
  printf("ESTADO: %c\n",riodejaneiro);
  printf("CÓDIGO: %s\n", carta2);
  printf("CIDADE: %s\n", cidade2);
  printf("POPULAÇÃO: %d\n", populaçao2);
  printf("ÁREA: %f\n", area2);
  printf("PIB: %f\n", PIB2);
  printf("PONTO TURISTICO: %d\n", pontoturistico2);
  printf("DENSIDADE POPULACIONAL: %.f\n", populaçao2 / area2);
  printf("PIB PER CAPITA: %.f\n", PIB2 / populaçao2);
  

  return 0;

 // Área para exibição dos dados da cidade
} 