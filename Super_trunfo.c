#include <stdio.h>
#include <ctype.h> // Para toupper()

int main() {
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("## SUPER-TRUNFO ##\n\n");

    // Entrada Carta 1
    printf("CARTA 1\n");
    printf("Digite o Estado (A a H) : ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    printf("Digite o codigo da Carta (ex: A01) : ");
    scanf(" %3s", codigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populaçao :");
    scanf("%d", &populacao1);

    printf("Digite a Area (km): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico1);

    // Cálculos Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontoTuristico1 + pibPerCapita1 + (1 / densidadePopulacional1);

    printf("\n");

    // Entrada Carta 2
    printf("CARTA 2\n");
    printf("Digite o Estado (A a H) : ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    printf("Digite o codigo da Carta (ex: A01) : ");
    scanf(" %3s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populaçao :");
    scanf("%d", &populacao2);

    printf("Digite a Area (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico2);

    // Cálculos Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontoTuristico2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição
    printf("\n***Cartas Cadastradas***\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristico1);
    printf("Densidade Demografica: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n" , superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populaçao: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Demografica: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n" , superPoder2);

    // Comparação
    int opcao;

    printf("\nEscolha o Atributo para comparaçao:\n");
    printf("1. Populaçao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Populaçao\n");
            printf("Populaçao %s = %d habitantes\n", nomeCidade1, populacao1);
            printf("Populaçao %s = %d habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("%s Venceu!\n", nomeCidade1);
            else if (populacao1 < populacao2)
                printf("%s Venceu!\n", nomeCidade2);
            else
                printf("Empate.\n");
            break;

        case 2:
            printf("Area\n");
            printf("Area %s = %.2f\n", nomeCidade1, area1);
            printf("Area %s = %.2f\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("%s Venceu!\n", nomeCidade1);
            else if (area1 < area2)
                printf("%s Venceu!\n", nomeCidade2);
            else
                printf("Empate.\n");
            break;

        case 3:
            printf("PIB\n");
            printf("PIB %s = %.2f\n", nomeCidade1, pib1);
            printf("PIB %s = %.2f\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("%s Venceu!\n", nomeCidade1);
            else if (pib1 < pib2)
                printf("%s Venceu!\n", nomeCidade2);
            else
                printf("Empate.\n");
            break;

        case 4:
            printf("Pontos Turisticos\n");
            printf("Pontos Turisticos %s = %d\n", nomeCidade1, pontoTuristico1);
            printf("Pontos Turisticos %s = %d\n", nomeCidade2, pontoTuristico2);
            if (pontoTuristico1 > pontoTuristico2)
                printf("%s Venceu!\n", nomeCidade1);
            else if (pontoTuristico1 < pontoTuristico2)
                printf("%s Venceu!\n", nomeCidade2);
            else
                printf("Empate.\n");
            break;

        case 5:
            printf("Densidade Demografica\n");
            printf("\n");
            printf("Densidade Demografica %s = %.2f\n", nomeCidade1, densidadePopulacional1);
            printf("Densidade Demografica %s = %.2f\n", nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("%s Venceu!\n", nomeCidade1);
            else if (densidadePopulacional1 > densidadePopulacional2)
                printf("%s Venceu!\n", nomeCidade2);
            else
                printf("Empate.\n");
            break;

        default:
            printf("Opção Invalida!\n");
            break;
    }

    return 0;
}
