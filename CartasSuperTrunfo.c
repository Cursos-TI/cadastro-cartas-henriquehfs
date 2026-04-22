#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

     char estado[20];
     char codigo[20];
     char capital[20];
     int populacao;
     float areakm2;
     float pib;
     int pontoturi;
     float densidadepop;
     float pibpercap;

         
           printf("Digite o nome do estado:");
           scanf("%s", &estado);

           printf("Digite o codigo do estado com uma letra de B a J seguido dos numeros de 01 a 09.");
           scanf("%s", &codigo);

           printf("Digite a capital do estado:");
           scanf("%s", &capital);

           printf("Digite a população da capital:");
           scanf("%d", &populacao);

           printf("Digite a Àrea (em km²) da capital:");
           scanf("%f", &areakm2);

           printf("Digite o PIB da capital:");
           scanf("%f", &pib);

           printf("Digite o número de pontos turisticos:");
           scanf("%d", &pontoturi);


           densidadepop = populacao / areakm2;
           pibpercap = pib / populacao;


           printf("Carta 1:\n");
           printf("Estado:%s\n", estado);
           printf("Codigo:%s\n", codigo);
           printf("Capital:%s\n", capital);
           printf("População:%d\n", populacao);
           printf("Àrea km²:%.2f\n", areakm2);
           printf("PIB:%.2f\n", pib);
           printf("Pontos Turísticos:%d\n", pontoturi);
           printf("Densidade Populacional:%.2f hab/km²\n", densidadepop);
           printf("PIB per Capita:%.2f reais\n", pibpercap);



    char estado2[20];
    char codigo2[20];
    char capital2[20];
    int populacao2;
    float areakm22;
    float pib2;
    int pontoturi2;
    float densidadepop2;
    float pibpercap2;


           printf("Digite o nome do estado:");
           scanf("%s", &estado2);

           printf("Digite o codigo do estado com uma letra de B a J seguido dos numeros de 01 a 09.");
           scanf("%s", &codigo2);

           printf("Digite a capital do estado:");
           scanf("%s", &capital2);

           printf("Digite a população da capital:");
           scanf("%d", &populacao2);

           printf("Digite a Àrea (em km²) da capital:");
           scanf("%f", &areakm22);

           printf("Digite o PIB da capital:");
           scanf("%f", &pib2);

           printf("Digite o número de pontos turisticos:");
           scanf("%d", &pontoturi2);

           densidadepop2 = populacao2 / areakm22;
           pibpercap2 = pib2 / populacao2;


           printf("Carta 2:\n");
           printf("Estado:%s\n", estado2);
           printf("Codigo:%s\n", codigo2);
           printf("Capital:%s\n", capital2);
           printf("População:%d\n", populacao2);
           printf("Àrea km²:%.2f\n", areakm22);
           printf("PIB:%.2f\n", pib2);
           printf("Pontos Turísticos:%d\n", pontoturi2);
           printf("Densidade Populacional:%.2f hab/km²\n", densidadepop2);
           printf("PIB per Capita:%.2f reais\n", pibpercap2);


  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade


return 0;
} 
