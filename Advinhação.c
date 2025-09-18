#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    // imprime cabecalho do jogo
   
printf("       @@@@                   \n");
printf("      @@    @@@@@  @@@@ @@@@  \n");
printf("      @          @@@@ @@    @ \n");
printf("      @          @ @@@@@@   @ \n");
printf("     @          @@@@@   @@@@@ \n");
printf("    @                @@@@@@@@ \n");
printf("   @                   @@@@@  \n");
printf(" @@@     @                 @  \n");
printf("   @    @@                 @  \n");
printf("   @@                @@    @  \n");
printf("  @@@         @@@    @@   @@  \n");
printf("     @@                  @@@  \n");
printf("       @@@             @@@    \n");
printf("   @@@@@ @@@@@@@@@@@@@@@      \n");
printf("   @    @@@@@    @@@@   @     \n");
printf("   @    @@@ @@@@@@@@   @@@    \n");
printf("   @@@@@@@@@@@@@  @@@@@   @@  \n");
printf("  @      @@@@@@@@@@@       @  \n");
printf(" @         @@@@@@@@        @  \n");
printf("  @        @@@@@@@@        @  \n");
printf("  @@       @@    @@      @@   \n");
printf("    @@@@@@@        @@@@@@     \n");
    
    // declara variaveis
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();

    int numeroSecreto = numerogrande % 100;
    
    int chute;
    int tentativas = 1;

    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);    

    int numerodetentativas;
    switch (nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;
    case 2:
        numerodetentativas = 10;
        break;
    default:
        numerodetentativas = 5;
        break;
    }
    for (int i = 1; i <= numerodetentativas; i++) {
        printf("Tentativa %d de %d\n", i, numerodetentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if (acertou) {
            tentativas = i;
            break;
        }
        else if (maior) {
            printf("Seu chute foi maior que o numero secreto!\n");
        }
        else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }

        tentativas = i;

        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos = pontos - pontosPerdidos;
    }

    printf("Fim de jogo!\n");
    if (acertou) {
        printf("você acertou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else {
        printf("Que pena! Você perdeu. Tente novamente!\n");
    }

}