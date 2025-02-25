#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo - Países\n\n");
    
    // Super Trunfo card 1
    printf("Carta 1\n");

    char Estado[40];
    char Codigocarta[20];
    char NomeCidade[30];
    int Populacao;
    float Area, PIB;
    int PontosTuristicos;

    printf("Digite o Estado: ");
    scanf(" %[^\n]s", Estado);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeCidade);

    printf("Digite o numero da Populacao: ");
    scanf("%d", &Populacao);

    printf("Digite a Area da Cidade: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    
    printf("Digite numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos);

    // Super Trunfo card 2
    printf("\n Carta 2\n");

    char Estado2[35];
    char codigo2[15];
    char cidade2[25];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("Digite o Estado:");
    scanf(" %[^\n]s", Estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km² da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibindo dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", Codigocarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area da cidade: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    // Exibindo dados da Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area da cidade: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}
