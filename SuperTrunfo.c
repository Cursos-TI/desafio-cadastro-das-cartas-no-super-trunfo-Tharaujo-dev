#include <stdio.h>

/*
 * Programa Super Trunfo - Comparação de Cartas
 * Esse programa recebe os dados de duas cartas de cidades brasileiras
 * e compara as duas com base em um atributo numérico fixo (neste caso, População).
 */

int main() {
    // Dados da Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Dados da Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Entrada dos dados da Carta 1
    printf("Desafio Super Trunfo - Carta 1\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    printf("Código da Carta: ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nDesafio Super Trunfo - Carta 2\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    printf("Código da Carta: ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Comparação por atributo fixo: População
    printf("\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}
