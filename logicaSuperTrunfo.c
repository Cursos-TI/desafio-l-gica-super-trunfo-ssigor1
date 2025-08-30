    #include <stdio.h>

    int main () {
        char estado1[50], estado2[50];
        float area1,area2, pib1, pib2;
        int populacao1, populacao2, ptur1,ptur2;
        char nome_cidade1[50], nome_cidade2[50], cod1[50], cod2[50];

        printf ("Digite o 1 Estado: \n");
        scanf ("%s", &estado1);

        printf("Digite o 1 Código da carta: \n");
        scanf("%s",&cod1 );

        printf ("Digite o nome da 1 cidade: \n");
        scanf ("%s", &nome_cidade1);

        printf("Digite a população da 1 carta: \n");
        scanf("%d",&populacao1 );

        printf("Digite area da 1 carta: \n");
        scanf("%f",&area1 );

        printf("Digite o PIB da 1 carta: \n");
        scanf("%f",&pib1 );

        printf("Digite a quantidade de pontos turisticos da 1 carta: \n");
        scanf("%f",&ptur1 );
        
        printf ("Digite o 2 Estado: \n");
        scanf ("%s", &estado2);

        printf("Digite o 2 Código da carta: \n");
        scanf("%s",&cod2 );

        printf("Digite a população da 2 carta: \n");
        scanf("%d",&populacao2 );

        printf ("Digite o nome da 2 cidade: \n");
        scanf ("%s", &nome_cidade2);

        printf("Digite area da 2 carta: \n");
        scanf("%f",&area2 );

        printf("Digite o PIB da 2 carta: \n");
        scanf("%f",&pib2 );
        
        printf("Digite a quantidade de pontos turisticos da 2 carta: \n");
        scanf("%f",&ptur2 );

        float densi1 = (float) populacao1 / area1;
        float densi2 = (float) populacao2 / area2;

        float pibper1 = (float) pib1 / populacao1;
        float pibper2 = (float) pib2 / populacao2;


        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

        printf ("Carta 1 \n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s \n", cod1);    
        printf("Nome da cidade: %s \n", nome_cidade1); 
        printf("Área: %f \n", area1); 
        printf("PIB: %f \n", pib1);
        printf("Pontos turisticos: %d \n", ptur1);
        printf("Densidade: %f \n", densi1);
        printf("PIB per capita: %.2f\n", pibper1);

        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

        printf ("Carta 2 \n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s \n", cod2);    
        printf("Nome da cidade: %s \n", nome_cidade2); 
        printf("Área: %f \n", area2); 
        printf("PIB: %f \n", pib2);
        printf("Pontos turisticos: %d \n", ptur2);
        printf("Densidade:: %f \n", densi2);  
        printf("PIB per capita: %.2f\n", pibper1);

        if (densi1 > densi2){
            printf("A Carta 1 venceu!");
        } else {
            printf("Acarta 2 venceu!");
        }



        return 0;
    }