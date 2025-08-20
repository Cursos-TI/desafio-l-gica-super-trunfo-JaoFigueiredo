#include <stdio.h>


int main(){                                  //todas inicializadas para evitar o "lixo" que pode estar na memoria
    char estado1='A',estado2='A';           // Declaração das variáveis para o campo Estado
    int codigo1=0,codigo2=0;                  //Declaração das variáveis para o campo código da carta
    char cidade1[20]="",cidade2[20]="";      //Declaração das variáveis para o campo Nome da cidade
    unsigned long int populacao1=0,populacao2=0;           //Declaração das variáveis para o campo  população
    int pontos1=0,pontos2=0;                 //Declaração das variáveis para o campo pontos turisticos
    float area1=0.0,area2=0.0;               //Declaração das variáveis para o campo area
    float pib1=0.0,pib2=0.0;                 //Declaração das variáveis para o campo pib 
    float pibpercapt1=0.0,pibpercapt2=0.0;    //Declaração das variáveis para o campo pib per capta
    float densidade1=0.0, densidade2=0.0;    //Declaração das variáveis para o campo densidade populacional
    float superpoder1=0.0,superpoder2=0.0;  //Declaração das variáveis para o campo Super poder
    float inverso1=0.0,inverso2=0.0;        //Declaração das variáveis de suporte para gravar o inverso da densidade

    
    // Conjunto de printf e scanf para receber os dados da  carta 1 #foco na linha 26 onde nao utiliza-se o & por ser uma string

    printf("Bem vindo ao cadastro de cartas do Desafio Super Trunfo!\n\n Por favor digite uma letra entre A e H \n");
    scanf("%c",&estado1);                                                                                           

    printf("Agora digite um número, 01, 02, 03 ou 04 (Com o Zero)\n");                                             
    scanf("%d",&codigo1); 

    printf("Agora digite o nome da cidade\n");                                                                     
    scanf(" %[^\n]",cidade1); 

    printf("Agora digite a população desta cidade\n");                                                             
    scanf("%lu",&populacao1);

    printf("Agora digite o PIB desta cidade\n");                                                                    
    scanf("%f",&pib1);

    printf("Agora digite a área desta cidade\n");                                                                    
    scanf("%f",&area1);

    printf("Por fim, digite o número de pontos túristicos desta cidade\n");                                         
    scanf("%i",&pontos1);

    //Comando para "consumir o enter" Pois o próximo scanf sera com valor %c

    getchar(); 

    // Conjunto de printf e scanf para receber os dados da carta 2 foco na linha 54 onde nao utiliza-se o & por ser uma string
    
    printf("Agora cadastraremos a segunda carta!\n\n Por favor digite uma letra entre A e H \n");                   
    scanf("%c",&estado2);

    printf("Agora digite um número, 01, 02, 03 ou 04 (Com o Zero)\n");                                                         
    scanf("%d",&codigo2);

    printf("Agora digite o nome da cidade\n");                                                                       
    scanf(" %[^\n]",cidade2);

    printf("Agora digite a população desta cidade\n");                                                              
    scanf("%lu",&populacao2);

    printf("Agora digite o PIB desta cidade\n");                                                                    
    scanf("%f",&pib2);

    printf("Agora digite a área desta cidade\n");                                                                    
    scanf("%f",&area2);

    printf("Por fim, digite o número de pontos túristicos desta cidade\n");                                         
    scanf("%i",&pontos2);

    /*Utilização de operadores para calculo dos outros paramentros das cartas, achei mais facil utilizar
    uma variavel para recebero inverso da densidade do que utilizar no codigo 1/densidade*/
    

    pibpercapt1 = (float) pib1 / populacao1;
    pibpercapt2 = (float) pib2 / populacao2;

    densidade1= (float) populacao1 / area1;
    densidade2= (float) populacao2 / area2;

    inverso1 = 1.0/densidade1;
    inverso2 = 1.0/densidade2;

    superpoder1= (unsigned long) populacao1 + pontos1 + area1 + pib1 + pibpercapt1 + inverso1;
    superpoder2= (unsigned long) populacao2 + pontos2 + area2 + pib2 + pibpercapt2 + inverso2;
    
    //Sequencia de prints para imprimir o resultado final da carta 1
    
    printf("Carta 1 \n");       
    printf("%s",cidade1);
    printf("  ");
    printf("%c",estado1);
    printf("%i\n",codigo1);
    printf("População: %lu habitantes\n",populacao1);
    printf("PIB: %.2f Reais\n",pib1);
    printf("Área: %.2f Km²\n",area1);
    printf("Pontos turísticos: %i \n",pontos1);
    printf("Densidade Populacional: %.2f Hab/Km²\n",densidade1);
    printf("PIB per capta: %.2f Reais\n\n",pibpercapt1);

    //Sequencia de prints para imprimir o resultado final da carta 2

    printf("Carta 2 \n");       
    printf("%s",cidade2);
    printf("  ");
    printf("%c",estado2);
    printf("%i\n",codigo2);
    printf("População: %lu habitantes\n",populacao2);
    printf("PIB: %.2f Reais\n",pib2);
    printf("Área: %.2f Km²\n",area2);
    printf("Pontos turísticos: %i \n",pontos2);
    printf("Densidade Populacional: %.2f Hab/Km²\n",densidade2);
    printf("PIB per capta: %.2f Reais\n\n",pibpercapt2);
  
    /*Na video aula, o professor disse que eu poderia realizar a comparação de todos os parametros
    Então utilizei a estrutura if/else para indicar todos os parametros vencedores*/ 

    printf("Comparando populações\n");
    
    if (populacao1>populacao2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");

    printf("Comparando Pontos turísticos\n");
    
    if (pontos1>pontos2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");

    printf("Comparando Área da cidade\n");
    
    if (area1>area2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");
    
    printf("Comparando PIB\n");
    
    if (pib1>pib2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");
        
    printf("Comparando PIB per Capta\n");
    
    if (pibpercapt1>pibpercapt2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");
        
    printf("Comparando Densidade\n");
    
    if (densidade1<densidade2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");
        
    printf("Comparando Super Poder\n");
    
    if (superpoder1>superpoder2)
        printf("A Carta 1 é a vencedora\n\n");
    else
        printf("A Carta 2 é a vencedora\n\n");    
return 0;
}
