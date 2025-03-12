#include <stdio.h>


int main() {

        // Declaração das variáveis da primeira carta

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Declaração das variáveis da segunda  carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //entrada de dados para a primeira carta
printf("carta 1\n");

printf("Digite uma letra de (a-h)");
    scanf("%c", &estado1);

    printf("Digte o codigo d carta ex A01: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digte o tamanho da area (km2): \n");
    scanf("%f", &area1);

    printf("Digite o pib do estado: \n");
    scanf("%f",&pib1);

    printf("Há quantos pontos turiscos: \n");
    scanf("%d", &pontosTuristicos1);

    //entrada de dados para a segunda carta
    printf("carta 2\n");

    printf("Digite uma letra de (a-h): \n");
    scanf("%c", &estado2);

    printf("Digte o codigo d carta ex: A02: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digte o tamanho da area (km2): \n");
    scanf("%f", &area2);

    printf("Digite o pib do estado: \n");
    scanf("%f",&pib2);

    printf("Há quantos pontos turiscos: \n");
    scanf("%d", &pontosTuristicos2);

   // Exibição dos dados da primeira carta

   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

   // Exibição dos dados da segunda carta
   
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    
    return 0;
}
