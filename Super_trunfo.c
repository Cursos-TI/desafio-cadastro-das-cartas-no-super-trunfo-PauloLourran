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

   char  estado2;
   char  codigo2 [3];
   char  cidade2 [100];
   int   populacao2;
   float area2;
   int   pturisticos2;
   float pib2;

    printf("Cadastro das 2 primeiras cartas: \n\n");
    printf("Agora cadastre a carta um: \n");
    printf("Estado [A-H]: \n");
    scanf("%c", &estado1);
    printf("Código da carta: \n");
    scanf("%s", &codigo1);
    printf("Cidade: \n");
    scanf("%s", &cidade1);
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Área em km²: \n");
    scanf("%f", &area1);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pturisticos1);
    printf("PIB: \n");
    scanf("%f ", &pib1);

    printf("Agora cadastre a carta dois: \n");
    printf("Estado [A-H]: \n");
    scanf("%c", &estado2);
    printf("Código da carta: \n");
    scanf("%s", &codigo2);
    printf("Cidade: \n");
    scanf("%s", &cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área em km: \n");
    scanf("%f", &area2);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pturisticos2);
    printf("PIB: \n");
    scanf("%f \n\n", &pib2);
 //dados da carta um
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("Pontos Turísticos: %d \n", pturisticos1);
    printf("PIB: %f \n", pib1);
    printf("Carta um cadastrada com sucesso! \n\n");
 //dados da carta dois 
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("Pontos Turísticos: %d \n", pturisticos2);
    printf("PIB: %f \n", pib2);
    printf("Carta dois cadastrada com sucesso! \n\n");

  return 0;
}