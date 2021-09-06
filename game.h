#ifndef GAME_H
#define GAME_H

#include <stdio.h>  
#include <time.h>   
#include <stdlib.h> 
void intro();
void gameChoice();
void greet();
int generateRandomNumber(int);
void gameBoard();
void gameBuildForOnePlayer();
int checkWinner();
void gameBuildForTwoPlayers();
void thanks();

#endif 