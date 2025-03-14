#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    double dencidadepopulacional1, dencidadepopulacional2;
    double pibpercapita1, pibpercapita2;

    // Entrada de dados para a primeira carta
    printf("*** Carta 1 ***\n");
    printf("Digite uma letra de (a-h): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite o tamanho da área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos há? ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos indicadores da primeira carta
    dencidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Entrada de dados para a segunda carta
    printf("\n*** Carta 2 ***\n");
    printf("Digite uma letra de (a-h): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite o tamanho da área (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos há? ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores da segunda carta
    dencidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Exibição dos dados da primeira carta
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", dencidadepopulacional1);
    printf("PIB per capita: %.2lf\n", pibpercapita1);

    // Exibição dos dados da segunda carta
    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", dencidadepopulacional2);
    printf("PIB per capita: %.2lf\n", pibpercapita2);

    return 0;
}
