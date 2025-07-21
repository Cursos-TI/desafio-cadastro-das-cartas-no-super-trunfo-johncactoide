#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turismo;
    float densidade;
    float PIBpercapita;
    
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

    densidade = populacao/area;
    PIBpercapita = PIB/populacao;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", PIBpercapita);

    
    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf(" %s", &codigo);

    printf("Cidade: ");
    scanf(" %s", &cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &PIB);

    printf("Pontos Turísticos: ");
    scanf(" %d", &turismo);

    densidade = populacao/area;
    PIBpercapita = PIB/populacao;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita);
    return 0;
}