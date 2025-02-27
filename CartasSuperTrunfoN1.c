#include <stdio.h>
  int main() {

    char estado[20];
    char codigo[20], nomecidade[20];
    float area, pib;
    int pop, turismo;

    char estado2[20];
    char codigo2[20], nomecidade2[20];
    float area2, pib2;
    int pop2, turismo2;

    printf("Digite as informações da primeira carta:\n");
    printf("\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade);
    
    printf("Digite a população: \n");
    scanf("%d", &pop);
    
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);
    printf("\n");

    float densidadepop = (float) pop / area;
    float pibPC = (pib * 1000000000) / pop;
    float superpoder = (float) pop + area + pib + (float) turismo + densidadepop;

    printf("Digite as informações da segunda carta\n");
    printf("\n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    float densidadepop2 = (float) pop2 / area2;
    float pibPC2 = (pib2 * 100000000) / pop2;
    float superpoder2 = (float) pop2 + area2 + pib2 + (float) turismo2 + densidadepop2;

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d km²\n", pop);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB per Capita: %.2f reais\n", pibPC);
    printf("Super Poder: %f\n", superpoder);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d km²\n", pop2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibPC2);
    printf("Super Poder: %f\n", superpoder2);

    printf("\nComparação de Cartas:\n");

    printf("População: %d\n", pop > pop2);
    printf("Area: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turisticos: %d\n", turismo > turismo2);
    printf("Densidade Populacional: %d\n", densidadepop > densidadepop2);
    printf("PIB per Capita: %d\n", pibPC > pibPC2);
    printf("Super Poder: %d\n", superpoder > superpoder2);
    
    return 0;
  }

