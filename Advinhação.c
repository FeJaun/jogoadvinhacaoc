#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
    
    // imprime cabecalho do jogo
    printf("***********************************\n");
    printf("*Bem vindo ao jogo de adivinhacao!*\n");
    printf("***********************************\n");
    
    // declara variaveis

    int numeroSecreto = 42;

    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {    
        // pede o chute do jogador
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numeroSecreto);

        if(acertou) {
            printf("Voce acertou!\n");
            printf("Jogue novamente, voce e um bom jogador!\n");
            //para o loop
            break;

        } 
        else {
            int maior = (chute > numeroSecreto);
            if (maior) {
                printf("Seu chute foi maior que o numero secreto\n");
            } else {
                printf("Seu chute foi menor que o numero secreto\n");
            }
        }

    }
printf("Fim de jogo!\n");
}