#include <stdio.h> //Biblioteca padrão de entrada/saída, printf scanf.
#include <stdlib.h> //Emula o prompt de comando, cls e pause.
#include <locale.h> //Acentuação e linguagem.
#include <windows.h> //Trocar a cor de um trecho de texto.

int main()
{
setlocale(LC_ALL, "portuguese");
int menu=1, jogo, pos_jogo, controle, wins=0, losses=0, contagem=0;
//Animação inicial
   system("Color 1");
   printf("=======================================================================\n\n");
usleep(250000);
   printf("     _______ _______ __    __   _________ ______    _______ _________\n");
usleep(250000);
   printf("    / _____// ___  / \\\ \\\  / /  /___  ___// ____ \\\  / ___  //___  ___/\n");
usleep(250000);
   printf("   / /___  / /  / /   \\\ \\\/ /      / /   / /__/  / / /  / /    / /\n");
usleep(250000);
   printf("  / ____/ / /  / /    / /\\\ \\\     / /   / __  __/ / /  / /    / /\n");
usleep(250000);
   printf(" / /     / /__/ /    / /  \\\ \\\   / /   / /  \\\ \\\  / /__/ /    / /\n");
usleep(250000);
   printf("/_/     /______/    /_/    \\\_\\\ /_/   /_/    \\\_|/______/    /_/\n\n");
usleep(250000);
   printf("     ________ _________ __       _________ __ _______  ___     __\n");
usleep(250000);
   printf("    /  _____//___  ___//  \\\     /___  ___// // ___  / /   |   / /\n");
usleep(250000);
   printf("   /  /____     / /   / /\\\ \\\       / /   / // /  / / / /| |  / /\n");
usleep(250000);
   printf("  /____   /    / /   /  __  \\\     / /   / // /  / / / / | | / /\n");
usleep(250000);
   printf(" _____/  /    / /   /  /  \\\  \\\   / /   / // /__/ / / /  | |/ /\n");
usleep(250000);
   printf("/_______/    /_/   /__/    \\\__\\\ /_/   /_//______/ /_/   |___/\n\n");
usleep(250000);
   printf("=======================================================================\n\n");

   system ("color 8");
   sleep(1);
   system ("color 2");
   sleep(1);
   system ("color 4");
   sleep(1);
   system ("color 6");
   sleep(1);
   system ("color 7");
   sleep(1);
   printf("JOGUE EM TELA CHEIA!");
   printf(" PRESSIONE QUALQUER BOTÃO PARA COMEÇAR\n");
   getch();


//Menu e jogos
do
{
//título menu
//Código para trocar a cor de um trecho.
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;
GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
saved_attributes = consoleInfo.wAttributes;

system ("cls");
printf("\n=======================================================================\n\n");
SetConsoleTextAttribute(hConsole, 4);
printf("     _______ _______ __    __   _________ ______    _______ _________\n");
printf("    / _____// ___  / \\"" \\  / /  /___  ___// ____ \\\  / ___  //___  ___/\n");
printf("   / /___  / /  / /   \\\ \\\/ /      / /   / /__/  / / /  / /    / /\n");
printf("  / ____/ / /  / /    / /\\\ \\\     / /   / __  __/ / /  / /    / /\n");
printf(" / /     / /__/ /    / /  \\\ \\\   / /   / /  \\\ \\\  / /__/ /    / /\n");
printf("/_/     /______/    /_/    \\\_\\\ /_/   /_/    \\\_|/______/    /_/\n\n");
SetConsoleTextAttribute(hConsole, 1);
printf("     ________ _________ __       _________ __ _______  ___     __\n");
printf("    /  _____//___  ___//  \\\     /___  ___// // ___  / /   |   / /\n");
printf("   /  /____     / /   / /\\\ \\\       / /   / // /  / / / /| |  / /\n");
printf("  /____   /    / /   /  __  \\\     / /   / // /  / / / / | | / /\n");
printf(" _____/  /    / /   /  /  \\\  \\\   / /   / // /__/ / / /  | |/ /\n");
printf("/_______/    /_/   /__/    \\\__\\\ /_/   /_//______/ /_/   |___/ \n\n");
SetConsoleTextAttribute(hConsole, saved_attributes);
printf("=======================================================================\n\n");
//menu

if(contagem>0)
    {
    SetConsoleTextAttribute(hConsole, 2);
    printf("Vitórias");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(": %i\n", wins);
    SetConsoleTextAttribute(hConsole, 4);
    printf("Derrotas");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(": %i\n\n", losses);
    }
    contagem++;
printf("Bem-vindo selecione um dos minijogos.\n[1] Jokenpô\n[2] Blackjack (21)\n[3] OO7\n[4] Encerrar programa.\n");
scanf("%i", &jogo);
fflush(stdin);


switch(jogo)
{

    case 1: // Jokenpo
            // Tutorial
            system("cls");
            printf("Jokenpô!");
            printf("\nComo funciona: Primeiro selecione a quantidade de pontos necessários para vencer a série.");
            printf("\n\nApós isso a série começa, você escolhe o que vai jogar e o computador escolhe o que ele vai jogar.");
            printf("\nPressione qualquer botão para começar.");
            getche();
            do
            {
            system("cls");
            printf("Jokenpô!\n");
            //Começo jogo
            int variavel, jogador, melhor_de, pontos_jogador = 0, pontos_ai = 0;
            srand(time(NULL));
            //Seleção tamanho da série.
            if(melhor_de == "Impossível") //If para esconder erro1
                erro1:
                    {
                    system("cls");
                    printf("Jokenpô!\nDigite um número válido.\n");
                    }
            serie:
            printf("Acaba em quanto? Max.100 (Quantas vezes é necessário ganhar para acabar a série).\n");
            scanf("%i", &melhor_de);
            fflush(stdin);

            if ((melhor_de == 0)|(melhor_de < 0)|(melhor_de > 100)) // filtro
                goto erro1;
            //Placar
            jokempo:
            printf("\n\nAcaba em %i\nJogador: %i\nBot: %i\n\n", melhor_de,pontos_jogador, pontos_ai);
            printf("Escolha uma opção\n [1] Pedra\n [2] Papel\n [3] Tesoura\n");
            scanf("%i", &jogador);
            fflush(stdin);
            //Jogo
            variavel = ("%i", rand() % 101);
            if (variavel <= 33) // bot = pedra
                {
                system("cls");
                if (jogador == 1)
                {
                    printf("\n   Jogador                Computador\n"); //(JOGADOR) PEDRA X (BOT) PEDRA = Empate
                    printf("      __                     __\n");
                    usleep(250000);
                    printf("  ---'  \\\______        _____/  '---\n");
                    usleep(250000);
                    printf("       \\\ | ((__)      (__)) | /\n");
                    usleep(250000);
                    printf("       ( / ((___)    (___)) \\\ )\n");
                    usleep(250000);
                    printf("           ((__)      (__))\n");
                    usleep(250000);
                    printf("  --.______((_)        (_))______.--\n");
                    sleep(1);
                    printf("\nJogador: Pedra        Computador: Pedra\nEmpate.");
                    getch();
                }
                else if (jogador == 2)
                {
                    pontos_jogador = pontos_jogador + 1;  //(JOGADOR) PAPEL X (BOT) PEDRA = vitoria
                    printf("\n   Jogador                Computador\n\n");
                    printf("     / )\n");
                    usleep(250000);
                    printf("    ' /                       __ \n");
                    usleep(250000);
                    printf("---' (___________       _____/  '---\n");
                    usleep(250000);
                    printf("        _________)     (__)) | /\n");
                    usleep(250000);
                    printf("        __________)   (___)) \\\ )\n");
                    usleep(250000);
                    printf("        _________)     (__))\n");
                    usleep(250000);
                    printf("--.__________)          (_))______.--\n");
                    sleep(1);
                    printf("\nJogador: Papel        Computador: Pedra\nVitória do jogador.");
                    getch();

                }
                else if (jogador == 3)
                {
                    pontos_ai = pontos_ai + 1; //(JOGADOR) TESOURA X (BOT) PEDRA = perdeu
                    printf("\n   Jogador                Computador\n\n");
                    usleep(250000);
                    printf("    __                              __\n");
                    usleep(250000);
                    printf("---'  \\\____________           _____/  '---\n");
                    usleep(250000);
                    printf("     \\\ |  _________)         (__)) | /\n");
                    usleep(250000);
                    printf("     ( / ___________)       (___)) \\\ )\n");
                    usleep(250000);
                    printf("        ((__)                (__))\n");
                    usleep(250000);
                    printf("--.___((_)                    (_))______.--\n");
                    sleep(1);
                    printf("\nJogador: Tesoura        Computador: Pedra\nVitória do computador.");
                    getch();
                }
                }   //(Fim do IF BOT = PAPEL)
            else if ((variavel > 33) && (variavel <= 66)) // bot = PAPEL
                {
                system("cls");
                if (jogador == 1)
                {
                    pontos_ai = pontos_ai + 1;  //(JOGADOR)PEDRA X (BOT) PAPEL = derrota
                    printf("\n   Jogador                Computador\n\n");
                    usleep(250000);
                    printf("                                ( \\\n");
                    usleep(250000);
                    printf("    __                           \\\ '\n");
                    usleep(250000);
                    printf("---'  \\\____            ___________) '--- \n");
                    usleep(250000);
                    printf("     \\\ | ((__)        (_________\n");
                    usleep(250000);
                    printf("     ( / ((___)      (__________\n");
                    usleep(250000);
                    printf("         ((__)        (_________\n");
                    usleep(250000);
                    printf("--.______((_)             (__________.--\n");
                    sleep(1);
                    printf("\nJogador: Pedra        Computador: Papel\nVitória do computador.");
                    getch();
                }
                else if (jogador == 2)
                {
                    printf("\n   Jogador                Computador\n\n");
                    usleep(250000);
                    printf("     / )                            ( \\\n");
                    usleep(250000);
                    printf("    ' /                              \\\ '\n");
                    usleep(250000);
                    printf("---' (___________          ___________) '---\n");
                    usleep(250000);
                    printf("        _________)        (_________\n");
                    usleep(250000);
                    printf("        __________)      (__________\n");
                    usleep(250000);
                    printf("        _________)        (_________\n");
                    usleep(250000);
                    printf("--.__________)                (__________.--\n");
                    sleep(1);
                    printf("\nJogador: Papel        Computador: Papel\nEmpate.");
                    getch();
                }
                else if (jogador == 3)
                {
                    pontos_jogador = pontos_jogador + 1;  //(JOGADOR) TESOURA X PAPEL = vitória
                    printf("\n   Jogador                Computador\n\n");
                    usleep(250000);
                    printf("                                   ( \\\n");
                    usleep(250000);
                    printf("    __                              \\\ '\n");
                    usleep(250000);
                    printf("---'  \\\____________       ___________) '---  \n");
                    usleep(250000);
                    printf("     \\\ |  _________)     (_________\n");
                    usleep(250000);
                    printf("     ( / ___________)   (__________\n");
                    usleep(250000);
                    printf("        ((__)            (_________\n");
                    usleep(250000);
                    printf("--.___((_)                   (__________.--\n");
                    sleep(1);
                    printf("\nJogador: Tesoura        Computador: Papel\nVitória do jogador.");
                    getch();
                }
                }     //(Fim do IF BOT = PAPEL)

            else // BOT = TESOURA
                {
                system("cls");
                if (jogador == 1)
                {
                    pontos_jogador = pontos_jogador + 1;  //(JOGADOR) PEDRA  X (BOT) TESOURA == Vitoria
                    printf("\n   Jogador                Computador\n\n");
                    usleep(250000);
                    printf("    __                            __\n");
                    usleep(250000);
                    printf("---'  \\\____           ___________/  '---\n");
                    usleep(250000);
                    printf("     \\\ | ((__)       (_________  | /\n");
                    usleep(250000);
                    printf("     ( / ((___)     (___________ \\\ )\n");
                    usleep(250000);
                    printf("         ((__)              (__))    \n");
                    usleep(250000);
                    printf("--.______((_)                 (_))___.--\n");
                    sleep(1);
                    printf("\nJogador: Pedra        Computador: Tesoura\nVitória do jogador.");
                    getch();
                }
                else if (jogador == 2)
                {
                    pontos_ai = pontos_ai + 1;   //(JOGADOR) PAPEL X (BOT) TESOURA = Derrota
                    printf("\n   Jogador                Computador\n\n");
                    usleep(250000);
                    printf("     / )\n");
                    usleep(250000);
                    printf("    ' /                             __\n");
                    usleep(250000);
                    printf("---' (___________       ___________/  '---\n");
                    usleep(250000);
                    printf("        _________)     (_________  | /\n");
                    usleep(250000);
                    printf("        __________)   (___________ \\\ )\n");
                    usleep(250000);
                    printf("        _________)           (__))\n");
                    usleep(250000);
                    printf("--.__________)                 (_))___.--\n");
                    sleep(1);
                    printf("\nJogador: Papel        Computador: Tesoura\nVitória do computador.");
                    getch();
                }
                else if (jogador == 3)
                {
                   //(JOGADOR) TESOURA X (BOT) TESOURA = Empate
                    printf("\n   Jogador                Computador\n\n");
                    printf("    __                                __\n");
                    usleep(250000);
                    printf("---'  \\\____________       ___________/  '---\n");
                    usleep(250000);
                    printf("     \\\ |  _________)     (_________  | /\n");
                    usleep(250000);
                    printf("     ( / ___________)   (___________ \\\ )\n");
                    usleep(250000);
                    printf("        ((__)                   (__))\n");
                    usleep(250000);
                    printf("--.___((_)                        (_))___.--\n");
                    sleep(1);
                    printf("\nJogador: Tesoura        Computador: Tesoura\nEmpate.\n");
                    getch();
                }
                }   //(Fim do IF BOT = TESOURA)

            if ((pontos_jogador == melhor_de) || (pontos_ai == melhor_de))
            {
                system("cls");
                printf("\nJogador: %i\nComputador: %i\n\n", pontos_jogador, pontos_ai);
                if(pontos_jogador > pontos_ai)
                {
                system ("color 2");
                printf("Você ganhou!!!");
                wins++;
                getch();
                system ("color 7");
                }
                else
                {
                system ("color 4");
                printf("Você perdeu. :0");
                losses++;
                getch();
                system ("color 7");
                }
            }
            else
            {
                goto jokempo;
                sleep(1);

            }
            //fim do jogo jokenpo
            printf("\n\n[1] Jogar novamente\n[2] Voltar ao menu\n[3] Encerrar programa\n");
            scanf("%i", &pos_jogo);
            fflush(stdin);
            //Opções pós-jogo
            switch(pos_jogo)
            {
                case 1: controle=1;
                break;

                case 2: menu=1;
                controle=0;
                break;

                case 3: menu=0;
                break;

                default: printf("Opção inválida\a");
                sleep(2);
                printf(" retornando ao menu...");
                sleep(2);
                break;
            }
            }while(controle==1);
            break;

    case 2: //Blackjack
            do
            {
            system("cls");
            printf("Blackjack (Simplificado) - Como jogar:\n");
            sleep(1);
            //Tutorial BLACKJACK
            int fichas = 100, aposta, jogo, c1, c2, c3, c4, c5, c6, contagem=2, soma, escolha, escolha2, escolha3, escolha4, variavel_esconder = 0, blackjack_controle = 1, cor=752, easter_egg=0, easter_egg2=0;
            srand(time(NULL));
            printf("\no Blackjack, ou 21, é um jogo de cartas que consiste em somar os valores das cartas, até tentar se aproximar o máximo de 21 sem estourar, você só pode comprar até 6 cartas.\n");
            printf("\nVocê iniciará com o valor de 100 fichas, e poderá apostar 10, 50, 100 ou todas fichas de uma vez.\n");
            printf("\nCaso você ganhe do computador, seu ganho é o dobro da sua aposta\nCaso perca, você perderá as fichas apostadas\nCaso empate, as fichas apostadas serão devolvidas\n");
            printf("\nTente acumular o máximo de fichas possíveis, caso você chegue a 0 fichas é GAME OVER.\nPressione qualquer botão para começar.");
            getch();
            //Fim do tutorial
            //Sistema de Fichas.
            do
            {
            contagem = 2;
            system("cls");
            printf("FICHAS: %i\n", fichas);
            blackjack:
            printf("Quanto deseja apostar?\n[1]10 fichas\n[2]50 fichas\n[3]100 fichas\n[4]TUDO OU NADA!(todas as fichas)\n");
            scanf("%i" , &jogo);
            fflush(stdin);
            switch (jogo)
            {

               case 1:

                 fichas = fichas - 10;
                 aposta = 10;
                 break;

               case 2:
                  if (fichas >= 50)
                  {
                  fichas = fichas - 50;
                  aposta = 50 ;
                  }
                  else
                  {
                    goto blackjack;
                  }
                break;
                case 3:
                     if (fichas >= 100)
                  {
                  fichas = fichas - 100;
                  aposta = 100 ;
                  break;
                  }
                  else
                  {
                    goto blackjack;
                  }
                  case 4:
                    aposta = fichas;
                    fichas = fichas - fichas;
                    break;

                  default: goto blackjack;
            }
            //Fim do sistema de fichas
            //Começo do jogo
                        system("cls");
            c1 = ("%i", rand() % 9 + 1);
            c2 = ("%i", rand() % 9 + 1);
            begin:
            printf("FICHAS: %i\n", fichas);
            printf("APOSTA: %i\n", aposta);
            printf("        _______________ _______________\n");
			printf("       /%i             //%i             /\n", c1, c2);
			printf("      /              //              /\n");
			printf("     /              //              /\n");
			printf("    /    black--   //    black--   /\n");
			printf("   /    --jack    //    --jack    /\n");
			printf("  /      (21)    //      (21)    /\n");
			printf(" /              //              /\n");
			printf("/_____________%i//_____________%i/\n", c1, c2);
            soma = c1 + c2;
            printf("\nSua soma de cartas é: %i", soma);
            printf("\n\nO que deseja fazer?\n[1]Comprar mais uma carta\n[2]Parar\n");
            scanf("%i" , &escolha);
            fflush(stdin);
            switch(escolha)
            {
                case 1:
                system("cls");
                c3 = ("%i", rand() % 9 + 1);
                contagem += 1;
                printf("FICHAS: %i\n", fichas);
                printf("APOSTA: %i\n", aposta);
                printf("        _______________ _______________ _______________\n");
                printf("       /%i             //%i             //%i             /\n", c1, c2,c3);
                printf("      /              //              //              /\n");
                printf("     /              //              //              /\n");
                printf("    /    black--   //    black--   //    black--   /\n");
                printf("   /    --jack    //    --jack    //    --jack    /\n");
                printf("  /      (21)    //      (21)    //      (21)    /\n");
                printf(" /              //              //              /\n");
                printf("/_____________%i//_____________%i//_____________%i/\n", c1, c2,c3);
                soma = soma + c3;
                printf("\nSua soma de cartas é: %i", soma);
                if(soma > 21)
                    goto condicoes;
                printf("\n\nO que deseja fazer?\n[1]Comprar mais uma carta\n[2]Parar\n");
                scanf("%i" , &escolha2);
                fflush(stdin);
                switch(escolha2)
                {
                    case 1:
                    system("cls");
                    c4 = ("%i", rand() % 9 + 1);
                    contagem += 1;
                    printf("FICHAS: %i\n", fichas);
                    printf("APOSTA: %i\n", aposta);
                    printf("        _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             /\n", c1, c2,c3,c4);
                    printf("      /              //              //              //              /\n");
                    printf("     /              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i/\n", c1, c2,c3,c4);
                    soma = soma + c4;
                    printf("\nSua soma de cartas é: %i", soma);
                    if(soma > 21)
                        goto condicoes;
                    printf("\n\nO que deseja fazer?\n[1]Comprar mais uma carta\n[2]Parar\n");
                    scanf("%i" , &escolha3);
                    fflush(stdin);
                    switch(escolha3)
                        {
                            case 1:
                            system("cls");
                            c5 = ("%i", rand() % 9 + 1);
                            contagem += 1;
                            printf("FICHAS: %i\n", fichas);
                            printf("APOSTA: %i\n", aposta);
                            printf("        _______________ _______________ _______________ _______________ _______________\n");
                            printf("       /%i             //%i             //%i             //%i             //%i             /\n", c1, c2,c3,c4,c5);
                            printf("      /              //              //              //              //              /\n");
                            printf("     /              //              //              //              //              /\n");
                            printf("    /    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                            printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                            printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                            printf(" /              //              //              //              //              /\n");
                            printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1, c2,c3,c4,c5);
                            soma = soma + c5;
                            printf("\nSua soma de cartas é: %i", soma);
                            if(soma > 21)
                                goto condicoes;
                            printf("\n\nO que deseja fazer?\n[1]Comprar mais uma carta\n[2]Parar\n");
                            scanf("%i" , &escolha4);
                            fflush(stdin);
                            switch(escolha4)
                            {
                            case 1:
                                system("cls");
                                c6 = ("%i", rand() % 9 + 1);
                                contagem += 1;
                                printf("FICHAS: %i\n", fichas);
                                printf("APOSTA: %i\n", aposta);
                                printf("        _______________ _______________ _______________ _______________ _______________ _______________\n");
                                printf("       /%i             //%i             //%i             //%i             //%i             //%i             /\n", c1, c2, c3, c4, c5, c6);
                                printf("      /              //              //              //              //              //              /\n");
                                printf("     /              //              //              //              //              //              /\n");
                                printf("    /    black--   //    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                                printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                                printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                                printf(" /              //              //              //              //              //              /\n");
                                printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1, c2, c3, c4, c5, c6);
                                soma = soma + c6;
                                printf("\nSua soma de cartas é: %i", soma);
                            }
                        }
                    case 2: break;

                    default:
                    goto begin;
                }
                break;
                case 2: break;

                default:
                goto begin;
            }
            condicoes:
            {
               sleep(2);
               system("cls");
               int bot_soma=0, bot1=0, contagem_carta=0, c1_bot=0, c2_bot=0, c3_bot=0, c4_bot=0, c5_bot=0, c6_bot=0;
               //Jogada do computador
               printf("Jogada do computador\n");
               sleep(1);
               do
               {
               contagem_carta += 1;
               bot1 = ("%i", rand() % 9 + 1);
               if (contagem_carta ==  1)
                (c1_bot = bot1);
               if (contagem_carta ==  2)
                (c2_bot = bot1);
               if (contagem_carta ==  3)
                (c3_bot = bot1);
               if (contagem_carta ==  4)
                (c4_bot = bot1);
               if (contagem_carta ==  5)
                (c5_bot = bot1);
               if (contagem_carta ==  6)
                (c6_bot = bot1);

               if (contagem_carta == 1)
                    {
                    printf("        _______________ \n");
                    printf("       /%i             /\n", c1_bot);
                    printf("      /              /\n");
                    printf("     /              /\n");
                    printf("    /    black--   /\n");
                    printf("   /    --jack    /\n");
                    printf("  /      (21)    /\n");
                    printf(" /              /\n");
                    printf("/_____________%i/\n", c1_bot);
                    }
               else if (contagem_carta == 2)
                    {
                    printf("        _______________ _______________\n");
                    printf("       /%i             //%i             /\n", c1_bot, c2_bot);
                    printf("      /              //              /\n");
                    printf("     /              //              /\n");
                    printf("    /    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    /\n");
                    printf(" /              //              /\n");
                    printf("/_____________%i//_____________%i/\n", c1_bot, c2_bot);
                    }
               else if (contagem_carta == 3)
                    {
                    printf("        _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot);
                    printf("      /              //              //              /\n");
                    printf("     /              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot);
                    }
               else if (contagem_carta == 4)
                    {

            		printf("        _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot, c4_bot);
                    printf("      /              //              //              //              /\n");
                    printf("     /              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot, c4_bot);
                    }
               else if (contagem_carta == 5)
                    {
                    printf("        _______________ _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot, c4_bot, c5_bot);
                    printf("      /              //              //              //              //              /\n");
                    printf("     /              //              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot, c4_bot, c5_bot);
                    }
               else if (contagem_carta == 6)
                    {
                    printf("        _______________ _______________ _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot, c4_bot , c5_bot, c6_bot);
                    printf("      /              //              //              //              //              //              /\n");
                    printf("     /              //              //              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot, c4_bot, c5_bot, c6_bot);
                    }
               bot_soma = bot_soma + bot1;
               sleep(1);
               if (contagem_carta == 6)
                {
                printf("\nFim da jogada do computador.\n");
                sleep(2);
                break;
                }
               if (bot_soma < 16)
                printf("\nCompra\n");
               else if (bot_soma > 16)
                {
                printf("\nFim da jogada do computador.\n");
                sleep(2);
                break;
                }
               }while(bot_soma != 258);
               //Fim da jogada do computador
               //Mostrar e comparar resultados
               system("cls");
               printf("Computador\n");
               sleep(2);
               if (contagem_carta == 1)
                    {
                    printf("        _______________ \n");
                    printf("       /%i             /\n", c1_bot);
                    printf("      /              /\n");
                    printf("     /              /\n");
                    printf("    /    black--   /\n");
                    printf("   /    --jack    /\n");
                    printf("  /      (21)    /\n");
                    printf(" /              /\n");
                    printf("/_____________%i/\n", c1_bot);
                    }
               else if (contagem_carta == 2)
                    {
                    printf("        _______________ _______________\n");
                    printf("       /%i             //%i             /\n", c1_bot, c2_bot);
                    printf("      /              //              /\n");
                    printf("     /              //              /\n");
                    printf("    /    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    /\n");
                    printf(" /              //              /\n");
                    printf("/_____________%i//_____________%i/\n", c1_bot, c2_bot);
                    }
               else if (contagem_carta == 3)
                    {
                    printf("        _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot);
                    printf("      /              //              //              /\n");
                    printf("     /              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot);
                    }
               else if (contagem_carta == 4)
                    {
            		printf("        _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot, c4_bot);
                    printf("      /              //              //              //              /\n");
                    printf("     /              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot, c4_bot);
                    }
               else if (contagem_carta == 5)
                    {
                    printf("        _______________ _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot, c4_bot, c5_bot);
                    printf("      /              //              //              //              //              /\n");
                    printf("     /              //              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot, c4_bot, c5_bot);
                    }
               else if (contagem_carta == 6)
                    {
                    printf("        _______________ _______________ _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             //%i             //%i             /\n", c1_bot, c2_bot, c3_bot, c4_bot , c5_bot, c6_bot);
                    printf("      /              //              //              //              //              //              /\n");
                    printf("     /              //              //              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1_bot, c2_bot, c3_bot, c4_bot, c5_bot, c6_bot);
                    }
               sleep(2);
               printf("Soma das cartas do computador: %i", bot_soma);
               //Cartas jogador
               sleep(2);
               printf("\n\nJogador\n");
               sleep(2);
               if (contagem == 1)
                    {
                    printf("        _______________ \n");
                    printf("       /%i             /\n", c1);
                    printf("      /              /\n");
                    printf("     /              /\n");
                    printf("    /    black--   /\n");
                    printf("   /    --jack    /\n");
                    printf("  /      (21)    /\n");
                    printf(" /              /\n");
                    printf("/_____________%i/\n", c1);
                    }
               else if (contagem == 2)
                    {
                    printf("        _______________ _______________\n");
                    printf("       /%i             //%i             /\n", c1, c2);
                    printf("      /              //              /\n");
                    printf("     /              //              /\n");
                    printf("    /    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    /\n");
                    printf(" /              //              /\n");
                    printf("/_____________%i//_____________%i/\n", c1, c2);
                    }
               else if (contagem == 3)
                    {
                    printf("        _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             /\n", c1, c2, c3);
                    printf("      /              //              //              /\n");
                    printf("     /              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i/\n", c1, c2, c3);
                    }
               else if (contagem == 4)
                    {

            		printf("        _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             /\n", c1, c2, c3, c4);
                    printf("      /              //              //              //              /\n");
                    printf("     /              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i/\n", c1, c2, c3, c4);
                    }
               else if (contagem == 5)
                    {
                    printf("        _______________ _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             //%i             /\n", c1, c2, c3, c4, c5);
                    printf("      /              //              //              //              //              /\n");
                    printf("     /              //              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1, c2, c3, c4, c5);
                    }
               else if (contagem == 6)
                    {
                    printf("        _______________ _______________ _______________ _______________ _______________ _______________\n");
                    printf("       /%i             //%i             //%i             //%i             //%i             //%i             /\n", c1, c2, c3, c4, c5, c6);
                    printf("      /              //              //              //              //              //              /\n");
                    printf("     /              //              //              //              //              //              /\n");
                    printf("    /    black--   //    black--   //    black--   //    black--   //    black--   //    black--   /\n");
                    printf("   /    --jack    //    --jack    //    --jack    //    --jack    //    --jack    //    --jack    /\n");
                    printf("  /      (21)    //      (21)    //      (21)    //      (21)    //      (21)    //      (21)    /\n");
                    printf(" /              //              //              //              //              //              /\n");
                    printf("/_____________%i//_____________%i//_____________%i//_____________%i//_____________%i//_____________%i/\n", c1, c2, c3, c4, c5, c6);
                    }
               sleep(2);
               printf("Soma das cartas do jogador: %i\n", soma);
               //Condições vitória, derrota e empate.
               if((bot_soma > 21) && (soma > 21)) //Os dois estouram 21 - empate
               {
               printf("\nJogador e computador ultrapassaram 21!");
               sleep(1);
               goto empate;
               }
               else if((bot_soma > 21) && (soma <= 21)) //Bot estoura e jogador não estoura - vitória jogador.
               {
               printf("\nComputador ultrapassou 21!");
               sleep(1);
               goto ganhou;
               }
               else if ((bot_soma <= 21) && (soma > 21)) //Jogador estoura e bot não estoura = derrota jogador.
               {
               printf("\nJogador ultrapassou 21!");
               sleep(1);
               goto perdeu;
               }
               else if((soma == bot_soma) && (soma <= 21)) //Ninguem estoura e valores iguais = empate.
               {
               printf("\nValores iguais!");
               sleep(1);
               goto empate;
               }
               else if((soma <= 21) && (bot_soma <= 21) && (soma < bot_soma)) //Ninguem estoura e bot maior do que jogador = derrota jogador.
               {
               printf("\nO computador acumulou um valor maior sem estourar!");
               sleep(1);
               goto perdeu;
               }
               else if((soma <= 21) && (bot_soma <= 21) && (soma > bot_soma)) //Ninguem estoura e jogador maior que bot = vitória jogador.
               {
               printf("\nO jogador acumulou um valor maior sem estourar!");
               sleep(1);
               goto ganhou;
               }
            //Vitória, derrota e empate.
            }
            if(variavel_esconder == 301)
                {
                perdeu:
                    system ("color 4");
                    printf("\nVocê perdeu :( \n\n");
                    sleep(3);
                    system ("color 7");
                    aposta = 0;
                    fichas = fichas + aposta;
                    losses++;
                }
            if(variavel_esconder == 301)
                {
                ganhou:
                    system ("color 2");
                    printf("\nVocê ganhou!!!");
                    sleep(1);
                    printf("\n+ %i Fichas\n\n", aposta*2);
                    sleep(2);
                    system ("color 7");
                    fichas = fichas + aposta + aposta;
                    wins++;
                }
            if(variavel_esconder == 301)
                {
                empate:
                    printf("\nEmpate\n");
                    sleep(1);
                    printf("Retornando fichas.\n\n");
                    sleep(2);
                    fichas = fichas + aposta;
                }
            printf("Pressione qualquer botão para continuar.\n");
            getch();


            if((fichas > 999) && (easter_egg==0))
            {
            system("cls");
            easter_egg++;
            system ("color E");
            printf("PARABÉNS, VOCÊ CHEGOU A 1000 FICHAS");
            sleep(1);
            printf("\nPRÊMIO\n\n");
            sleep(1);
            printf("    /:::::::-\n");
            printf("   o.       .//.\n");
            printf("  +-  .`````   :+`\n");
            printf("  s  .      ``  `+o::::::::.\n");
            printf(" `s  .     ````   :     ```.:::-\n");
            printf("  s  .  ```                   `.//::::::::::::.\n");
            printf("  +-  .`                         :.``        `-/:\n");
            printf("  `y:                                .```````   :/\n");
            printf("  o.-                                ``      .  /:\n");
            printf(" /:                                    .    `` `s\n");
            printf(" s     :shy+.                          ``  `` `+.\n");
            printf(" s    +NMMm:+/                          .``  .+.\n");
            printf(" s    oMMMMNN+              .::-`          ./:`\n");
            printf(" /-   `odmmd+` ``  ...    `yNMM+:-      :/:-`\n");
            printf(" `o`     ``    `::-:/`    +MMMMyyh      o.\n");
            printf("  `+.           .:``-/--  .dNMMMm:     -+\n");
            printf("   `+-     ``    ....`     `-//:`     -+\n");
            printf("     -/.`./:-/`    .::.`            `/:\n");
            printf("       -/o   -+   +:``-+.        `./:`\n");
            printf("        .o   -.   s    `s    ``.::-`\n");
            printf("   `   -:-`       +`    s:::::-.\n");
            printf(" ::-:::-               `s`       `.-:-\n");
            printf(".+   -o      `::.      o.     `-/:-` /:\n");
            printf("`o.         //` -o    +-    `:/.     +-\n");
            printf("  :/:-.-:-` s    o` `+:   `//.     `+:\n");
            printf("     `.` `:+h`  -s:o+-:::::`    `://`\n");
            printf("            .::::-``::::::::::::-`\n");
            getch();
            system ("color 7");
            }

            else if((fichas > 9999) && (easter_egg2==0))
            {
            system("cls");
            easter_egg2++;
            system ("color E");
            printf("PARABÉNS, VOCÊ CHEGOU A 10000 FICHAS");
            sleep(1);
            printf("\nPRÊMIO\n\n");
            sleep(1);
            printf("                                          `+o+`\n");
            printf("                                          oy- -h/\n");
            printf("                                         y+    `ys\n");
            printf("                                       `y/  `-   sy\n");
            printf("                                      `y/    s    ho\n");
            printf("                                     `y/    `m    -N.\n");
            printf("                             .:///++++s+++//oN:`   d+\n");
            printf("                         `-++/.``          ``.-/+//hy\n");
            printf("                  ``   :oo:h-                    `./s+-\n");
            printf("                ` :` :y/`  o/                        `:o/.\n");
            printf("                .-/yydy-   y.                           .++.      `````\n");
            printf("            .- -+yso/hNm  +:                              .so/++oo++++++oo+//:.`\n");
            printf("           ++/oyo+- /MMN./.                ````          ./:-.``          `..:/oo/-\n");
            printf("   `.     :s  h+o:/oNMMh.              `:+oooossso:.     `             ```      `-+y-\n");
            printf("  -y+s/`  y. +oo.mMMMMN-             `/o/.`    `.-+ys-            `-+ssssooos-`    s+\n");
            printf(" `d- `/s: h` d://MMMMN/             :+-``          `:hs`        -oyo:.``   `m``   `d.\n");
            printf(" /s    `soy+`d::-dmNN:            .shssyyhy+.        `sh`     .oo-`    `   `N     oo\n");
            printf(" oo      dos+d:s/:+y-          .+yhyooydmNMMNs`        sd`   .h:     .:`   :m    /y`\n");
            printf(" .h.   `/s  `.----.          .sss/-oy-.yMMMMMMh        `ds    d`   -+yo.   hs   :y`\n");
            printf("  sh+++h/                   :y:+..hMy:oNMMMMMMM- `.     :N`   d    `.:s.  /N.  /s`\n");
            printf("  :h   .o/`                /y.o``dMMMMMMMMMMMMMs+:.     .M.  `d  :oy+-   /m: `oo\n");
            printf("   h/    -++/-``````````-/od`/- /MMMMMMMMMMMMMd         -M.   d.``-y- `:yh- :h/\n");
            printf("   `d-      `-//////////-`++ +- .mMMMMMMMMMMNNy+:-`     +m    :d+//.-ohs-`-ys`\n");
            printf("    .y+`              `   -y``+:`.+hmNNNNmhhm+`         yy     /s/shs:``/hs.\n");
            printf("      /so-`        `:os-   .++//////:/+osyh+.:-.        sh      `oy:./yh+`\n");
            printf("        ./sss+///oss:` .--.`  `-/+++++++:.              .N-        :ohy+:-.`\n");
            printf("            +h--.`                                       :m:           `.:+m`\n");
            printf("             :y:                                          .hy.         .:yd+\n");
            printf("               /o/`                                         -yy+.     `.--.d.\n");
            printf("                `/dy:--.`                                      -+soo+:-.-+o:\n");
            printf("              -ss/.                                                 `.:sd-\n");
            printf("            -ho.                `-`                       `       `-/os/`   ``.```     .:////++/+/\n");
            printf("           :d-                .::++o++/-.                 ./ss/++++/////+++//::://+ss++:.```    `m\n");
            printf("          `N-                :o`    `.-/+ooooo+/////////+++/.` `:/yo:.``         `..`            m`\n");
            printf("          .N  `              m:             :d.``````````   `/++-oo-:++ooooso`                  `m\n");
            printf("           ys`:           .::ds//::-.        :oo+-`       :++.` .do/-```   +d`                  /s\n");
            printf("           osh-        `++:.``````             `-/so.   /o:`    ``       .so`                  `d.\n");
            printf("          .y //       .y-                   .`    `:y+:o:`            ./yho:/::-.              so\n");
            printf("          :o .s:` .   h-`                   +`      `od.             .--......-:/oo`         `ss\n");
            printf("          `+o/`/o+o   d.:  .     .         :s         /h.                        .m`        `ys\n");
            printf("            .o:..-s/  -so .o    `y.`     .+y:.         :h`                      `y:        -+d:\n");
            printf("             `-/+/:+:  `//+d-`.-ho+oshhsoos+.           os                    `/s:        ..`m`\n");
            printf("                    ++`  `.-+ooo-   `:shsy/             `m`                 ./o/`           os\n");
            printf("                     :d+.              :N:               y:              `/shs//:.         +y`\n");
            printf("                     .M:+o/-`         `m+                y-              ```  `:h-       -so`\n");
            printf("                     `N- `-/oo+/-..```/M`                h`                 `-++.     .:so-\n");
            printf("                      oh-     .-/+++oooM/               +o                /so+-...-:+oo/`\n");
            printf("                       -ys:`           om.            `//yo.    .+-`       -:+sdo::-.\n");
            printf("                         .+so/-.```     +d+`         `-o+`-ss+-.`-dy///:::/+o+/`\n");
            printf("                            `.:h:-.`     .+ys/-.``      o+  `-/oooo:  `....`\n");
            printf("                            :o+/`       `.-s-....`      y-\n");
            printf("                           oh`.o/.    -sso/-           s/\n");
            printf("                           hs`d.     -m.//. `-.      `y:\n");
            printf("                           .syd:....-od+/  .s`      :y.\n");
            printf("                               .-::-.`:ss-`.h-   .:o+\n");
            printf("                                         -//::+++/.\n");
            system ("color 7");
            }

            if(fichas == 0)
                blackjack_controle = 0;
            else
            {
            blackjack_controle:
            printf("Deseja continuar???\n[1] Continuar\n[2] Parar\n");
            scanf("%i", &blackjack_controle);
            fflush(stdin);
            if ((blackjack_controle < 0) || (blackjack_controle >  2))
                {
                printf("Opção inválida");
                sleep(2);
                system("cls");
                goto blackjack_controle;
                }
            }
            }while (blackjack_controle == 1); //Fim dowhile do jogo.
            system("cls");
            if (fichas == 0)
                 {
                 system("color 4");
                 printf("\\\\\\\\==GAME OVER==////");
                 sleep(1);
                 printf("\nFichas: %i", fichas);
                 sleep(3);
                 system("color 7");
                 }
            else
                 {
                 printf("Fim de jogo");
                 printf("\nFichas: %i", fichas);
                 }
            printf("\n\n[1] Jogar novamente\n[2] Voltar ao menu\n[3] Encerrar programa\n");
            scanf("%i", &pos_jogo);
            fflush(stdin);
            //Opções pós-jogo
            switch(pos_jogo)
            {
                case 1: controle=2;
                break;

                case 2: menu=1;
                controle=0;
                break;

                case 3: menu=0;
                break;

                default: printf("Opção inválida\a");
                sleep(2);
                printf(" retornando ao menu...");
                sleep(2);
                break;
            }

            }while(controle==2);
            break;

    case 3: // 007
            do
            {
            system("cls");
            //jogo
            //Trocar a cor de um trecho setup.
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
            WORD saved_attributes;
            GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
            saved_attributes = consoleInfo.wAttributes;
            jogo007:
            //Tutorial.
            printf("007 é um jogo de estratégia onde se tem três vidas.\n");
            printf("O jogo consiste em realizar uma das escolhas: atirar, recarregar e defender.\n");
            printf("Como funciona:\n\n");
            printf("O objetivo do jogo é atirar no oponente enquanto ele recarrega, assim eliminando as 3 vidas e conquistando a vitória.\n\n");
            printf("Regras:\n");
            printf("1 - Atirar necessita de uma munição, pode ser defendida pelo escudo\n");
            printf("2 - Não é possivel recarregar se já houver munição disponivel.\n");
            printf("3 - Defender só pode ser realizado três vezes consecutivas.\n\n");
            printf("Pressione qualquer botão para começar.");
            sleep(2);
            getch();
            int fim=0, jogada=0, defesa_jogador=3, bala_jogador=0, defesa_bot=3, bala_bot=0, bot_decisao=0, contador_bot=0, continuar, hp,vida=3, vida_bot=3;
            do
            {
            srand(time(NULL));
            system("cls");
            //printf("bala_bot = %i, defesa_bot = %i, ultima decisão bot=%i", bala_bot, defesa_bot, bot_decisao);
            //printf("\nbala_jogador = %i, defesa_jogador = %i\n\n", bala_jogador, defesa_jogador);
            //Jogada inválida
            if (fim == 12212)
                {
                erro_0071:
                printf("Jogada inválida.");
                sleep(3);
                system("cls");
                }
            else if (fim == 12333)
                {
                erro_0072:
                printf("Jogada inválida, jogador sem munição!!.");
                sleep(3);
                system("cls");
                }
            else if (fim == 12343)
                {
                erro_0073:
                printf("Jogada inválida, munição já disponível.");
                sleep(3);
                system("cls");
                }
            else if (fim == 132332)
                {
                erro_0074:
                printf("Jogada inválida, jogador sem defesas restantes.");
                sleep(3);
                system("cls");
                }
            //Status do jogo - HP
            printf("Jogador");

            for (hp=0; hp<vida;hp++)
                {
                SetConsoleTextAttribute(hConsole, 4);
                printf(" \03");
                }
            SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("\t\t\t\t\tBot");
            for (hp=0; hp<vida_bot;hp++)
                {
                SetConsoleTextAttribute(hConsole, 4);
                printf(" \03");
                }
            printf("\n");
            SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("Defesas restantes: %i.\t\t\t\tDefesas restantes: %i.\n", defesa_jogador, defesa_bot); //Defesas
            //Munição
            if ((bala_jogador == 0) && (bala_bot == 0))
                printf("Sem munição.\t\t\t\t\tSem munição.");
            else if ((bala_jogador==1) && (bala_bot==0))
                printf("Munição disponível.\t\t\t\tSem munição.");
            else if ((bala_jogador==0) && (bala_bot==1))
                printf("Sem munição.\t\t\t\t\tMunição disponível.");
            else if ((bala_jogador==1) && (bala_bot==1))
                printf("Munição disponível.\t\t\t\tMunição disponível.");
            //Jogada usuário
            printf("\n\nQual é a sua jogada?\n[1] - Atirar\n[2] - Defender\n[3] - Recarregar\n");
            scanf("%i", &jogada);
            fflush(stdin);
            if ((jogada > 3) || (jogada < 0))
                goto erro_0071;
            else if ((jogada==1) && (bala_jogador==0))
                goto erro_0072;
            else if ((jogada==3) && (bala_jogador==1))
                goto erro_0073;
            else if ((jogada==2) && (defesa_jogador==0))
                goto erro_0074;
            //Jogada bot
            if (contador_bot == 0) // Jogada inicial sempre igual
                {
                contador_bot+=1;
                bot_decisao=3;
                }
            // Jogadas se o bot tiver bala.
            else
                switch(bala_bot)
                {
                case 1:
                    if ((bala_bot == 1) && (defesa_jogador==0))
                        bot_decisao=1;
                    else if((bala_bot == 1) && (defesa_jogador==1)) //bot com bala defesa jogador = 1
                        {
                        int randomizar_1 = ("%i", rand() % 100 + 1);
                        if (randomizar_1 > 30) //70%
                            bot_decisao=1;
                        else if ((randomizar_1 <= 30) && (defesa_bot > 0))
                            bot_decisao=2;
                        else if ((randomizar_1 > 0) && (defesa_bot==0))
                            bot_decisao=1;
                        }
                    else if((bala_bot == 1) && (defesa_jogador==2)) //bot com bala e defesa jogador = 2
                        {
                        int randomizar_2 = ("%i", rand() % 100 + 1);
                        if (randomizar_2 > 50) //50%
                            bot_decisao=1;
                        else if ((randomizar_2<=50)&&(defesa_bot>0))
                            bot_decisao=2;
                        else if ((randomizar_2 > 0)&& (defesa_bot==0))
                            bot_decisao=1;
                        }
                    else if((bala_bot == 1) && (defesa_jogador==3)) //bot com bala e defesa jogador = 3
                        {
                        int randomizar_3 = ("%i", rand() % 100 + 1);
                        if (randomizar_3 > 70) //30%
                            bot_decisao=1;
                        else if ((randomizar_3 <= 70)&&(defesa_bot > 0))
                            bot_decisao=2;
                        else if ((randomizar_3 > 0)&& (defesa_bot==0))
                            bot_decisao=1;
                        }
                        break;
                // Jogadas se o bot não tiver bala.
                case 0:
                    if ((bala_bot == 0)&&(defesa_bot==0))
                        bot_decisao=3;
                    else if (bala_jogador==0)
                        bot_decisao=3;
                    else if ((bala_jogador==1) && (defesa_bot>0) && (defesa_jogador==0))
                        bot_decisao=2;
                    else if ((bala_jogador==1)&&(defesa_bot==3)) //Jogador com bala e bot com 3 defesas.
                        {
                        int randomizar_4 = ("%i", rand() % 100 + 1);
                        if (randomizar_4 > 80)
                            bot_decisao=3;
                        else
                            bot_decisao=2;
                        }
                    else if ((bala_jogador == 1)&&(defesa_bot == 2)) //Jogador com bala e bot com 2 defesas.
                        {
                        int randomizar_5 = ("%i", rand() % 100 + 1);
                        if (randomizar_5 > 60)
                            bot_decisao=3;
                        else
                            bot_decisao=2;
                        }
                    else if ((bala_jogador == 1)&&(defesa_bot == 1)) //Jogador com bala e bot com 1 defesas.
                        {
                        int randomizar_6 = ("%i", rand() % 100 + 1);
                        if (randomizar_6 > 50)
                            bot_decisao=3;
                        else
                            bot_decisao=2;
                        }
                        break;
                default:
                    continue;
                }
                //Resultado
                resultado:
                if ((jogada==1) && (bot_decisao==1))//certo
                    {
                    printf("\nAmbos atiraram!\n");
                    bala_bot=0;
                    bala_jogador=0;
                    vida_bot-=1;
                    vida-=1;
                    printf("             _______________________ , ,                                                          , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                             [|________--_____\\\__/__´ \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                            \\\ (__)_).-,(\n");
                    printf("          // (..) ), --“                                                                                           “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                           \\\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\\___\\\\\n\n");
                    sleep(1);
                    printf("             _______________________ , , | / '                __            __                 ' \\\ |, , ________________________\n");
                    printf("           / `-__\\\__/_____--________|]    ================== |__|}        {|__| ==================    [|________--_____\\\__/__´  \\\n");
                    printf("          /_==o;;;;;;;;__________.:/   \\\ '                                                         ' /  \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                             \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                             “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                             \\\\\___\\\\\n");
                    printf("        //___//                                                                                                               \\\\\___\\\\\n");
                    printf("       //___//                                                                                                                 \\\\\___\\\\\n\n");
                    sleep(1);
                    printf("             _______________________ , ,                                                            , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                               [|________--_____\\\__/__´ \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                  \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                             \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                             “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                             \\\\\___\\\\\n");
                    printf("        //___//                                                                                                               \\\\\___\\\\\n");
                    printf("       //___//                                                                                                                 \\\\\___\\\\\n\n");


                    }
                else if ((jogada==1) && (bot_decisao==2))//certo
                    {
                    printf("\nJogador atirou e computador defendeu!\n");
                    printf("                                                                                                                       _______________\n");
                    printf("                                                                                                                      |               |\n");
                    printf("             _______________________ , ,                                                                              |     -----     |\n");
                    printf("            / `-__\\\__/_____--________|]                                                                               | :```     ```: |\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                                 | .           . |\n");
                    printf("           ), -.(_(__) /                                                                                              | ````.   .```` |\n");
                    printf("          // (..) ), --“                                                                                               +.   `` ``   .+\n");
                    printf("         //___//                                                                                                        +.   ```   .+\n");
                    printf("        //___//                                                                                                          +-       -+\n");
                    printf("       //___//                                                                                                             \\\.` `./\n");
                    printf("                                                                                                                             \\\./\n\n");
                    sleep(1);
                    printf("                                                                                                                       _______________\n");
                    printf("                                                                                                                      |               |\n");
                    printf("             _______________________ , , | / '                __                                                      |     -----     |\n");
                    printf("           / `-__\\\__/_____--________|]    ================== |__|}                                                    | :```     ```: |\n");
                    printf("          /_==o;;;;;;;;__________.:/   \\\ '                                                                            | .           . |\n");
                    printf("           ), -.(_(__) /                                                                                              | ````.   .```` |\n");
                    printf("          // (..) ), --“                                                                                               +.   `` ``   .+\n");
                    printf("         //___//                                                                                                        +.   ```   .+\n");
                    printf("        //___//                                                                                                          +-       -+\n");
                    printf("       //___//                                                                                                             \\\.` `./\n");
                    printf("                                                                                                                             \\\./\n\n");
                    sleep(1);
                    printf("                                                                                                                       _______________\n");
                    printf("                                                                                                                      |               |\n");
                    printf("             _______________________ , ,                                                                              |     -----     |\n");
                    printf("            / `-__\\\__/_____--________|]                                                                               | :`-`\\\     ```:|\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                                 | .  -  +     . |\n");
                    printf("           ), -.(_(__) /                                                                                              | ````/   .```` |\n");
                    printf("          // (..) ), --“                                                                                               +.   `` ``   .+\n");
                    printf("         //___//                                                                                                        +.   \\\``   .+\n");
                    printf("        //___//                                                                                                          +-    \\\  -+\n");
                    printf("       //___//                                                                                                             \\\.` `./ \n");
                    printf("                                                                                                                             \\\./\n\n");
                    bala_jogador=0;
                    defesa_bot-=1;
                    }
                else if ((jogada==1) && (bot_decisao==3))
                    {
                    printf("\nJogador atirou e computador recarregou, ponto do jogador!\n");
                    bala_jogador=0;
                    bala_bot=1;
                    defesa_bot=3;
                    vida_bot-=1;
                    printf("             _______________________ , ,                                                          , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                            [|________--_____\\\__/__´  \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                               \\\:.__________;;;;;;;;o==_ \\\n");
                    printf("           ), -.(_(__) /                                                                                           \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                           “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                           \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    sleep(1);
                    printf("             _______________________ , , | / '                __                                    , ,        _______________________\n");
                    printf("           / `-__\\\__/_____--________|]    ================== |__|}                                   [| ______/________--_____\\\__/__´ \\\n");
                    printf("          /_==o;;;;;;;;__________.:/   \\\ '                                 ____        __            \\\:.__________;;;;;;;;o==   ____---\\\n");
                    printf("           ), -.(_(__) /                                                  /_  /    ___/  /_                        \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                  _/ /_   /__   __/                        “-- ,( (..) \\\\\n");
                    printf("         //___//                                                         /____/     /__/                                   \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    sleep(1);
                    printf("             _______________________ , ,                                                          , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                            [|________--_____\\\__/__´  \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                               \\\:.__________;;;;;;;;o==_ \\\n");
                    printf("           ), -.(_(__) /                                                                                          \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                          “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                          \\\\___\\\\\n");
                    printf("        //___//                                                                                                            \\\\___\\\\\n");
                    printf("       //___//                                                                                                              \\\\___\\\\\n\n");
                    }
                else if ((jogada==2) && (bot_decisao==1))
                    {
                    defesa_jogador-=1;
                    bala_bot=0;
                    printf("\nJogador defendeu e computador atirou!\n");
                    printf("    _______________ \n");
                    printf("   |               |\n");
                    printf("   |     -----     |                                                                             , , _______________________\n");
                    printf("   | :```     ```: |                                                                              [|________--_____\\\__/__´  \\\n");
                    printf("   | .           . |                                                                                \\\:.__________;;;;;;;;o==_\\\n");
                    printf("   | ````.   .```` |                                                                                             \\\ (__)_).- ,(\n");
                    printf("    +.   `` ``   .+                                                                                              “-- ,( (..) \\\\\n");
                    printf("     +.   ```   .+                                                                                                       \\\\___\\\\\n");
                    printf("      +-       -+                                                                                                         \\\\___\\\\\n");
                    printf("        \\\.` `./                                                                                                            \\\\___\\\\\n");
                    printf("          \\\./ \n\n");
                    sleep(1);
                    printf("    _______________ \n");
                    printf("   |               |\n");
                    printf("   |     -----     |                                                     __                 ' \\\ |, , ________________________\n");
                    printf("   | :```     ```: |                                                   {|__| ==================    [|________--_____\\\__/__´  \\\n");
                    printf("   | .           . |                                                                            ' /  \\\:.__________;;;;;;;;o==_\\\n");
                    printf("   | ````.   .```` |                                                                                              \\\ (__)_).- ,(\n");
                    printf("    +.   `` ``   .+                                                                                               “-- ,( (..) \\\\\n");
                    printf("     +.   ```   .+                                                                                                        \\\\___\\\\\n");
                    printf("      +-       -+                                                                                                          \\\\___\\\\\n");
                    printf("        \\\.` `./                                                                                                             \\\\___\\\\\n");
                    printf("          \\\./ \n\n");
                    sleep(1);
                    printf("    _______________ \n");
                    printf("   |               |\n");
                    printf("   |     -----     |                                                                             , , _______________________\n");
                    printf("   | :`-`\\\     ```:|                                                                              [|________--_____\\\__/__´  \\\n");
                    printf("   | .  -  +     . |                                                                               \\\:.__________;;;;;;;;o==_ \\\n");
                    printf("   | ````/   .```` |                                                                                             \\\ (__)_).- ,(\n");
                    printf("    +.   `` ``   .+                                                                                              “-- ,( (..) \\\\\n");
                    printf("     +.   \``   .+                                                                                                        \\\\___\\\\\n");
                    printf("      +-    \  -+                                                                                                          \\\\___\\\\\n");
                    printf("        \\\.` `./                                                                                                            \\\\___\\\\\n");
                    printf("          \\\./ \n\n");
                    }
                else if ((jogada==2) && (bot_decisao==2))
                    {
                    defesa_jogador-=1;
                    defesa_bot-=1;
                    printf("\nJogador defendeu e computador defendeu!\n");
                    printf("    _______________                                                                                                _______________ \n");
                    printf("   |               |                                                                                              |               |\n");
                    printf("   |     -----     |                                                                                              |     -----     |\n");
                    printf("   | :```     ```: |                                                                                              | :```     ```: |\n");
                    printf("   | .           . |                                                                                              | .           . |\n");
                    printf("   | ````.   .```` |                                                                                              | ````.   .```` |\n");
                    printf("    +.   `` ``   .+                                                                                                +.   `` ``   .+\n");
                    printf("     +.   ```   .+                                                                                                  +.   ```   .+\n");
                    printf("      +-       -+                                                                                                    +-       -+\n");
                    printf("        \\\.` `./                                                                                                        \\\.` `./\n");
                    printf("          \\\./                                                                                                            \\\./\n\n");
                    sleep(1);
                    }
                else if ((jogada==2) && (bot_decisao==3))
                    {
                    printf("\nJogador defendeu e computador recarregou!\n");
                    defesa_jogador-=1;
                    defesa_bot=3;
                    bala_bot=1;
                    printf("    _______________ \n");
                    printf("   |               |\n");
                    printf("   |     -----     |                                                                             , , _______________________\n");
                    printf("   | :```     ```: |                                                                              [|________--_____\\\__/__´  \\\n");
                    printf("   | .           . |                                                                                \\\:.__________;;;;;;;;o==_\\\n");
                    printf("   | ````.   .```` |                                                                                              \ (__)_).- ,(\n");
                    printf("    +.   `` ``   .+                                                                                              “-- ,( (..) \\\\\n");
                    printf("     +.   ```   .+                                                                                                       \\\\___\\\\\n");
                    printf("      +-       -+                                                                                                         \\\\___\\\\\n");
                    printf("        \\\.` `./                                                                                                            \\\\___\\\\\n");
                    printf("          \\\./ \n\n");
                    sleep(1);
                    printf("    _______________ \n");
                    printf("   |               |\n");
                    printf("   |     -----     |                                                                              , ,        _______________________\n");
                    printf("   | :```     ```: |                                                                               [| ______/________--_____\\\__/__´ \\\n");
                    printf("   | .           . |                                                     ____        __             \\\:.__________;;;;;;;;o==  ____---\\\n");
                    printf("   | ````.   .```` |                                                    /_  /    ___/  /_                        \\\ (__)_).- ,(\n");
                    printf("    +.   `` ``   .+                                                     _/ /_   /__   __/                        “-- ,( (..) \\\\\n");
                    printf("     +.   ```   .+                                                     /____/     /__/                                   \\\\___\\\\\n");
                    printf("      +-       -+                                                                                                         \\\\___\\\\\n");
                    printf("        \\\.` `./                                                                                                            \\\\___\\\\\n");
                    printf("          \\\./ \n\n");
                    sleep(1);
                    printf("    _______________ \n");
                    printf("   |               |\n");
                    printf("   |     -----     |                                                                             , , _______________________ \n");
                    printf("   | :```     ```: |                                                                              [|________--_____\\\__/__´  \\\n");
                    printf("   | .           . |                                                                                \\\:.__________;;;;;;;;o==_\\\n");
                    printf("   | ````.   .```` |                                                                                             \\\ (__)_).- ,(\n");
                    printf("    +.   `` ``   .+                                                                                              “-- ,( (..) \\\\\n");
                    printf("     +.   ```   .+                                                                                                       \\\\___\\\\\n");
                    printf("      +-       -+                                                                                                         \\\\___\\\\\n");
                    printf("        \\\.` `./                                                                                                            \\\\___\\\\\n");
                    printf("          \\\./ \n");
                    }
                else if ((jogada==3) && (bot_decisao==1))
                    {
                    printf("\nJogador recarregou e computador atirou!, ponto do bot.\n");
                    printf("             _______________________ , ,                                                           , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                             [|________--_____\\\__/__´  \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                 \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                           \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                           “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                           \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    sleep(1);
                    printf("      _______________________        , ,                                   __                 ' \\\ |, , ________________________\n");
                    printf("     / `-__\\\___/____--_______\\\______ |]                                  {|__| ==================    [|________--_____\\\__/__´  \\\n");
                    printf("    /---___  ==o;;;;;;;;__________.:/                __      ____                                 ' /  \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                         ___/  /_   /_  /                                                   \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                        /__   __/   _/ /_                                                  “-- ,( (..) \\\\\n");
                    printf("         //___//                                  /__/     /____/                                                          \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    sleep(1);
                    printf("             _______________________ , ,                                                           , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                             [|________--_____\\\__/__´  \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                 \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                           \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                           “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                           \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    bala_jogador=1;
                    bala_bot=0;
                    defesa_jogador=3;
                    vida-=1;
                    }
                else if ((jogada==3) && (bot_decisao==2))
                    {
                    bala_jogador=1;
                    defesa_jogador=3;
                    defesa_bot-=1;
                    printf("\nJogador recarregou e computador defendeu!\n");
                    printf("                                                                                                                       _______________\n");
                    printf("                                                                                                                      |               |\n");
                    printf("             _______________________ , ,                                                                              |     -----     |\n");
                    printf("            / `-__\\\__/_____--________|]                                                                               | :```     ```: |\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                                 | .           . |\n");
                    printf("           ), -.(_(__) /                                                                                              | ````.   .```` |\n");
                    printf("          // (..) ), --“                                                                                               +.   `` ``   .+\n");
                    printf("         //___//                                                                                                        +.   ```   .+\n");
                    printf("        //___//                                                                                                          +-       -+\n");
                    printf("       //___//                                                                                                             \\\.` `./\n");
                    printf("                                                                                                                             \\\./\n\n");
                    sleep(1);
                    printf("                                                                                                                       _______________\n");
                    printf("                                                                                                                      |               |\n");
                    printf("      _______________________        , ,                                                                              |     -----     |\n");
                    printf("     / `-__\\\__/____--_______\\\______ |]                                                                                | :```     ```: |\n");
                    printf("    /---___  ==o;;;;;;;;__________.:/                __      ____                                                     | .           . |\n");
                    printf("           ), -.(_(__) /                         ___/  /_   /_  /                                                     | ````.   .```` |\n");
                    printf("          // (..) ), --“                        /__   __/   _/ /_                                                      +.   `` ``   .+\n");
                    printf("         //___//                                  /__/     /____/                                                       +.   ```   .+\n");
                    printf("        //___//                                                                                                          +-       -+\n");
                    printf("       //___//                                                                                                             \\\.` `./\n");
                    printf("                                                                                                                             \\\./\n\n");
                    sleep(1);
                    printf("                                                                                                                       _______________\n");
                    printf("                                                                                                                      |               |\n");
                    printf("             _______________________ , ,                                                                              |     -----     |\n");
                    printf("            / `-__\\\__/_____--________|]                                                                               | :```     ```: |\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                                 | .           . |\n");
                    printf("           ), -.(_(__) /                                                                                              | ````.   .```` |\n");
                    printf("          // (..) ), --“                                                                                               +.   `` ``   .+\n");
                    printf("         //___//                                                                                                        +.   ```   .+\n");
                    printf("        //___//                                                                                                          +-       -+ \n");
                    printf("       //___//                                                                                                             \\\.` `./\n");
                    printf("                                                                                                                             \\\./\n\n");
                    }
                else if ((jogada==3) && (bot_decisao==3))
                    {
                    defesa_jogador=3;
                    defesa_bot=3;
                    printf("\nJogador recarregou e computador recarregou!\n");
                    printf("             _______________________ , ,                                                          , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                            [|________--_____\\\__/__´  \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                           \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                           “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                           \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    sleep(1);
                    printf("      _______________________        , ,                                                        , ,        _______________________\n");
                    printf("     / `-__\\\__/____--_______\\\______ |]                                                           [| ______/________--_____\\\__/__´ \\\n");
                    printf("    /---___  ==o;;;;;;;;__________.:/                __      ____      ____        __             \\\:.__________;;;;;;;;o==  ____---\\\n");
                    printf("           ), -.(_(__) /                         ___/  /_   /_  /     /_  /    ___/  /_                        \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                        /__   __/   _/ /_     _/ /_   /__   __/                        “-- ,( (..) \\\\\n");
                    printf("         //___//                                  /__/     /____/    /____/     /__/                                   \\\\___\\\\\n");
                    printf("        //___//                                                                                                         \\\\___\\\\\n");
                    printf("       //___//                                                                                                           \\\\___\\\\\n\n");
                    sleep(1);
                    printf("             _______________________ , ,                                                          , , _______________________\n");
                    printf("            / `-__\\\__/_____--________|]                                                            [|________--_____\\\__/__´  \\\n");
                    printf("           /_==o;;;;;;;;__________.:/                                                                \\\:.__________;;;;;;;;o==_\\\n");
                    printf("           ), -.(_(__) /                                                                                           \\\ (__)_).- ,(\n");
                    printf("          // (..) ), --“                                                                                           “-- ,( (..) \\\\\n");
                    printf("         //___//                                                                                                           \\\\___\\\\\n");
                    printf("        //___//                                                                                                             \\\\___\\\\\n");
                    printf("       //___//                                                                                                               \\\\___\\\\\n\n");
                    bala_bot=1;
                    bala_jogador=1;
                    }
                //Verificação das vidas.
                if ((vida==0)&&(vida_bot==0))
                    {
                    printf("\nJogador e computador com vida esgotada, empate!.\n");
                    fim=1;
                    }
                else if (vida==0)
                    {
                    SetConsoleTextAttribute(hConsole, 4);
                    printf("\nVida esgotada!! jogador perdeu.");
                    losses++;
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                    fim=1;

                    }
                else if(vida_bot==0)
                    {
                    SetConsoleTextAttribute(hConsole, 2);
                    printf("\nVida do bot esgotada!! jogador ganhou.");
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                    wins++;
                    fim=1;
                    }
            //Fim
            getch();
            system("cls");
            printf("Jogador:");
            for (hp=0; hp<vida;hp++)
                {
                SetConsoleTextAttribute(hConsole, 4);
                printf(" \03");
                }
            SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("\t\t\t\t\tBot");
            for (hp=0; hp<vida_bot;hp++)
                {
                SetConsoleTextAttribute(hConsole, 4);
                printf(" \03");
                }
            printf("\n");
            SetConsoleTextAttribute(hConsole, saved_attributes);
            }while(fim==0);
            getch();
            printf("\n\n[1] Jogar novamente\n[2] Voltar ao menu\n[3] Encerrar programa\n");
            scanf("%i", &pos_jogo);
            fflush(stdin);
            //Opções pós-jogo
            switch(pos_jogo)
            {
                case 1: controle=3;
                break;

                case 2: menu=1;
                controle=0;
                break;

                case 3: menu=0;
                break;

                default: printf("Opção inválida\a");
                sleep(2);
                printf(" retornando ao menu...");
                sleep(2);
                break;
            }

            }while(controle==3);
            break;
    case 4: menu=0; // Exit
            break;
    default: printf("Opção inválida\a");
             menu=1;
             sleep(3);
}
}while(menu==1);
//Créditos
//Trocar cor de um trecho.
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;
GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
saved_attributes = consoleInfo.wAttributes;

printf("\n\nObrigado por jogar, encerrando programa...\n\n");
printf("\nFeito por: ");
sleep(1);
SetConsoleTextAttribute(hConsole, 1);
printf("Lucas Tolotto ");
SetConsoleTextAttribute(hConsole, saved_attributes);
printf("e ");
SetConsoleTextAttribute(hConsole, 4);
printf("Pedro Todineyb");
SetConsoleTextAttribute(hConsole, saved_attributes);
printf(".\n\n");


sleep(2);
system("pause");
return 0;
}
