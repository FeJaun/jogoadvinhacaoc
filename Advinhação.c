#include <stdio.h>

int main() {
    
    // imprime cabecalho do jogo
    printf("***********************************\n");
    printf("*Bem vindo ao jogo de adivinhacao!*\n");
    printf("***********************************\n");
    
    // declara variaveis
    int numeroSecreto = 42;
    int chute;

    printf("Qual o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute == numeroSecreto) {
        printf("Voce acertou!\n");
    } else {
        if ( chute < numeroSecreto )
            printf("Seu chute foi menor que o numero secreto\n");
        if ( chute > numeroSecreto )
            printf("Seu chute foi maior que o numero secreto\n");
    }
    
    return 0;
}