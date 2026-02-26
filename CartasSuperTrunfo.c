#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // --- VARIÁVEIS CARTA 1 ---
  char estado;
  char codigoDaCarta[4];
  char nomedacidade[34];
  int populacao;
  float area;
  float pib;
  int numerodepontosturisticos;

  // --- VARIÁVEIS CARTA 2 ---
  char estado2;
  char codigoDaCarta2[4];
  char nomedacidade2[34];
  int populacao2;
  float area2;
  float pib2;
  int numerodepontosturisticos2;

  printf("digite o nome do estado: \n");
  scanf(" %c", &estado); // Ajustado para %c (uma letra)
  setbuf(stdin, NULL);

  printf("digite o da codigoDaCarta \n");
  scanf("%s", codigoDaCarta);
  setbuf(stdin, NULL);

  printf("digite o da nome da cidade (sem espacos): \n");
  scanf("%s", nomedacidade);
  setbuf(stdin, NULL);

  printf("digite o da populacao \n");
  scanf("%i", &populacao);
  setbuf(stdin, NULL);

  printf("digite o da area \n");
  scanf("%f", &area);
  setbuf(stdin, NULL);

  printf("digite o da pib \n");
  scanf("%f", &pib);
  setbuf(stdin, NULL);

  printf("digite o da numerodepontosturisticos \n");
  scanf("%i", &numerodepontosturisticos);
  setbuf(stdin, NULL);

  printf("\n--- Agora digite os dados da Carta 2 ---\n");

  printf("digite o nome do estado 2: \n");
  scanf(" %c", &estado2); // Ajustado para %c
  setbuf(stdin, NULL);

  printf("digite o da codigoDaCarta 2: \n");
  scanf("%s", codigoDaCarta2);
  setbuf(stdin, NULL);

  printf("digite o da nome da cidade 2 (sem espacos): \n");
  scanf("%s", nomedacidade2);
  setbuf(stdin, NULL);

  printf("digite o da populacao 2: \n");
  scanf("%i", &populacao2);
  setbuf(stdin, NULL);

  printf("digite o da area 2: \n");
  scanf("%f", &area2);
  setbuf(stdin, NULL);

  printf("digite o da pib 2: \n");
  scanf("%f", &pib2);
  setbuf(stdin, NULL);

  printf("digite o da numerodepontosturisticos 2: \n");
  scanf("%i", &numerodepontosturisticos2);
  setbuf(stdin, NULL);

  printf("\nCarta 1: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n Número de Pontos Turísticos: %i\n", estado, codigoDaCarta, nomedacidade, populacao, area, pib, numerodepontosturisticos);

  printf("\nCarta 2: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %i \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n Número de Pontos Turísticos: %i\n", estado2, codigoDaCarta2, nomedacidade2, populacao2, area2, pib2, numerodepontosturisticos2);

  return 0;
}