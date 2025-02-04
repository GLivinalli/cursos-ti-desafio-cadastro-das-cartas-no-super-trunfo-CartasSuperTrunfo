#include <stdio.h>

int main(){
    // Carta 01
    char estado1;
    char nome_cidade1[100];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1, cod_carta1;
    //Introdução
    printf("Bem vindo ao Super Trunfo!\n");
    printf(
    "Você ira preencher as informações solicitadas ao decorrer do jogo,\n para no final duelar contra os atributos da carta do seu oponente!\n\n"
        );
    //------------------Primeira Carta------------------

    //Estados 
    printf("Insira a Inicial do Primeiro Estado.\n");
    scanf("%s", &estado1);
    
    //Nome da Cidade
    printf("Insira o Nome da Cidade. (sem espaço) \n");
    scanf("%s", &nome_cidade1);
    
    //Numero da Cidade
    printf("Escolha entre 1 e 4.\n");
    scanf("%d", &cod_carta1);
    
    //Área 
    printf("Insira a área da cidade.\n");
    scanf("%f", &area1);
    
    //PIB 
    printf("Insira o PIB.\n");
    scanf("%f", &pib1);
    
    //Número de pontos turísticos 
    printf("Quantidade de Pontos turísticos.\n");
    scanf("%d", &pontos_turisticos1);
    
    //Numero de HABITANTES
    printf("Numero de Habitantes.\n");
    scanf("%lu", &populacao1);
    
    densidade_populacional1 = area1 / populacao1;
    pib_per_capita1 = pib1 / (float)populacao1;

    //Exibir os dados
    printf("---------Status Primeira Carta---------\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Codigo da Carta: %c0%d\n", estado1, cod_carta1);
    printf("Área: %0.2fkm²\n", area1);
    printf("Quantidade de Habitantes: %lu\n", populacao1);
    printf("Densidade Populacional: %0.2f pessoas/km²\n", densidade_populacional1);
    printf("PIB: %0.2f bilhões de reais\n", pib1);
    printf("PIB per capita: %0.2f reais\n",  pib_per_capita1);
    printf("-----------------------------------");
    
    
}