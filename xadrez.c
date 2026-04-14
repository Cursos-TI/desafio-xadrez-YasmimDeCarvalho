#include <stdio.h>

void torre(int num){

    printf("Movimentacao Torre:\n");
    for (int inicial = 1; inicial <= num ; inicial++){
        printf("Direita\n");


    }
}

 void bispo(int num){
    /*  Loop externo responsavel pela horizontal = Direta
        Loop interno responsavel pela vertical = Cima
    */
    printf("Movimentacao Bispo:\n");
    for(int externo = 1; externo <= num ; externo++){
        for(int interno = 1 ; interno <= 1 ; interno++){
            printf("Direta ");
        }
        printf("Cima\n");
    }

}   

void rainha(int num){
    printf("\nMovimentao Rainha:\n");
 
    for(int i = 1; i < num; i++){
     
    printf("Esquerda\n");
    }


}

void cavalo(int num){
    if(num == 1){
        printf("Direita\n");
        return;
    }

    printf("Cima\n");
    cavalo(num - 1);
}

int main() {

    torre(5);

    printf("\n");

    bispo(5);

    rainha(8);

    printf("\nMovimentacao Cavalo\n"); // titulo fora no void para que nao repetindo a cada linha
    cavalo(3);



}


