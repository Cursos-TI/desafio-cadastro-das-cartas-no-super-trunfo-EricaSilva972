#include <stdio.h>
 
     int main(){



    printf("Dados das cartas\n");

    char estado1, estado2, codigo1[8], codigo2[8], cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2;
    int populacao1, populcao2, pontos_turisticos1, pontos_turisticos2;



    printf("Insira as informacoes da carta 01:\n");

  printf("Escolha uma letra de A a H para representar o segundo estado.\n");
  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Escolha entre 01 a 04 para definir o numero da carta:\n");
  printf("Numero: ");
  scanf(" %2s", codigo1);

    printf("Insira o nome da primeira cidade:\n");
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Insira a quantidade de populacao da primeira cidade:\n");
    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Insira a area territorial da primeira cidade:\n");
    printf("Area km²: ");
    scanf(" %f", &area1);

    printf("Insira o produto interno bruto da cidade:\n");
    printf("PIB:  ");
    scanf(" %f", &pib1);

    printf("Insira a quantidade de pontos turisticos da cidade:\n");
    printf("Pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1);


    printf("Insira as informacoes da carta02 \n");

    printf("Escolha uma letra de A a H para represnetar o segundo estado:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Escolha um numero entre 01 e 04 para definir a segunta carta:\n");
    printf("Numero: ");
    scanf(" %2s", codigo2);

    printf("Insira o nome da cidade:\n");
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Insira a quantoidade de populacao da cidade:\n");
    printf("Populacao: ");
    scanf(" %d", &populcao2);

    printf("Insira a area territorial da cidade:\n");
    printf("Area km²: ");
    scanf(" %f", &area2);

    printf("Insira o produto interno bruto da cidade:\n");
    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Insira a quatidade de pontos turisticos da cidade:\n");
    printf("Pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    printf("Dados da carta01\n");

    printf("Estado: '%c' \n", estado1);
    printf("Codigo: %c%2s \n", estado1, codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d \n", pontos_turisticos1);

    printf("Dados da carta02\n");

    printf("Estado: '%c' \n", estado2);
    printf("Codigo: %c%2s \n", estado2, codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d \n", populcao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB:%.2f bilhoes de reais \n", pib2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);


     
    return 0;

     




     }



    