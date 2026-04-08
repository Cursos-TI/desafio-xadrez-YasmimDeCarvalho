#include <stdio.h>

int main() {

    int torreAnda = 5;
    int bispoAnda = 5;
    int rainhaAnda = 8;
    
    // TORRE
    printf("Movimentacao Torre\n");
    for(int i = 1 ; i <= torreAnda ; i++){
        printf(" | Direita -> %d",i);
    }

    // BISPO

    printf("\n\nMovimentacao Bispo\n");
    int i = 1;
    while(i <= bispoAnda){
        printf(" | Cima,direita -> %d",i);
        i++;
    }

    //RAINHA
    printf("\n\nMovimentacao Rainha\n");
    int num=1; 
    do{
        printf("%d <- Esquerda | ",num);
        num++;
    }while(num<=rainhaAnda);


}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando 
    // loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.