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
    
   // Cálculo dos indicadores da primeira carta
   densidadePopulacional1 = populacao1 / area1;
   pibPerCapita1 = (pib1 * 1000000000) / populacao1;
   superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
   
   // Entrada de dados para a segunda carta
   printf("\n*** Carta 2 ***\n");
   printf("Digite uma letra de (a-h): ");
   scanf(" %c", &estado2);
   
   printf("Digite o código da carta (ex: A02): ");
   scanf(" %3s", codigo2);
   
   getchar(); // Limpa o buffer antes de ler a string
   printf("Digite o nome da cidade: ");
   fgets(cidade2, sizeof(cidade2), stdin);
   cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove a quebra de linha
   
   printf("Digite a população: ");
   scanf("%lu", &populacao2);
   
   printf("Digite o tamanho da área (km²): ");
   scanf("%f", &area2);
   
   printf("Digite o PIB da cidade (em bilhões de reais): ");
   scanf("%f", &pib2);
   
   printf("Quantos pontos turísticos há? ");
   scanf("%d", &pontosTuristicos2);

 // Cálculo dos indicadores da segunda carta
 densidadePopulacional2 = populacao2 / area2;
 pibPerCapita2 = (pib2 * 1000000000) / populacao2;
 superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);
 
 
