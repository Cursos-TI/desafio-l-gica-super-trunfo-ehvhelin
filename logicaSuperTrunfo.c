#include <stdio.h> // Biblioteca para usar o printf

int main() { // Começo do programa

    // Dados da primeira carta
    char estado1[] = "São Paulo";            // Estado da cidade 1
    char codigoCarta1[] = "001";             // Código da carta 1
    char cidade1[] = "Peruíbe";              // Nome da cidade 1
    int populacao1 = 70543;                  // População da cidade 1
    int pontosTuristico1 = 6;                // Quantidade de pontos turísticos
    float area1 = 326.216;                   // Tamanho da cidade em km²
    float pib1 = 1966243.303;                // Valor do PIB da cidade 1

    // Dados da segunda carta
    char estado2[] = "São Paulo";            // Estado da cidade 2
    char codigoCarta2[] = "002";             // Código da carta 2
    char cidade2[] = "Praia Grande";         // Nome da cidade 2
    int populacao2 = 365577;                 // População da cidade 2
    int pontosTuristico2 = 5;                // Quantidade de pontos turísticos
    float area2 = 149.652;                   // Tamanho da cidade em km²
    float pib2 = 8730000.000;                // Valor do PIB da cidade 2

    // Fazendo os cálculos
    float densidade1 = populacao1 / area1;   // Densidade = população ÷ área (cidade 1)
    float densidade2 = populacao2 / area2;   // Densidade = população ÷ área (cidade 2)

    float pibPerCapita1 = pib1 / populacao1; // PIB por pessoa na cidade 1
    float pibPerCapita2 = pib2 / populacao2; // PIB por pessoa na cidade 2

    // Mostrando os dados na tela
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibPerCapita1); // Mostra valor da carta 1
    printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, pibPerCapita2); // Mostra valor da carta 2

    // Ver quem ganhou
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 venceu!\n"); // Carta 1 tem o maior valor
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 venceu!\n"); // Carta 2 tem o maior valor
    } else {
        printf("Resultado: Empate!\n"); // Os dois têm o mesmo valor
    }

    return 0; // Fim do programa
}