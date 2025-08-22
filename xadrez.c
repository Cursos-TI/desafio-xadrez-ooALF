#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {


    int bispo, torre, rainha;
    



    for (bispo = 0; bispo <= 5; bispo++) {
                 
        printf("♗ se movimentou na diagonal ➚: %d\n", bispo);
    }
    printf ("================================================\n");


    
    for (torre = 0; torre <=7; torre++){

     printf ("♖ se movimentou em linha reta ⬆: %d\n",torre);
    }



    printf ("================================================\n");

    
    for (rainha = 0; rainha <=5; rainha++){
        printf ("♕ se movimentou verticalmente:%d\n",rainha);
    }
    
       return 0;

}
