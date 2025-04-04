#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {
    
    int populacao1,populacao2;
    int numerodepontosT1,numerodepontosT2;
    float area1,area2;
    float PIB1,PIB2;
    char nomecidade1[15];
    char nomecidade2[15];
    char codigocidade1[15];
    char codigocidade2[15];

    //saudação e informativo do jogo.

    printf("Bem vindo ao jogo Super Trunfo: Países \n");
    printf("Insira as informações/atributos das cartas \n");

    printf("Carta 1! \n");

    //entrada e saida de dados carta 1

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomecidade1);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigocidade1);
    
    printf("Digite a Área da Cidade(Km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("DIgite o número da População: \n");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turiticos: \n");
    scanf("%d", &numerodepontosT1);

    //impressão dos dados carta 1

    printf("Atributos Carta 1 \n");
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("Código da Cidade: %s \n", codigocidade1);
    printf("Área da Cidade: %f \n", area1);
    printf("PIB da Cidade: %f \n", PIB1);
    printf("População: %d \n", populacao1);
    printf("Número de pontos turisticos: %d \n", numerodepontosT1);

    
    printf("Carta 2! \n");

    //entrada e saide de dados carta 2

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite o código da Cidade: \n");
    scanf("%s", &codigocidade2);

    printf("Digite a Área da Cidade(Km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o Número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite o Número de pontos turisticos: \n");
    scanf("%d", &numerodepontosT2);

    // impressão de dados da carta 2

    printf("Atributos Carta 2 \n");
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("Código da Cidade: %s \n", codigocidade2);
    printf("Área da Cidade: %f \n", area2);
    printf("PIB da Cidade: %f \n", PIB2);
    printf("População: %d \n", populacao2);
    printf("Número de pontos turisticos: %d \n", numerodepontosT2);


    printf("Cadastro realizado com sucesso! \n");

    return 0;
}
