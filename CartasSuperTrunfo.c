#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, ""); // Suporte a caracteres acentuados
    
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    double densidadePopulacional1, densidadePopulacional2;
    double pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    
    // Entrada de dados para a primeira carta
    printf("*** Carta 1 ***\n");
    printf("Digite uma letra de (a-h): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    
    getchar(); // Limpa o buffer antes de ler a string
    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
    printf("Digite o tamanho da área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Quantos pontos turísticos há? ");
    scanf("%d", &pontosTuristicos1);
    
