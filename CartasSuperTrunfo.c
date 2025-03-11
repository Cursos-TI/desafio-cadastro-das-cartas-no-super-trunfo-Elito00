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
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //entrada de dados para a primeira carta

printf("Digite uma letra de (a-h)");
    scanf("%c", &estado1);

    printf("Digte o codigo d carta ex: A01");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade");
    scanf("%s", cidade1);

    printf("digite a populacao");
    scanf("%d", &populacao1);

    printf("Digte o tamanho da area (km2)");
    scanf("%f", &area1);

    printf("Digite o pib do estado");
    scanf("%f",&pib1);

    printf("Há quantos pontos turiscos ");
    scaf("%d", pontosTuristicos1);

    //entrada de dados para a segunda carta
    
printf("Digite uma letra de (a-h)");
    scanf("%c", &estado2);

    printf("Digte o codigo d carta ex: A02");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade");
    scanf("%s", cidade2);

    printf("digite a populacao");
    scanf("%d", &populacao2;

    printf("Digte o tamanho da area (km2)");
    scanf("%f", &area2);

    printf("Digite o pib do estado");
    scanf("%f",&pib2);

    printf("Há quantos pontos turiscos ");
    scaf("%d", pontosTuristicos2);




    
    return 0;
}
