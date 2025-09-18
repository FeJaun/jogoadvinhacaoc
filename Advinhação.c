#include <stdio.h>
//#define NUMERO_DE_TENTATIVAS 5

int main(){
    
    // imprime cabecalho do jogo
    printf("***********************************\n");
    printf("*Bem vindo ao jogo de adivinhacao!*\n");
    printf("***********************************\n");
    
    // declara variaveis

    int numeroSecreto = 42;
    
    int chute;
    int tentativas = 1;

    int pontos = 1000;

    while (1) {
       
        // pede o chute do jogador
        printf("Tentativa %d\n", tentativas );
        printf("Qual o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");
            
            //continua para a proxima iteracao do loop
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto; 

        if(acertou) {
            printf("Voce acertou!\n");
            printf("Jogue novamente, voce e um bom jogador!\n");
            //para o loop
            break;

        } 
        else if(maior) {
            printf("Seu chute foi maior que o numero secreto!\n");
        } 
        else/* if(menor)*/ {
            printf("Seu chute foi menor que o numero secreto!\n");
        }   
        tentativas++;
        
        int pontosPerdidos = (chute - numeroSecreto)/2;
        pontos = pontos - pontosPerdidos;

    }
printf("Fim de jogo!\n");
printf("voce acertou em %d tentativas!\n", tentativas);
printf("Total de pontos: %d\n", pontos);
}