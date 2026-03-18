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
    float pib1;
    int pontosTurísticos1;

    // Carta 2
    char código2[4];
    char nomeCidade2[50];
    int população2;
    float área2;
    float pib2;
    int pontosTurísticos2;

  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");

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

    printf("\n=== Cadastro da Carta 2 ===\n");

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

return 0;
} 
