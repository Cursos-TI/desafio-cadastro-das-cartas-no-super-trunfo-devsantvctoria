#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {
    
    unsigned long int populacao1,populacao2;
    int numerodepontosT1,numerodepontosT2;
    int resultadopopulacao;
    int resultadoarea;
    int resultadonumerodePT;
    int resultadoPIB;
    int resultadodensidade;
    int resultadoPERCAPITA;
    int superpoder;
    float area1,area2;
    float PIB1,PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float superpoderC1, superpoderC2;
    char estado1[50]; 
    char estado2[50];
    char nomecidade1[50];
    char nomecidade2[50];
    char codigocarta1[50];
    char codigocarta2[50];


    //saudação e informativo do jogo.

    printf("Bem vindo ao jogo Super Trunfo: Países \n");
    printf("Insira as informações/atributos das cartas \n");

    printf("Carta 1! \n");

    //entrada e saida de dados carta 1

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1);
    
    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade1); 

    printf("Digite o número de pontos turiticos: \n");
    scanf("%d", &numerodepontosT1);
    
    printf("Digite a Área da Cidade(Km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("DIgite o número da População(Nºinteiro): \n");
    scanf("%lu", &populacao1);

    densidadepopulacional1 = (float) populacao1 / area1;

    PIBpercapita1 = (float) PIB1 / populacao1;

    //impressão dos dados carta 1

    printf("Atributos Carta 1 \n");
    printf("Código da Cidade: %s \n", codigocarta1);
    printf("Estado: %s \n", estado1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("Número de pontos turisticos: %d \n", numerodepontosT1);
    printf("Área da Cidade: %f \n", area1);
    printf("PIB da Cidade: %f \n", PIB1);
    printf("População: %lu \n", populacao1);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf("PIB per Capita: %f \n", PIBpercapita1);

    
    printf("Carta 2! \n");

    //entrada e saide de dados carta 2

    printf("Digite o código da Cidade: \n");
    scanf("%s", codigocarta2);
    
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite o Número de pontos turisticos: \n");
    scanf("%d", &numerodepontosT2);

    printf("Digite a Área da Cidade(Km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o Número da população(Nºinteiro): \n");
    scanf("%lu", &populacao2);

    densidadepopulacional2 = (float) populacao2 / area2;

    PIBpercapita2 = (float) PIB2 / populacao2;

    // impressão de dados da carta 2

    printf("Atributos Carta 2 \n");
    printf("Código da Cidade: %s \n", codigocarta2);
    printf("Estado: %s \n", estado2);
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("Número de pontos turisticos: %d \n", numerodepontosT2);
    printf("Área da Cidade: %f \n", area2);
    printf("PIB da Cidade: %f \n", PIB2);
    printf("População: %lu \n", populacao2);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", PIBpercapita2);
    
    //mensagem de finalização de cadrasto das cartas
    
    printf("Cadastro realizado com sucesso! \n");

    printf("Comparação e Resultado das Cartas(1 vencedor, 0 perderdor): \n");
    
    // comparação de atributos das cartas 1 e 2
    // se for 1 a carta 1 vence, se for 0 a carta 2 vence
    
    resultadopopulacao = populacao1 > populacao2;
    resultadonumerodePT = numerodepontosT1 > numerodepontosT2;
    resultadoarea = area1 > area2;
    resultadoPIB = PIB1 > PIB2;
    resultadoPERCAPITA = PIBpercapita1 > PIBpercapita2;
    resultadodensidade = densidadepopulacional1 < densidadepopulacional2;

    //impressão dos resultados
 
    printf("N° da População: Carta 1 = (%lu) > N° da População: Carta 2 = (%lu)? %d\n", populacao1,populacao2,resultadopopulacao);
    printf("N° de Pontos Turisticos: Carta 1 = (%d) > N° de Pontos Turisticos: Carta 2 = (%d)? %d\n", numerodepontosT1,numerodepontosT2,resultadonumerodePT);
    printf("Área da Cidade: Carta 1 = (%.2f) > Área da Cidade: Carta 2 = (%.2f)? %d\n", area1,area2,resultadoarea);
    printf("PIB: Carta 1 = (%.2f) > PIB: Carta 2 = (%.2f)? %d\n", PIB1,PIB2,resultadoPIB);
    printf("PIB per Capita: Carta 1 = (%.2f) > PIB per Capita: Carta 2 = (%.2f)? %d\n", PIBpercapita1,PIBpercapita2,resultadoPERCAPITA);
    printf("Densidade Populacional: Carta 1 = (%f) < Densidade Populacional: Carta 2 = (%f)? %d\n", densidadepopulacional1,densidadepopulacional2,resultadodensidade);

    //comparação dos super poderes Carta 1 e 2

    superpoderC1 = (float) resultadoarea+resultadonumerodePT+resultadoPERCAPITA+resultadoPIB+resultadopopulacao+(1/densidadepopulacional1);
    superpoderC2 = (float) resultadoarea+resultadonumerodePT+resultadoPERCAPITA+resultadoPIB+resultadopopulacao+(1/densidadepopulacional2);
    superpoder = (float) superpoderC1 > superpoderC2;
    
    printf("Carta 1 (%.2f) e maior que Carta 2 (%.2f)? %d\n", superpoderC1,superpoderC2,superpoder);

    
    return 0;
}
