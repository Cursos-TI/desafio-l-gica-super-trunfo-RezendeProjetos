#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

int main() {
    // Variáveis de entrada
    char nomepais1[50], nomepais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    int opcao1, opcao2;
    float valor1_p1 = 0, valor1_p2 = 0;
    float valor2_p1 = 0, valor2_p2 = 0;

    // Entrada de dados - Carta 1
    printf("Digite o nome do primeiro país: ");
    scanf(" %[^\n]", nomepais1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("\nDigite o nome do segundo país: ");
    scanf(" %[^\n]", nomepais2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

  // Menu de comparação - Atributo 1
  printf("\n======= MENU DE COMPARAÇÃO =======\n");
  printf("Escolha o PRIMEIRO atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  printf("==================================\n");
  printf("Digite sua opção: ");
  scanf("%d", &opcao1);

  if (opcao1 < 1 || opcao1 > 5) {
      printf("Opção inválida. Encerrando programa.\n");
      return 1;
  }

  // Menu de comparação - Atributo 2 (dinâmico)
  printf("\nAgora escolha o SEGUNDO atributo (diferente do primeiro):\n");
  for (int i = 1; i <= 5; i++) {
      if (i == opcao1) continue;
      switch(i) {
          case 1: printf("1 - População\n"); break;
          case 2: printf("2 - Área\n"); break;
          case 3: printf("3 - PIB\n"); break;
          case 4: printf("4 - Pontos turísticos\n"); break;
          case 5: printf("5 - Densidade demográfica\n"); break;
      }
  }
  printf("Digite sua opção: ");
  scanf("%d", &opcao2);

  if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
      printf("Opção inválida. Encerrando programa.\n");
      return 1;
  }

  // Função para associar valores do atributo 1
  switch (opcao1) {
      case 1: valor1_p1 = populacao1; valor1_p2 = populacao2; break;
      case 2: valor1_p1 = area1; valor1_p2 = area2; break;
      case 3: valor1_p1 = pib1; valor1_p2 = pib2; break;
      case 4: valor1_p1 = pontosTuristicos1; valor1_p2 = pontosTuristicos2; break;
      case 5: valor1_p1 = densidade1; valor1_p2 = densidade2; break;
  }

  // Função para associar valores do atributo 2
  switch (opcao2) {
      case 1: valor2_p1 = populacao1; valor2_p2 = populacao2; break;
      case 2: valor2_p1 = area1; valor2_p2 = area2; break;
      case 3: valor2_p1 = pib1; valor2_p2 = pib2; break;
      case 4: valor2_p1 = pontosTuristicos1; valor2_p2 = pontosTuristicos2; break;
      case 5: valor2_p1 = densidade1; valor2_p2 = densidade2; break;
  }

  // Exibição e comparação
  printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
  printf("Países: %s x %s\n\n", nomepais1, nomepais2);

  // Exibe e compara atributo 1
  printf("Atributo 1: ");
  switch(opcao1) {
      case 1: printf("População\n"); break;
      case 2: printf("Área\n"); break;
      case 3: printf("PIB\n"); break;
      case 4: printf("Pontos turísticos\n"); break;
      case 5: printf("Densidade demográfica\n"); break;
  }
  printf("%s: %.2f | %s: %.2f\n", nomepais1, valor1_p1, nomepais2, valor1_p2);
  printf("Vencedor no atributo 1: %s\n",
      (opcao1 == 5) ? (
          (valor1_p1 < valor1_p2 ? nomepais1 :
           valor1_p2 < valor1_p1 ? nomepais2 : "Empate")
      ) : (
          (valor1_p1 > valor1_p2 ? nomepais1 :
           valor1_p2 > valor1_p1 ? nomepais2 : "Empate")
      ));

  // Exibe e compara atributo 2
  printf("\nAtributo 2: ");
  switch(opcao2) {
      case 1: printf("População\n"); break;
      case 2: printf("Área\n"); break;
      case 3: printf("PIB\n"); break;
      case 4: printf("Pontos turísticos\n"); break;
      case 5: printf("Densidade demográfica\n"); break;
  }
  printf("%s: %.2f | %s: %.2f\n", nomepais1, valor2_p1, nomepais2, valor2_p2);
  printf("Vencedor no atributo 2: %s\n",
      (opcao2 == 5) ? (
          (valor2_p1 < valor2_p2 ? nomepais1 :
           valor2_p2 < valor2_p1 ? nomepais2 : "Empate")
      ) : (
          (valor2_p1 > valor2_p2 ? nomepais1 :
           valor2_p2 > valor2_p1 ? nomepais2 : "Empate")
      ));

  // Soma e comparação final
  float soma1 = valor1_p1 + valor2_p1;
  float soma2 = valor1_p2 + valor2_p2;

  printf("\nSoma dos atributos:\n");
  printf("%s: %.2f\n", nomepais1, soma1);
  printf("%s: %.2f\n", nomepais2, soma2);

  printf("\nVencedor final da rodada: ");
  if (soma1 > soma2)
      printf("%s\n", nomepais1);
  else if (soma2 > soma1)
      printf("%s\n", nomepais2);
  else
      printf("Empate!\n");

  printf("==================================\n");
  return 0;
}
