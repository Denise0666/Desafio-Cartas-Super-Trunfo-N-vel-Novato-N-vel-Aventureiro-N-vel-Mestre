#include <stdio.h>

int main() {
    // Dados da Carta 1
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;
    float superPoder1;

    // Dados da Carta 2
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;
    float superPoder2;

    // Cadastro da Carta 1
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\nDigite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Calculando Super Poder (densidade invertida)
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibir dados das cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n--- Comparações ---\n");

    // População
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);

    // Área
    printf("Área: %d\n", area1 > area2 ? 1 : 0);

    // PIB
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: %d\n", densidade1 < densidade2 ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);

    // Super Poder
    printf("Super Poder: %d\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}