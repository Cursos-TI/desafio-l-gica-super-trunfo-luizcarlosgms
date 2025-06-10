#include <stdio.h>
#include<locale.h>
#include<string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Configuração de Localização
    setlocale(LC_ALL, "Portuguese");
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigoCarta1[3], codigoCarta2[3], nomeCidade1[50], nomeCidade2[50], estado1[3], estado2[3];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2, pibPerCapita1, pibPerCapita2, densidade1, densidade2;

   
    
    // Cadastro das Cartas:
    //Carta 1
    printf("\n=========================== Carta 1 ===================================\n");
    printf("Digite o Código da Carta 1:\n");
    scanf("%s", codigoCarta1);
    printf("Digite o Nome da Cidade 1:\n");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite o Estado da Cidade 1:\n");
    scanf("%s", estado1);
    printf("Digite a População da Cidade 1:\n");
    scanf("%d", &populacao1);
    printf("Digite a Área da Cidade 1 (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade 1 (em milhões):\n");
    scanf("%f", &pib1);
    printf("Digite o Ponto Turístico da Cidade 1:\n");
    scanf("%d", &pontoTuristico1);
    
    //Carta 2
    printf("\n=========================== Carta 2 ===================================\n");
    printf("Digite o Código da Carta 2:\n");
    scanf("%s", codigoCarta2);
    printf("Digite o Nome da Cidade 2:\n");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite o Estado da Cidade 2:\n");
    scanf("%s", estado2);
    printf("Digite a População da Cidade 2:\n");
    scanf("%d", &populacao2);
    printf("Digite a Área da Cidade 2 (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade 2 (em milhões):\n");
    scanf("%f", &pib2);
    printf("Digite o Ponto Turístico da Cidade 2:\n");
    scanf("%d", &pontoTuristico2);

    // Cálculo de Densidade e PIB per Capita:
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das Cartas:
     printf("\n=========================== Carta 1 ===================================\n");
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Ponto Turístico: %d\n", pontoTuristico1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("\n=========================== Carta 2 ===================================\n");
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Ponto Turístico: %d\n", pontoTuristico2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    

    // Comparação das Cartas:
    printf("\n========================= População =====================================\n");
    printf("Comparando as cartas...\n");
    if(populacao1 > populacao2) {
        printf("%s tem maior população.\n", nomeCidade1);
    } else if(populacao1 < populacao2) {
        printf("%s tem maior população.\n", nomeCidade2);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }
    printf("\n=========================== Área ===================================\n");
    if(area1 > area2) {
        printf("%s tem maior área.\n", nomeCidade1);
    } else if(area1 < area2) {
        printf("%s tem maior área.\n", nomeCidade2);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }
    printf("\n============================ PIB ==================================\n");
    if(pib1 > pib2) {
        printf("(%s) tem maior PIB.\n", nomeCidade1);
    } else if(pib1 < pib2) {
        printf("%s tem maior PIB.\n", nomeCidade2);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }
    printf("\n=========================== Pontos Turistícos ===================================\n");
    if(pontoTuristico1 > pontoTuristico2) {
        printf("%s tem mais pontos turísticos.\n", nomeCidade1);
    } else if(pontoTuristico1 < pontoTuristico2) {
        printf("%s tem mais pontos turísticos.\n", nomeCidade2);
    } else {
        printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
    }
    
    // Comparação de Densidade e PIB per Capita:
    printf("\n============================ Densidade Populacional ==================================\n");
    if(densidade1 < densidade2) {
        printf("%s Venceu!\n", nomeCidade1);
    } else if(densidade1 > densidade2) {
        printf("%s Venceu!\n", nomeCidade2);
    } else {
        printf("As duas cidades têm a mesma densidade populacional.\n");
    }
    printf("\n============================= Per Capita =================================\n");
    if(pibPerCapita1 > pibPerCapita2) {
        printf("%s tem maior PIB per capita.\n", nomeCidade1);
    } else if(pibPerCapita1 < pibPerCapita2) {
        printf("%s tem maior PIB per capita.\n", nomeCidade2);
    } else {
        printf("As duas cidades têm o mesmo PIB per capita.\n");
    }
    printf("\n==============================================================\n");

    return 0;
}
