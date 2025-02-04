#include <stdio.h>

int main(){
    // Carta 00
    char estado1;
    char nome_cidade1[100];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1, cod_carta1;
    // Carta 01
    char estado2;
    char nome_cidade2[100];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos_turisticos2, cod_carta2;
    
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

        //------------------Segunda Carga------------------

    //Estados 
    printf("Insira a Inicial do Primeiro Estado.\n");
    scanf("%s", &estado2);
    
    //Nome da Cidade
    printf("Insira o Nome da Cidade. (sem espaço) \n");
    scanf("%s", &nome_cidade2);
    
    //Numero da Cidade
    printf("Escolha entre 1 e 4.\n");
    scanf("%d", &cod_carta2);
    
    //Área 
    printf("Insira a área da cidade.\n");
    scanf("%f", &area2);
    
    //PIB 
    printf("Insira o PIB.\n");
    scanf("%f", &pib2);
    
    //Número de pontos turísticos 
    printf("Quantidade de Pontos turísticos.\n");
    scanf("%d", &pontos_turisticos2);
    
    //Numero de HABITANTES
    printf("Numero de Habitantes.\n");
    scanf("%lu", &populacao2);
    
    densidade_populacional2 = area2 / populacao2;
    pib_per_capita2 = pib2 / (float)populacao2;
    
    //Exibir os dados da Carta 00
    printf("---------Status Primeira Carta-(Numero 0)---------\n");
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Codigo da Carta: %c0%d\n", estado1, cod_carta1);
    printf("Área: %0.2fkm²\n", area1);
    printf("Quantidade de Habitantes: %lu\n", populacao1);
    printf("Densidade Populacional: %0.2f pessoas/km²\n", densidade_populacional1);
    printf("PIB: %0.2f bilhões de reais\n", pib1);
    printf("PIB per capita: %0.2f reais\n",  pib_per_capita1);
    printf("-----------------------------------");

    //Exibir os dados da Carta 01
    printf("---------Status Segunda Carta-(Numero 1)---------\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Codigo da Carta: %c0%d\n", estado2, cod_carta2);
    printf("Área: %0.2fkm²\n", area2);
    printf("Quantidade de Habitantes: %lu\n", populacao2);
    printf("Densidade Populacional: %0.2f pessoas/km²\n", densidade_populacional2);
    printf("PIB: %0.2f bilhões de reais\n", pib2);
    printf("PIB per capita: %0.2f reais\n",  pib_per_capita2);
    printf("-----------------------------------\n");
    
    
    printf("Resultado!\nCarta 0 %c0%d ", estado1, cod_carta1);
    printf("Carta 1 %c0%d ", estado2, cod_carta2);
    printf("Área: %d\n", area1>area2);
    printf("População: %d\n", populacao1>populacao2);
    printf("Pib per Capita: %d\n", pib_per_capita1>pib_per_capita2);
}
