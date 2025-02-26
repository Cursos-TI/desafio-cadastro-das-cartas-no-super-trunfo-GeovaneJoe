#include <stdio.h>

int main() {
    
    // Exibe o título do jogo
    printf("Desafio Super Trunfo - Países\n\n");
    
    // Declaração das variáveis para a primeira carta
    printf(" Carta 1\n");

    char Estado1[41], CodigoCarta1[21], NomeCidade1[31];
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1;

    // Coleta de dados da primeira carta
    printf("Digite o Estado: ");
    scanf(" %[^\n]", Estado1); //" %[^\n]" Lê uma linha inteira, incluindo espaços
    
    printf("Digite o Codigo da carta: ");
    scanf("%s", CodigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade1);

    printf("Digite o numero da Populacao: ");
    scanf("%d", &Populacao1);
    getchar();  // Consome o '\n' deixado pelo scanf
    

    printf("Digite a Area Km²: ");
    scanf("%f", &Area1);
    getchar();
    

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    getchar();
    
    
    printf("Digite número de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);
    getchar();
    
    // Declaração das variáveis para a segunda carta
    printf("\n Carta 2\n");

    char Estado2[41], CodigoCarta2[21], NomeCidade2[31];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;

    // Coleta de dados da segunda carta
    printf("Digite o Estado: ");
    scanf(" %[^\n]", Estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Digite o numero da Populacao: ");
    scanf("%d", &Populacao2);
    getchar();

    printf("Digite a area em km²: ");
    scanf("%f", &Area2);
    getchar();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    getchar();

    printf("Digite número de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);
    getchar();

     // Exibição dos dados coletados
    printf("\n EXIBINDO AS SUAS CARTAS \n");

    //dados coletados Carta 1
    printf("\n Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area da cidade: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    //dados coletados Carta 2
    printf("\n Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area da cidade: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}