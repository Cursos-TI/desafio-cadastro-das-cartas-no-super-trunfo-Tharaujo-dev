#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Desafio Super Trunfo - Carta 1\n");
    printf("Nome Do Estado: \n");
    scanf("%2s", estado1);
    printf("Código da Carta: \n");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: \n");
    scanf("%49s", nomeCidade1);
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    printf("Densidade da Populacional: \n");
    scanf("%f", &densidade1);
    printf("PIB Per Capita: \n");
    scanf("%f", &pibPerCapita1);
    
    
    // Calculando o inverso da densidade populacional
    float inversoDensidade1 = 1.0 / densidade1;
    
    // Cálculo do superpoder da primeira carta
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

    // Saida do super poder 1
    printf("Super poder: %.2f\n", superPoder1);
    
    
    // Entrada Carta 2
    printf("\nDesafio Super Trunfo - Carta 2\n");
    printf("Nome Do Estado: \n");
    scanf("%2s", estado2);
    printf("Código da Carta: \n");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: \n");
    scanf("%49s", nomeCidade2);
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área (em km²): \n");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("Densidade da Populacional: \n");
    scanf("%f", &densidade2);   
    printf("PIB Per Capita: \n");
    scanf("%f", &pibPerCapita2);

    // Calculando o inverso da densidade populacional
    float inversoDensidade2 = 1.0 / densidade2;

    // Cálculo do superpoder da segunda carta
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;
    
    // Saida do super poder 2
    printf("Super poder: %.2f\n", superPoder2);
    
       

    // Comparações
    int pontosC1 = 0;

    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2) { pontosC1++; printf("População: Carta 1 venceu (1)\n"); }
    else if (populacao2 > populacao1) printf("População: Carta 2 venceu (0)\n");
    else printf("População: Empate (0)\n");

    if (area1 > area2) { pontosC1++; printf("Área: Carta 1 venceu (1)\n"); }
    else if (area2 > area1) printf("Área: Carta 2 venceu (0)\n");
    else printf("Área: Empate (0)\n");

    if (pib1 > pib2) { pontosC1++; printf("PIB: Carta 1 venceu (1)\n"); }
    else if (pib2 > pib1) printf("PIB: Carta 2 venceu (0)\n");
    else printf("PIB: Empate (0)\n");

    if (pontosTuristicos1 > pontosTuristicos2) { pontosC1++; printf("Pontos Turísticos: Carta 1 venceu (1)\n"); }
    else if (pontosTuristicos2 > pontosTuristicos1) printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    else printf("Pontos Turísticos: Empate (0)\n");

    if (densidade1 < densidade2) { pontosC1++; printf("Densidade Populacional: Carta 1 venceu (1)\n"); }
    else if (densidade2 < densidade1) printf("Densidade Populacional: Carta 2 venceu (0)\n");
    else printf("Densidade Populacional: Empate (0)\n");

    if (pibPerCapita1 > pibPerCapita2) { pontosC1++; printf("PIB per Capita: Carta 1 venceu (1)\n"); }
    else if (pibPerCapita2 > pibPerCapita1) printf("PIB per Capita: Carta 2 venceu (0)\n");
    else printf("PIB per Capita: Empate (0)\n");

    if (superPoder1 > superPoder2) { pontosC1++; printf("Super Poder: Carta 1 venceu (1)\n"); }
    else if (superPoder2 > superPoder1) printf("Super Poder: Carta 2 venceu (0)\n");
    else printf("Super Poder: Empate (0)\n");

    return 0;
}