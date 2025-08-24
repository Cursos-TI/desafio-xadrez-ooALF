#include <stdio.h>

// Torre recursiva
void moverTorre (int casas) {
    if (casas > 0) {
        printf("♖ direita\n");
        moverTorre(casas - 1);
    }
}

// Bispo recursivo
void moverBispo (int casas) {
    if (casas > 0) {
        printf("♗ diagonal direita\n");
        moverBispo(casas - 1);
    }
}

// Rainha recursiva
void moverRainha (int casas) {
    if (casas > 0) {
        printf("♕ diagonal\n");
        moverRainha(casas - 1);
    }
}


int main() {

    
    int i, j;


  
    for (i = 0, j = 0; i < 2 || j < 1; ) {

        if (i < 2) {      
            printf("♘.cima\n");
            i++;        
            continue;      
        }

        if (j < 1) {     
            printf("♘.direita\n");
            j++;          
            break;      
        }

    }
    printf("\n");


    moverTorre(5);      // Torre anda 5 casas
    printf("\n");
    
    moverBispo(5);      // Bispo anda 5 casas
    printf("\n");
    
    moverRainha(6);     // Rainha anda 6 casas
    printf("\n");


    

    return 0;

  }
 
