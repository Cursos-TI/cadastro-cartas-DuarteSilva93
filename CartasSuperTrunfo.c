#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char código1[4];
    char nomeCidade1[50];
    int população1;
    float área1;
    float pib2; // bilhões;
    int pontosTurísticos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int população2;
    float área2;
    float pib2; // bilhões
    int pontosTuristicos2;

    // Cálculos Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // Área para entrada de dados

  printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", código1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &população1);

    printf("Digite a área (km2): ");
    scanf("%f", &área1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTurísticos1);

    printf("Entre com a densidadePopulacional 1: \n");
    scanf("%f", &densidade1);
    printf("Entre com o pibpercapita 1: \n");
    scanf("%f", &pibPerCapita1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    


  printf("\n=== Cadastro da Carta 2 ===\n");
  
    printf("Digite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", código2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &população2);

    printf("Digite a área (km2): ");
    scanf("%f", &área2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTurísticos2);

   

  // Área para exibição dos dados da cidade

    printf("Entre com a densidadePopulacional 2: \n");
    scanf("%f", &densidade2);
    printf("Entre com o pibpercapita 2: \n");
    scanf("%f", &pibPerCapita2);

     printf("\n===== CARTAS CADASTRADAS =====\n");
   

    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %s\n", "codigo1");
    printf("Cidade: %s\n", "nomeCidade1");
    printf("Populacao: %d\n", "populacao1");
    printf("Area: %.2f km2\n", "area1");
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", "pontosTuristicos1");
      

    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %s\n", "codigo2");
    printf("Cidade: %s\n", "nomeCidade2");
    printf("Populacao: %d\n", "populacao2");
    printf("Area: %.2f km2\n", "area2");
    printf("PIB: %.2f\n", "pib2");
    printf("Pontos Turísticos: %d\n", "pontosTuristicos2");
  // Área para exibição dos dados da cidade

  // Exibição Carta 1
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Exibição Carta 2
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  
return 0;
}