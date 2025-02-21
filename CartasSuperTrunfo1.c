#include <stdio.h>
  int main() {

    char estado[1], codigo[3], nomecidade[20];
    float area, pib;
    int pop, turismo;

    char estado2[1], codigo2[3], nomecidade2[20];
    float area2, pib2;
    int pop2, turismo2;

    printf("Digite as informações da primeira carta\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);
    
    prinft("Digite a população: \n");
    scanf("%d", &pop);
    
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);


    printf("Digite as informações da segunda carta\n")
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    prinft("Digite o código da cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a população: \n");
    scanf("%d", &pop2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d km²\n", pop);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d", turismo);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d km²\n", pop2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d", turismo2);
    



    return 0;
  }


