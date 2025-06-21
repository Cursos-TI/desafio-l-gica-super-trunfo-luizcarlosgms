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
    // Exibição da Carta 1:
    printf("\nCarta 1\n");
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Ponto Turístico: %d\n", pontoTuristico1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    // Exibição da Carta 2:
    printf("\n=========================== Carta 2 ===================================\n");
    printf("\nCarta 2\n");
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
    // Solicitação do critério de comparação
    printf("\n=========================== Critério de Comparação ===================================\n");
    // Exibição das opções de comparação
    printf("Escolha o critério de comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    
    // Leitura do critério escolhido pelo usuário
    printf("\n=========================== Escolha do Critério ===================================\n");
    int criterio1, criterio2, criterio3; // Variáveis para armazenar os critérios escolhidos

    int pontos1 = 0, pontos2 = 0; // Variáveis para armazenar os pontos de cada carta
    char*vencedorRodada = NULL; // Variável para armazenar o vencedor da comparação

    printf("Digite o critério da Rodada 1 (1-6): ");
    scanf("%d", &criterio1);
    printf("Digite o critério da Rodada 2 (1-6): ");
    scanf("%d", &criterio2);
    printf("Digite o critério da Rodada 3 (1-6): ");
    scanf("%d", &criterio3);
    
    // Verificação dos critérios escolhidos
    if (criterio1 < 1 || criterio1 > 6 || criterio2 < 1 || criterio2 > 6 || criterio3 < 1 || criterio3 > 6) {
        printf("Critério inválido. Por favor, escolha um critério válido entre 1 e 6.\n");
        return 1; // Encerra o programa se os critérios forem inválidos
    }

    // Exibição do critério escolhido
    printf("\n=========================== Rodada 1 ===================================\n");
    switch (criterio1) // Verifica o critério escolhido
        {
        case 1:
            printf("\n========================= População =====================================\n");
            printf("Critério escolhido: População\n");
            printf("População de %s: %d\n", nomeCidade1, populacao1);
            printf("População de %s: %d\n", nomeCidade2, populacao2);
            // Comparação de População
            (populacao1 > populacao2) ? // Se a população da cidade 1 for maior que a da cidade 2
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior população.\n", nomeCidade1)):// Se a população da cidade 1 for menor que a da cidade 2
            (populacao1 < populacao2) ? // Se a população da cidade 1 for menor que a da cidade 2    
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior população.\n", nomeCidade2)):// Se as populações forem iguais
                // Se as populações forem iguais
                printf("As duas cidades têm a mesma população.\n");

                break;
        case 2:
            printf("\n=========================== Área ===================================\n");
            printf("Critério escolhido: Área\n");
            printf("Área de %s: %.2f km²\n", nomeCidade1, area1);
            printf("Área de %s: %.2f km²\n", nomeCidade2, area2);
                // Comparação de Área
            (area1 > area2) ?
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior área.\n", nomeCidade1)) :
            (area1 < area2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior área.\n", nomeCidade2)) :

                printf("As duas cidades têm a mesma área.\n");
            
                break;
        case 3:
            printf("\n=========================== PIB ===================================\n");
            printf("Critério escolhido: PIB\n");
            printf("PIB de %s: %.2f milhões\n", nomeCidade1, pib1);
            printf("PIB de %s: %.2f milhões\n", nomeCidade2, pib2);
            // Comparação de PIB
            (pib1 > pib2) ?
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior PIB.\n", nomeCidade1)) :
            (pib1 < pib2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior PIB.\n", nomeCidade2)) :
                
                printf("As duas cidades têm o mesmo PIB.\n");
                
                break;
        case 4:
            printf("\n=========================== Pontos Turísticos ===================================\n");
            printf("Critério escolhido: Pontos Turísticos\n");
            printf("Pontos turísticos de %s: %d\n", nomeCidade1, pontoTuristico1);
            printf("Pontos turísticos de %s: %d\n", nomeCidade2, pontoTuristico2);
            // Comparação de Pontos Turísticos
            (pontoTuristico1 > pontoTuristico2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem mais pontos turísticos.\n", nomeCidade1)) :
                
            (pontoTuristico1 < pontoTuristico2)?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem mais pontos turísticos.\n", nomeCidade2)) :
                
                printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
                
                break;
                // Comparação de Densidade e PIB per Capita:
        case 5:
            printf("\n=========================== Densidade Populacional ===================================\n");
            printf("Critério escolhido: Densidade Populacional\n");
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade2, densidade2);

            // Comparação de Densidade Populacional
            (densidade1 < densidade2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem menor densidade populacional.\n", nomeCidade1)) :
                
            (densidade1 > densidade2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem menor densidade populacional.\n", nomeCidade2)) :
                
                printf("As duas cidades têm a mesma densidade populacional.\n");
                
                break;
        case 6:
            printf("\n=========================== PIB per Capita ===================================\n");
            printf("Critério escolhido: PIB per Capita\n");
            printf("PIB per Capita de %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("PIB per Capita de %s: %.2f\n", nomeCidade2, pibPerCapita2);
            // Comparação de PIB per Capita
            (pibPerCapita1 > pibPerCapita2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior PIB per capita.\n", nomeCidade1)) :

            (pibPerCapita1 < pibPerCapita2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior PIB per capita.\n", nomeCidade2)):
                
                printf("As duas cidades têm o mesmo PIB per capita.\n");
                
                break;

        default:
             printf("Opção inválida. Por favor, escolha um critério válido.\n");
                break;
        }

    
    printf("\n=========================== Rodada 2 ===================================\n");
    switch (criterio2) // Verifica o critério escolhido
        {
        case 1:
            printf("\n========================= População =====================================\n");
            printf("Critério escolhido: População\n");
            printf("População de %s: %d\n", nomeCidade1, populacao1);
            printf("População de %s: %d\n", nomeCidade2, populacao2);
            // Comparação de População
            (populacao1 > populacao2) ? // Se a população da cidade 1 for maior que a da cidade 2
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior população.\n", nomeCidade1)):// Se a população da cidade 1 for menor que a da cidade 2
            (populacao1 < populacao2) ? // Se a população da cidade 1 for menor que a da cidade 2    
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior população.\n", nomeCidade2)):// Se as populações forem iguais
                // Se as populações forem iguais
                printf("As duas cidades têm a mesma população.\n");

                break;
        case 2:
            printf("\n=========================== Área ===================================\n");
            printf("Critério escolhido: Área\n");
            printf("Área de %s: %.2f km²\n", nomeCidade1, area1);
            printf("Área de %s: %.2f km²\n", nomeCidade2, area2);
                // Comparação de Área
            (area1 > area2) ?
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior área.\n", nomeCidade1)) :
            (area1 < area2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior área.\n", nomeCidade2)) :

                printf("As duas cidades têm a mesma área.\n");
            
                break;
        case 3:
            printf("\n=========================== PIB ===================================\n");
            printf("Critério escolhido: PIB\n");
            printf("PIB de %s: %.2f milhões\n", nomeCidade1, pib1);
            printf("PIB de %s: %.2f milhões\n", nomeCidade2, pib2);
            // Comparação de PIB
            (pib1 > pib2) ?
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior PIB.\n", nomeCidade1)) :
            (pib1 < pib2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior PIB.\n", nomeCidade2)) :
                
                printf("As duas cidades têm o mesmo PIB.\n");
                
                break;
        case 4:
            printf("\n=========================== Pontos Turísticos ===================================\n");
            printf("Critério escolhido: Pontos Turísticos\n");
            printf("Pontos turísticos de %s: %d\n", nomeCidade1, pontoTuristico1);
            printf("Pontos turísticos de %s: %d\n", nomeCidade2, pontoTuristico2);
            // Comparação de Pontos Turísticos
            (pontoTuristico1 > pontoTuristico2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem mais pontos turísticos.\n", nomeCidade1)) :
                
            (pontoTuristico1 < pontoTuristico2)?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem mais pontos turísticos.\n", nomeCidade2)) :
                
                printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
                
                break;
                // Comparação de Densidade e PIB per Capita:
        case 5:
            printf("\n=========================== Densidade Populacional ===================================\n");
            printf("Critério escolhido: Densidade Populacional\n");
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade2, densidade2);

            // Comparação de Densidade Populacional
            (densidade1 < densidade2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem menor densidade populacional.\n", nomeCidade1)) :
                
            (densidade1 > densidade2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem menor densidade populacional.\n", nomeCidade2)) :
                
                printf("As duas cidades têm a mesma densidade populacional.\n");
                
                break;
        case 6:
            printf("\n=========================== PIB per Capita ===================================\n");
            printf("Critério escolhido: PIB per Capita\n");
            printf("PIB per Capita de %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("PIB per Capita de %s: %.2f\n", nomeCidade2, pibPerCapita2);
            // Comparação de PIB per Capita
            (pibPerCapita1 > pibPerCapita2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior PIB per capita.\n", nomeCidade1)) :

            (pibPerCapita1 < pibPerCapita2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior PIB per capita.\n", nomeCidade2)):
                
                printf("As duas cidades têm o mesmo PIB per capita.\n");
                
                break;

        default:
             printf("Opção inválida. Por favor, escolha um critério válido.\n");
                break;
        }

    printf("\n=========================== Rodada 3 ===================================\n");
    switch (criterio3) // Verifica o critério escolhido
        {
        case 1:
            printf("\n========================= População =====================================\n");
            printf("Critério escolhido: População\n");
            printf("População de %s: %d\n", nomeCidade1, populacao1);
            printf("População de %s: %d\n", nomeCidade2, populacao2);
            // Comparação de População
            (populacao1 > populacao2) ? // Se a população da cidade 1 for maior que a da cidade 2
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior população.\n", nomeCidade1)):// Se a população da cidade 1 for menor que a da cidade 2
            (populacao1 < populacao2) ? // Se a população da cidade 1 for menor que a da cidade 2    
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior população.\n", nomeCidade2)):// Se as populações forem iguais
                // Se as populações forem iguais
                printf("As duas cidades têm a mesma população.\n");

                break;
        case 2:
            printf("\n=========================== Área ===================================\n");
            printf("Critério escolhido: Área\n");
            printf("Área de %s: %.2f km²\n", nomeCidade1, area1);
            printf("Área de %s: %.2f km²\n", nomeCidade2, area2);
                // Comparação de Área
            (area1 > area2) ?
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior área.\n", nomeCidade1)) :
            (area1 < area2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior área.\n", nomeCidade2)) :

                printf("As duas cidades têm a mesma área.\n");
            
                break;
        case 3:
            printf("\n=========================== PIB ===================================\n");
            printf("Critério escolhido: PIB\n");
            printf("PIB de %s: %.2f milhões\n", nomeCidade1, pib1);
            printf("PIB de %s: %.2f milhões\n", nomeCidade2, pib2);
            // Comparação de PIB
            (pib1 > pib2) ?
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior PIB.\n", nomeCidade1)) :
            (pib1 < pib2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior PIB.\n", nomeCidade2)) :
                
                printf("As duas cidades têm o mesmo PIB.\n");
                
                break;
        case 4:
            printf("\n=========================== Pontos Turísticos ===================================\n");
            printf("Critério escolhido: Pontos Turísticos\n");
            printf("Pontos turísticos de %s: %d\n", nomeCidade1, pontoTuristico1);
            printf("Pontos turísticos de %s: %d\n", nomeCidade2, pontoTuristico2);
            // Comparação de Pontos Turísticos
            (pontoTuristico1 > pontoTuristico2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem mais pontos turísticos.\n", nomeCidade1)) :
                
            (pontoTuristico1 < pontoTuristico2)?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem mais pontos turísticos.\n", nomeCidade2)) :
                
                printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
                
                break;
                // Comparação de Densidade e PIB per Capita:
        case 5:
            printf("\n=========================== Densidade Populacional ===================================\n");
            printf("Critério escolhido: Densidade Populacional\n");
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("Densidade de %s: %.2f hab/km²\n", nomeCidade2, densidade2);

            // Comparação de Densidade Populacional
            (densidade1 < densidade2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem menor densidade populacional.\n", nomeCidade1)) :
                
            (densidade1 > densidade2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem menor densidade populacional.\n", nomeCidade2)) :
                
                printf("As duas cidades têm a mesma densidade populacional.\n");
                
                break;
        case 6:
            printf("\n=========================== PIB per Capita ===================================\n");
            printf("Critério escolhido: PIB per Capita\n");
            printf("PIB per Capita de %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("PIB per Capita de %s: %.2f\n", nomeCidade2, pibPerCapita2);
            // Comparação de PIB per Capita
            (pibPerCapita1 > pibPerCapita2) ?
                
                (vencedorRodada = nomeCidade1, pontos1++, printf("%s tem maior PIB per capita.\n", nomeCidade1)) :

            (pibPerCapita1 < pibPerCapita2) ?
                
                (vencedorRodada = nomeCidade2, pontos2++, printf("%s tem maior PIB per capita.\n", nomeCidade2)):
                
                printf("As duas cidades têm o mesmo PIB per capita.\n");
                
                break;

        default:
             printf("Opção inválida. Por favor, escolha um critério válido.\n");
                break;
        }
    
        
    
    printf("\n================= Resultado Final =================\n");
    printf("Pontuação:\n%s: %d ponto(s)\n%s: %d ponto(s)\n", nomeCidade1, pontos1, nomeCidade2, pontos2);

    if (pontos1 > pontos2)
        printf("🏆 A cidade vencedora do jogo é: %s!\n", nomeCidade1);
    else if (pontos2 > pontos1)
        printf("🏆 A cidade vencedora do jogo é: %s!\n", nomeCidade2);
    else
        printf("🤝 Empate! Nenhuma cidade venceu mais rodadas.\n");

    printf("\n=========================== Fim da Comparação ===================================\n");
    // Finalização do programa
    return 0;
}
