#include <stdio.h> //Biblioteca padrão de entrada/saída, printf scanf.
#include <stdlib.h> //emula o prompt de comando, cls pause.
#include <locale.h> //acentuação / linguagem

int main()
{
setlocale(LC_ALL, "portuguese");
int menu=1, jogo, pos_jogo, controle;
//Animação inicial
    /*
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
   printf("PRESSIONE QUALQUER BOTÃO PARA COMEÇAR\n");
   getch();
   */

//Menu e jogos
do
{
//título
   system ("cls");
   printf("\n=======================================================================\n\n");
   printf("     _______ _______ __    __   _________ ______    _______ _________\n");
   printf("    / _____// ___  / \\\ \\\  / /  /___  ___// ____ \\\  / ___  //___  ___/\n");
   printf("   / /___  / /  / /   \\\ \\\/ /      / /   / /__/  / / /  / /    / /\n");
   printf("  / ____/ / /  / /    / /\\\ \\\     / /   / __  __/ / /  / /    / /\n");
   printf(" / /     / /__/ /    / /  \\\ \\\   / /   / /  \\\ \\\  / /__/ /    / /\n");
   printf("/_/     /______/    /_/    \\\_\\\ /_/   /_/    \\\_|/______/    /_/\n\n");
   printf("     ________ _________ __       _________ __ _______  ___     __\n");
   printf("    /  _____//___  ___//  \\\     /___  ___// // ___  / /   |   / /\n");
   printf("   /  /____     / /   / /\\\ \\\       / /   / // /  / / / /| |  / /\n");
   printf("  /____   /    / /   /  __  \\\     / /   / // /  / / / / | | / /\n");
   printf(" _____/  /    / /   /  /  \\\  \\\   / /   / // /__/ / / /  | |/ /\n");
   printf("/_______/    /_/   /__/    \\\__\\\ /_/   /_//______/ /_/   |___/\n\n");
   printf("=======================================================================\n\n");
//menu
printf("Bem-vindo selecione um dos minijogos.\n[1] Jokenpo\n[2] Blackjack (21)\n[3] OO7\n[4] Encerrar programa.\n");
scanf("%i", &jogo);
fflush(stdin);


switch(jogo)
{

    case 1: // Jokenpo
            do
            {
            system("cls");
            printf("Jokenpo\n");
            //jogo


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
            printf("Blackjack\n");
            //jogo


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
            printf("007\n");
            //jogo


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


    case 4: menu=0;                                                   // Exit
            break;


    default: printf("Opção inválida\a");
             menu=1;
             sleep(3);

}

}while(menu==1);


printf("\n\nObrigado por jogar, encerrando programa...\n");
sleep(2);
printf("\nFeito por: Lucas Tolotto e Pedro Todineyb.\n\n");
sleep(2);
system("pause");
return 0;
}
