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
    float SUPER;

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turismo2;
    float densidade2;
    float PIBpercapita2;
    float SUPER2;

    printf("Carta 1\n\n");
    
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
    SUPER = populacao + area + PIB + turismo + PIBpercapita + (densidade * -1);
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita);
    printf("Super Poder: %.2f\n\n", &SUPER);
    
    
    printf("Carta 2\n\n");
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
    
    densidade2 = populacao2/area2;
    PIBpercapita2 = PIB2/populacao2;
    SUPER2 = populacao2 + area2 + PIB2 + turismo2 + PIBpercapita2 + (densidade2 * -1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %.2f\n\n", &SUPER2);

    printf("Comparção de Cartas:\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos Turisticos: %d\n", turismo > turismo2);
    printf("Densidade populacional: %d\n", densidade > densidade2);
    printf("PIB per Capita: %d\n", PIBpercapita> PIBpercapita2);
    printf("Super Poder: %d\n", SUPER > SUPER2);

    return 0;
}