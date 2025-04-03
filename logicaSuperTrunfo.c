#include <stdio.h>

int main() {
    // Criando duas variáveis grandes para armazenar todas as entradas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    

    // Entrada dos dados da Carta 1
    printf("Digite o estado da primeira carta (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %20[^\n]", nomecidade1);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (km²): \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade (bilhões de reais): \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("Digite o estado da segunda carta (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): \n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %20[^\n]", nomecidade2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (km²): \n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (bilhões de reais): \n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

     // Cálculo da densidade populacional e PIB per capita
     densidade1 = populacao1 / area1;
     densidade2 = populacao2 / area2;
     pibPerCapita1 = (pib1 * 1000000000) / populacao1;
     pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição das informações das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: A%s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: A%s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu - Resultado:(%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Area: Carta %d venceu - Resultado:(%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu - Resultado:(%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turisticos: Carta %d venceu - Resultado:(%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu - Resultado:(%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu - Resultado:(%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu - Resultado:(%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);
    
   // Contador de vitórias
   int vitorias1 = 0, vitorias2 = 0;

   printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

   // Comparar POPULAÇÃO
   printf("\nPopulação:\n");
   printf("%s: %d habitantes\n", nomecidade1, populacao1);
   printf("%s: %d habitantes\n", nomecidade2, populacao2);
   if (populacao1 > populacao2) {
       printf("Vencedora: %s\n", nomecidade1);
       vitorias1++;
   } else if (populacao2 > populacao1) {
       printf("Vencedora: %s\n", nomecidade2);
       vitorias2++;
   } else {
       printf("Empate!\n");
   }

   // Comparar ÁREA
   printf("\nÁrea:\n");
   printf("%s: %.2f km²\n", nomecidade1, area1);
   printf("%s: %.2f km²\n", nomecidade2, area2);
   if (area1 > area2) {
       printf("Vencedora: %s\n", nomecidade1);
       vitorias1++;
   } else if (area2 > area1) {
       printf("Vencedora: %s\n", nomecidade2);
       vitorias2++;
   } else {
       printf("Empate!\n");
   }

   // Comparar PIB
   printf("\nPIB:\n");
   printf("%s: %.2f bilhões\n", nomecidade1, pib1);
   printf("%s: %.2f bilhões\n", nomecidade2, pib2);
   if (pib1 > pib2) {
       printf("Vencedora: %s\n", nomecidade1);
       vitorias1++;
   } else if (pib2 > pib1) {
       printf("Vencedora: %s\n", nomecidade2);
       vitorias2++;
   } else {
       printf("Empate!\n");
   }

   // Comparar PONTOS TURÍSTICOS
   printf("\nPontos Turísticos:\n");
   printf("%s: %d pontos\n", nomecidade1, pontosTuristicos1);
   printf("%s: %d pontos\n", nomecidade2, pontosTuristicos2);
   if (pontosTuristicos1 > pontosTuristicos2) {
       printf("Vencedora: %s\n", nomecidade1);
       vitorias1++;
   } else if (pontosTuristicos2 > pontosTuristicos1) {
       printf("Vencedora: %s\n", nomecidade2);
       vitorias2++;
   } else {
       printf("Empate!\n");
   }

   // Comparar DENSIDADE POPULACIONAL (menor vence)
   printf("\nDensidade Populacional:\n");
   printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
   printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
   if (densidade1 < densidade2) {
       printf("Vencedora: %s (menor densidade)\n", nomecidade1);
       vitorias1++;
   } else if (densidade2 < densidade1) {
       printf("Vencedora: %s (menor densidade)\n", nomecidade2);
       vitorias2++;
   } else {
       printf("Empate!\n");
   }

   // Comparar PIB PER CAPITA
   printf("\nPIB per Capita:\n");
   printf("%s: %.2f Reais\n", nomecidade1, pibPerCapita1);
   printf("%s: %.2f Reais\n", nomecidade2, pibPerCapita2);
   if (pibPerCapita1 > pibPerCapita2) {
       printf("Vencedora: %s\n", nomecidade1);
       vitorias1++;
   } else if (pibPerCapita2 > pibPerCapita1) {
       printf("Vencedora: %s\n", nomecidade2);
       vitorias2++;
   } else {
       printf("Empate!\n");
   }

   // Resultado final
   printf("\n===== RESULTADO FINAL =====\n");
   printf("%s venceu %d atributos\n", nomecidade1, vitorias1);
   printf("%s venceu %d atributos\n", nomecidade2, vitorias2);

   if (vitorias1 > vitorias2) {
       printf("A grande vencedora é: %s!\n", nomecidade1);
   } else if (vitorias2 > vitorias1) {
       printf("A grande vencedora é: %s!\n", nomecidade2);
   } else {
       printf("Empate geral entre as cidades!\n");
   }


    return 0;
}