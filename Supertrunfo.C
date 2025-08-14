#include <stdio.h>
 
int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[100], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%4s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 =(float)populacao1 / area1 ;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%4s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2 ;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

 int opcao;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao);

    int opcao2;
    printf("\nEscolha o segundo atributo para comparar:\n");
    if (opcao != 1) printf("1 - Populacao\n");
    if (opcao != 2) printf("2 - Area\n");
    if (opcao != 3) printf("3 - PIB\n");
    if (opcao != 4) printf("4 - Numero de Pontos Turisticos\n");
    if (opcao != 5) printf("5 - Densidade Demografica\n");
    if (opcao != 6) printf("6 - PIB per Capita\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao2);

    if (opcao == opcao2) {
        printf("Erro: Os atributos escolhidos devem ser diferentes!\n");
        return 1;
    }

    float valor1_attr1 = 0, valor2_attr1 = 0, valor1_attr2 = 0, valor2_attr2 = 0;

    // Atributo 1
    switch(opcao) {
        case 1: valor1_attr1 = (float)populacao1; valor2_attr1 = (float)populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = (float)pontosTuristicos1; valor2_attr1 = (float)pontosTuristicos2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        case 6: valor1_attr1 = pibPerCapita1; valor2_attr1 = pibPerCapita2; break;
    }
    // Atributo 2
    switch(opcao2) {
        case 1: valor1_attr2 = (float)populacao1; valor2_attr2 = (float)populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = (float)pontosTuristicos1; valor2_attr2 = (float)pontosTuristicos2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        case 6: valor1_attr2 = pibPerCapita1; valor2_attr2 = pibPerCapita2; break;
    }

    printf("\nComparacao dos atributos:\n");

    // Exibe nome do atributo 1
    printf("Atributo 1: ");
    switch(opcao) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Numero de Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valor1_attr1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valor2_attr1);
    if (opcao == 5) {
        if (valor1_attr1 < valor2_attr1)
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        else if (valor2_attr1 < valor1_attr1)
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else {
        if (valor1_attr1 > valor2_attr1)
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        else if (valor2_attr1 > valor1_attr1)
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        else
            printf("Empate!\n");
    }

    // Exibe nome do atributo 2
    printf("\nAtributo 2: ");
    switch(opcao2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Numero de Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valor1_attr2);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valor2_attr2);
    if (opcao2 == 5) {
        if (valor1_attr2 < valor2_attr2)
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        else if (valor2_attr2 < valor1_attr2)
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else {
        if (valor1_attr2 > valor2_attr2)
            printf("Vencedor: Carta 1 (%s)\n", nomeCidade1);
        else if (valor2_attr2 > valor1_attr2)
            printf("Vencedor: Carta 2 (%s)\n", nomeCidade2);
        else
            printf("Empate!\n");
    }

    // Soma dos atributos
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 - %s: %.2f + %.2f = %.2f\n", nomeCidade1, valor1_attr1, valor1_attr2, soma1);
    printf("Carta 2 - %s: %.2f + %.2f = %.2f\n", nomeCidade2, valor2_attr1, valor2_attr2, soma2);

    printf("\nResultado Final:\n");
    if (soma1 > soma2)
        printf("Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    else
        printf("Empate!\n");
    printf("Obrigado por jogar!\n");

    return 0;
}


