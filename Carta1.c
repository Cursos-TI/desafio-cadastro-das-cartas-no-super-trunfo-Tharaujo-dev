#include <stdio.h>

int main(){


    char Estado;
    char Codigo[01];
    char Cidade[50];
    float Populacao;
    float Area;
    float PIB;
    int Pontosturisticos;

    
    printf("Digite nome do estado: \n");
    scanf("%s", &Estado);

    printf("Digite codigo da carta: \n");
    scanf("%s", &Codigo);
    
    printf("Digite nome da cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite quantidade da população: \n");
    scanf("%f", &Populacao);

    printf("Digite area em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite numero de ponto turisticos: \n");
    scanf("%d", &Pontosturisticos);

    return 0;


}