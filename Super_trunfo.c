#include <stdio.h>

int main()
{
   char  estado1;    
   char  codigo1 [3];
   char  cidade1 [100];
   int   populacao1;
   float area1;
   int   pturisticos1;
   float pib1;


   char  estado2 [2];
   char  codigo2 [3];
   char  cidade2 [100];
   int   populacao2;
   float area2;
   int   pturisticos2;
   float pib2;

      printf("Desafio Super Trunfo!\n\n");

   printf("Agora cadastre a carta um: \n");
    printf("Estado [A-H]: ");
      scanf("%c", &estado1);
    printf("Código da carta:");
      scanf("%s", codigo1);
    printf("Cidade:");
      scanf("%s", cidade1);
    printf("População:");        //cadastro da carta um sem bug
      scanf("%d", &populacao1);
    printf("Área em km²:");
      scanf("%f", &area1);
    printf("Pontos Turísticos:");
      scanf("%d", &pturisticos1);
    printf("PIB:");
      scanf("%f ", &pib1);

   printf("Agora cadastre a carta dois: \n");
    printf("Estado [A-H]: ");
      scanf("%s \n", estado2);
    printf("Código da carta: ");
      scanf("%s \n", codigo2);     
    printf("Cidade: ");                 
      scanf("%s \n", cidade2);      //cadastro da carta dois com bug
    printf("População: ");           // o \n serviu para tirar o bug nas primeiras scanf
      scanf("%d", &populacao2);     // nao consegui fazer o mesmo nas outras scanf
    printf("Área em km²: ");
      scanf("%f", &area2);
    printf("Pontos Turísticos: ");
      scanf("%d", &pturisticos2);
    printf("PIB: ");
      scanf("%f", &pib2);
 //dados da carta um
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("Pontos Turísticos: %d \n", pturisticos1);
    printf("PIB: %.2f Milhões de Reais\n", pib1);
    printf("Carta um cadastrada com sucesso! \n\n");
 //dados da carta dois 
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos Turísticos: %d \n", pturisticos2);
    printf("PIB: %.2f Milhões de Reais \n", pib2);
    printf("Carta dois cadastrada com sucesso! \n\n");

  return 0;
}