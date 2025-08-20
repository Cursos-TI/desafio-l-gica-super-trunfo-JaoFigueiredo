#include <stdio.h>


int main(){                                  
    
    // Declaração de váriáveis, cartas já cadastradas.

    char estado1='A',estado2='B';           
    int codigo1=01,codigo2=02;                  
    char cidade1[20]="Campo Alegre",cidade2[20]="São Bento";      
    unsigned long int populacao1=12000,populacao2=180000;           
    int pontos1=15,pontos2=6;                 
    float area1=499216,area2=495772;               
    float pib1=690000000,pib2=4700000000;                 
    float pibpercapt1=0.0,pibpercapt2=0.0;    
    float densidade1=0.0, densidade2=0.0;    
    unsigned long int superpoder1=0.0,superpoder2=0.0;  
    float inverso1=0.0,inverso2=0.0;        
    
    //Declaração da variável para ser a auxiliar na operação switch

    int opcao=0;

    //Calculo das variaveis dependentes

    pibpercapt1 = (float) pib1 / populacao1;
    pibpercapt2 = (float) pib2 / populacao2;

    densidade1= (float) populacao1 / area1;
    densidade2= (float) populacao2 / area2;

    inverso1 = 1.0/densidade1;
    inverso2 = 1.0/densidade2;

    superpoder1= (unsigned  long) populacao1 + pontos1 + area1 + pib1 + pibpercapt1 + inverso1;
    superpoder2= (unsigned  long) populacao2 + pontos2 + area2 + pib2 + pibpercapt2 + inverso2;
    
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
  
    printf("Vamos para a comparação\n");
    printf("Escolha seu atributo:\n");
    printf("1. População\n");
    printf("2. Área total\n");
    printf("3. PIB\n");
    printf("4. PIB per capta\n");
    printf("5. Quantidade de pontos turisticos\n");
    printf("6. Densidade populacional\n");
    printf("7. Superpoder\n\n");
    scanf("%i",&opcao);


    //Mostrar Nome das cidades + Codigo
    //Mostrar o atributo escolhido para a comparação
    //Os valores escolhidos
    //A carta vencedora
    //Em caso de empate, exibir empate
    //Atributos para comparação : população, area, pib, pib per capta, numero de pontos, densidade e superpoder
    switch (opcao)
    {
    case 1:
        printf("Atributo População\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%lu Habitantes\n\n",populacao1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%lu Habitantes\n\n",populacao2);
            if(populacao1>populacao2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(populacao1<populacao2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;

    case 2:
        printf("Atributo Área\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%.2f Km²\n\n",area1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%.2f Km²\n\n",area2);
            if(area1>area2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(area1<area2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;

    case 3:
        printf("Atributo PIB\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%.2f Reais\n\n",pib1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%.2f Reais\n\n",pib2);
            if(pib1>pib2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(pib1<pib2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;

    case 4:
        printf("Atributo PIB per capta\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%.2f Reais\n\n",pibpercapt1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%.2f Reais\n\n",pibpercapt2);
            if(pibpercapt1>pibpercapt2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(pibpercapt1<pibpercapt2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;

    case 5:
        printf("Atributo Pontos turísticos\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%i Pontos\n\n",pontos1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%i Pontos\n\n",pontos2);
            if(pontos1>pontos2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(pontos1<pontos2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;

    case 6:
        printf("Atributo Densidade Populacional\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%.2f Hab/Km²\n\n",densidade1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%.2f Hab/Km²\n\n",densidade2);
            if(densidade1<densidade2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(densidade1>densidade2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;

    case 7:
        printf("Atributo Super Poder\n\n");
        printf("%s %c 0%i\n",cidade1,estado1,codigo1);
        printf("%llu\n\n",superpoder1);
        printf("%s %c 0%i\n",cidade2,estado2,codigo2);
        printf("%llu\n\n",superpoder2);
            if(superpoder1>superpoder2){
                printf("O vencedor foi: %s\n",cidade1);
            }else if(superpoder1<superpoder2){
                printf("O vencedor foi: %s\n", cidade2);
            }else
                printf("EMPATE!");

        break;
    
    
    default:
        printf("Opção Invalida!");    
        break;

    }
    
return 0;
}
