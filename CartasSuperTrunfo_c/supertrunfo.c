#include <stdio.h>

int main() {

    // Declaração das variáveis

    char estado1[3], codigo1[5], nome1[30];
    char estado2[3], codigo2[5], nome2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // Entrada de dados da Carta 1

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%2s", estado1);
    printf("Codigo da carta: ");
    scanf("%4s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%2s", estado2);
    printf("Codigo da carta: ");
    scanf("%4s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculo dos indicadores

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // PIB em bilhões
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    int atributo = 3;

    // Comparação das cartas

    printf("\n=== Comparacao de Cartas ===\n");

    if (atributo == 1) {
        printf("Atributo: Populacao\n");
        printf("%s (%s): %d habitantes\n", nome1, estado1, populacao1);
        printf("%s (%s): %d habitantes\n", nome2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Empate!\n");
    }

    else if (atributo == 2) {
        printf("Atributo: Area\n");
        printf("%s (%s): %.2f km²\n", nome1, estado1, area1);
        printf("%s (%s): %.2f km²\n", nome2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Empate!\n");
    }

    else if (atributo == 3) {
        printf("Atributo: PIB\n");
        printf("%s (%s): %.2f bilhões\n", nome1, estado1, pib1);
        printf("%s (%s): %.2f bilhões\n", nome2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Empate!\n");
    }

    else if (atributo == 4) {
        printf("Atributo: Densidade Populacional\n");
        printf("%s (%s): %.2f hab/km²\n", nome1, estado1, densidade1);
        printf("%s (%s): %.2f hab/km²\n", nome2, estado2, densidade2);

        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", nome1);
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", nome2);
        else
            printf("Empate!\n");
    }

    else if (atributo == 5) {
        printf("Atributo: PIB per Capita\n");
        printf("%s (%s): %.2f reais\n", nome1, estado1, pib_per_capita1);
        printf("%s (%s): %.2f reais\n", nome2, estado2, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib_per_capita2 > pib_per_capita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Empate!\n");
    }

    else {
        printf("Atributo invalido.\n");
    }

    return 0;
}