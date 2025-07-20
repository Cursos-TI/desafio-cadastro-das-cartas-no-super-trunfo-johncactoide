#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turismo;
    
    printf("Estado: ");
    scanf("%c", &estado);

    printf("Código: ");
    scanf("%s", &codigo);

    printf("Cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &PIB);

    printf("Pontos Turísticos: ");
    scanf(" %d", &turismo);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %fKm²\n", area);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", turismo);

    printf("\n");
    printf("\n");

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turismo2;
    
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código: ");
    scanf(" %s", &codigo2);

    printf("Cidade: ");
    scanf(" %s", &cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &PIB2);

    printf("Pontos Turísticos: ");
    scanf(" %d", &turismo2);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %fKm²\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d", turismo2);

    return 0;
}