#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;

    printf("## SUPER-TRUNFO ##\n\n");

    //Entrada de Dados da Carta 1
    printf("CARTA 1\n");
    printf("Digite o Estado (A a H) : ");
    scanf(" %c" , &estado1);

    printf("Digite o código da Carta (ex: A01) : ");
    scanf(" %3s" , &codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População :");
    scanf("%d", &populacao1);

    printf("Digite a Área (km): ");
    scanf("%f" , &area1);

    printf("Digite o PIB: ");
    scanf("%f" , &pib1);

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &pontoTuristico1);

    printf("\n");

    //Entrada de Dados da Carta 2
    printf("CARTA 2\n");
    printf("Digite o Estado (A a H) : ");
    scanf(" %c" , &estado2);

    printf("Digite o código da Carta (ex: A01) : ");
    scanf(" %3s" , &codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População :");
    scanf("%d", &populacao2);

    printf("Digite a Área (km): ");
    scanf("%f" , &area2);

    printf("Digite o PIB: ");
    scanf("%f" , &pib2);

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &pontoTuristico2);

    //Saída de Dados EXIBIÇÃO
    printf("\n***Cartas Cadastradas***\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n" , estado1);
    printf("Código: %s\n" , codigoCarta1);
    printf("Nome da Cidade: %s\n" , nomeCidade1);
    printf("População: %d\n" , populacao1);
    printf("Área: %.2f km²\n" , area1);
    printf("PIB: %.2f bilhões de reais\n" , pib1);
    printf("Número de Pontos Turísticos %d\n" , pontoTuristico1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n" , estado2);
    printf("Código: %s\n" , codigoCarta2);
    printf("Nome da Cidade: %s\n" , nomeCidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %.2f km²\n" , area2);
    printf("PIB: %.2f bilhões de reais\n" , pib2);
    printf("Número de Pontos Turísticos %d\n" , pontoTuristico2);



return 0;

}