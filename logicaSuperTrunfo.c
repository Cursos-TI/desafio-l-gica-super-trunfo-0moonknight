#include <stdio.h>

int main(){

    char estado1, cidade1[50], codigo1[4], estado2, cidade2[50], codigo2[4]; // <- Divisão de variáveis conforme quantidades de cartas.
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pibbruto1, area2, pibbruto2, pibb1, pibb2, densidade1, densidade2, pibpc1, pibpc2;

/*
    %d: Imprime um inteiro no formado decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrão.
    %e: Imprime um número de pronto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
*/

    printf("Carta 1: \n Digite o estado da carta: \n");
    scanf(" %c", &estado1); // <- Espaços antes dos identificadores para não pular linhas e respostas.
    getchar();
    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo1);
    getchar(); // <- getchar Para limpar o buffer e evitar que informações se misturem devido aos dois %s.
    printf("Digite o nome da cidade da carta: \n");
    scanf(" %[^\n]", cidade1); // <- %[^\n] Para possibilitar que o scanf leia cidades com mais de uma palavra.
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibbruto1);
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos1);

    pibb1 = pibbruto1 / 1000000000;
    densidade1 = (float) (populacao1 / area1);
    pibpc1 = pibbruto1 / (float)populacao1;

    printf("\nCarta 2: \n Digite o estado da carta: \n");
    scanf(" %c", &estado2);
    getchar();
    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo2);
    getchar();
    printf("Digite o nome da cidade da carta: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibbruto2);
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos2);

    pibb2 = pibbruto2 / 1000000000;
    densidade2 = (float) (populacao2 / area2);
    pibpc2 = pibbruto2 / (float)populacao2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1); // <- %.2f para imprimir duas casas decimais após a virgula ou ponto.
    printf("PIB: %.2f bilhões de reais\n", pibb1);
    printf("Número de Pontos Turísticos: %d\n", pontos1); // <- Atenção aos espaços de linha para garantir a organização das informações.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n\n", pibpc1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pibb2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n\n", pibpc2);

    printf("Comparação de cartas por população:\n");
    printf("Carta 1: %d pessoas\n", populacao1);
    printf("Carta 2: %d pessoas\n", populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 venceu com a maior população!\n\n");
    } else {
        printf("Resultado: Carta 2 venceu com a maior população!\n\n");
    }    


    return 0;

}