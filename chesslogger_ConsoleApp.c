#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

int type_pgn(FILE *logger){
    bool to_play = 0;
    int turn = 1;
    char *move = malloc(10);
    fprintf(logger, "%d. ", turn);
        while(1){
        if(GetAsyncKeyState('U') & 0x8000){
            if(to_play){
                fprintf(logger, "1-0");
                return 1;
            }
            else{
                fprintf(logger, "0-1");
                return 1;
            }
        }
        if(GetAsyncKeyState('I') & 0x8000){
            fprintf(logger, "1/2-1/2");
            return 1;
        }
        if(GetAsyncKeyState('T') & 0x0001){
            if(strlen(move) != 0){
                fprintf(logger, "%s ", move);
                strcpy(move, "");
                if(to_play){
                    printf("\n");
                    turn++;
                    to_play = 0;
                    fprintf(logger, "%d. ", turn);
                }
                else{
                    printf("\t");
                    to_play = 1;
                }
            }
        }
        if(GetAsyncKeyState('Y') & 0x0001){
            if(strlen(move) > 0){
                move[strlen(move) - 1] = '\0';
                if(to_play){
                    printf("\n\t%s", move);
                }
                else{
                    printf("\n%s", move);
                }
            }
        }
        if(GetAsyncKeyState('S') & 0x0001){
            fprintf(logger, "O-O ");
            if(to_play){
                printf("O-O\n");
                turn++;
                to_play = 0;
                fprintf(logger, "%d. ", turn);
            }
            else{
                printf("O-O\t");
                to_play = 1;
            }
        }
        if(GetAsyncKeyState('L') & 0x0001){
            fprintf(logger, "O-O-O ");
            if(to_play){
                printf("O-O-O\n");
                turn++;
                to_play = 0;
                fprintf(logger, "%d. ", turn);
            }
            else{
                printf("O-O-O\t");
                to_play = 1;
            }
        }
        if(GetAsyncKeyState('K') & 0x0001){
            printf("K");
            strcat(move, "K");
        }
        if(GetAsyncKeyState('Q') & 0x0001){
            printf("Q");
            strcat(move, "Q");
        }
        if(GetAsyncKeyState('R') & 0x0001){
            printf("R");
            strcat(move, "R");
        }
        if(GetAsyncKeyState('J') & 0x0001){
            printf("B");
            strcat(move, "B");
        }
        if(GetAsyncKeyState('N') & 0x0001){
            printf("N");
            strcat(move, "N");
        }
        if(GetAsyncKeyState('X') & 0x0001){
            printf("x");
            strcat(move, "x");
        }
        if(GetAsyncKeyState(VK_ADD) & 0x0001){
            printf("+");
            strcat(move, "+");
        }
        if(GetAsyncKeyState('A') & 0x0001){
            printf("a");
            strcat(move, "a");
        }
        if(GetAsyncKeyState('B') & 0x0001){
            printf("b");
            strcat(move, "b");
        }
        if(GetAsyncKeyState('C') & 0x0001){
            printf("c");
            strcat(move, "c");
        }
        if(GetAsyncKeyState('D') & 0x0001){
            printf("d");
            strcat(move, "d");
        }
        if(GetAsyncKeyState('E') & 0x0001){
            printf("e");
            strcat(move, "e");
        }
        if(GetAsyncKeyState('F') & 0x0001){
            printf("f");
            strcat(move, "f");
        }
        if(GetAsyncKeyState('G') & 0x0001){
            printf("g");
            strcat(move, "g");
        }
        if(GetAsyncKeyState('H') & 0x0001){
            printf("h");
            strcat(move, "h");
        }
        if(GetAsyncKeyState(VK_NUMPAD1) & 0x0001){
            printf("1");
            strcat(move, "1");
        }
        if(GetAsyncKeyState(VK_NUMPAD2) & 0x0001){
            printf("2");
            strcat(move, "2");
        }
        if(GetAsyncKeyState(VK_NUMPAD3) & 0x0001){
            printf("3");
            strcat(move, "3");
        }
        if(GetAsyncKeyState(VK_NUMPAD4) & 0x0001){
            printf("4");
            strcat(move, "4");
        }
        if(GetAsyncKeyState(VK_NUMPAD5) & 0x0001){
            printf("5");
            strcat(move, "5");
        }
        if(GetAsyncKeyState(VK_NUMPAD6) & 0x0001){
            printf("6");
            strcat(move, "6");
        }
        if(GetAsyncKeyState(VK_NUMPAD7) & 0x0001){
            printf("7");
            strcat(move, "7");
        }
        if(GetAsyncKeyState(VK_NUMPAD8) & 0x0001){
            printf("8");
            strcat(move, "8");
        }
        Sleep(50);
    }
    free(move);
}

int main(){

    FILE *logger;
    char filename[12] = "log.pgn";
    int i = 1;
    char ans;

    printf("do you wanna create (m) a new file or overwrite (o) an existing one\n");
    scanf("%c", &ans);
    if(ans == 'm'){
        //avoids overwrite if the file already exists
        system("cls");
        while(fopen(filename, "r")){
            logger = fopen(filename, "w");
            i++;
            sprintf(filename, "log %d.pgn", i);
        }
        logger = fopen(filename, "w");
        type_pgn(logger);
    }
    else if(ans == 'o'){
        int index;
        printf("please enter the index of log\n");
        scanf("%d", &index);
        sprintf(filename, "log %d.pgn" , index);
        //index == 1 means first file created
        if(index == 1 && fopen("log.pgn", "r")){
            logger = fopen("log.pgn", "w");
            system("cls");
            type_pgn(logger);
        }
        else if(fopen(filename, "r")){
            logger = fopen(filename, "w");
            system("cls");
            type_pgn(logger);
        }
        else{
            printf("couldn't find the file with the given index");
        }
    }
    else{
        printf("invalid response");
        return 1;
    }

    return 0;
}