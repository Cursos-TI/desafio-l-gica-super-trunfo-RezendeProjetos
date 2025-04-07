#include <stdio.h>

int main() {
    // Variáveis de entrada
    char nomepais1[50], nomepais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    int opcao;

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

    // Menu interativo
    printf("\n======= MENU DE COMPARAÇÃO =======\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("==================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Países: %s x %s\n", nomepais1, nomepais2);

    switch (opcao) {
        case 1:
            printf("Atributo comparado: População\n");
            printf("%s: %d habitantes\n", nomepais1, populacao1);
            printf("%s: %d habitantes\n", nomepais2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomepais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo comparado: Área\n");
            printf("%s: %.2f km²\n", nomepais1, area1);
            printf("%s: %.2f km²\n", nomepais2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomepais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo comparado: PIB\n");
            printf("%s: %.2f bilhões\n", nomepais1, pib1);
            printf("%s: %.2f bilhões\n", nomepais2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomepais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo comparado: Pontos turísticos\n");
            printf("%s: %d pontos\n", nomepais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomepais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nomepais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo comparado: Densidade demográfica\n");
            printf("%s: %.2f hab/km²\n", nomepais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomepais2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nomepais2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    printf("==================================\n");
    return 0;
}
