#include <stdio.h>
 
 // Definição da estrutura para armazenar os dados das cartas
 typedef struct {
     char estado;
     char codigo[4];
     char nomeCidade[50];
     int populacao;
     float area;
     float pib;
     int pontosTuristicos;
     float densidadepopulacao;
     float pibpercapita;


 } Carta;
 
 void cadastrarCarta(Carta *carta, int num) {
     printf("\nCadastro da Carta %d:\n", num);
     printf("Nome Do Estado: \n");
     scanf(" %c", &carta->estado);
     
     printf("Código da Carta: \n");
     scanf(" %s", &carta->codigo);
     
     printf("Nome da Cidade: \n");
     scanf(" %s", &carta->nomeCidade);
     
     printf("População: \n");
     scanf(" %d", &carta->populacao);
     
     printf("Área (em km²): \n");
     scanf(" %f", &carta->area);
     
     printf("PIB (em bilhões de reais): \n");
     scanf(" %f", &carta->pib);
     
     printf("Número de Pontos Turísticos: \n");
     scanf(" %d", &carta->pontosTuristicos);

     printf("Densidade da População: \n");
     scanf(" %f", &carta->densidadepopulacao);

     printf("Pib Per Capita: \n");
     scanf(" %f", &carta->pibpercapita);
 }

 
 void exibirCarta(Carta carta, int num) {
     printf("\nCarta %d:\n", num);
     printf("Nome do Estado: %c\n", carta.estado);
     printf("Código da Carta: %s\n", carta.codigo);
     printf("Nome da Cidade: %s\n", carta.nomeCidade);
     printf("População: %d\n", carta.populacao);
     printf("Área: %.2f km²\n", carta.area);
     printf("PIB: %.2f bilhões de reais\n", carta.pib);
     printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
     printf("Densidade da População: %.2f hab/km²\n", carta.densidadepopulacao);
     printf("PIN per capita: %.2f de reais\n", carta.pibpercapita);
 }
 
 int main() {
     Carta carta1, carta2;
     
     cadastrarCarta(&carta1, 1);
     cadastrarCarta(&carta2, 2);
     
     exibirCarta(carta1, 1);
     exibirCarta(carta2, 2);
     
     return 0;
 }