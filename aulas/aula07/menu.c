#include <stdio.h>
#include <stdio.h>
int main (){

    int opcao = -1;

    do {
        system("clear");
        printf("MENU PRINCIPAL");
        printf("1 - Consultar saldo\n");
        printf("2- Recarregar\n");
        printf("3 - Ver recados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao) {
            case 1: printf("Seu saldo eh R$10.00\n"); break;
            case 2: printf ("Escolha um valor para recarga.\n"); break;
            case 3: printf ("Voce nao tem recados\n"); break;
            case 0: printf ("Ate logo!\n"); break;
            default: printf ("Opcao invalida. Tente novamente\n");
        
        
        
        
        
        }
    
    if (opcao != 0){
    printf("Pressione ENTER para continuar...");
    getchar();
    }
    } while (opcao != 0);





    return 0;
}