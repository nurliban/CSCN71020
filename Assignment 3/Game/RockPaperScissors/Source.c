#include <stdio.h>
#include "main.h"
#include <string.h>

char* playRockPaperScissors(char player1Choice[], char player2Choice[]) {

    if (
        strcmp(player1Choice, "rock") != 0 && 
        strcmp(player1Choice, "paper") != 0 &&
        strcmp(player1Choice, "scissors") != 0
        ) {
        return "Invalid";
    }

    if (
        strcmp(player2Choice, "rock") != 0 &&
        strcmp(player2Choice, "paper") != 0 &&
        strcmp(player2Choice, "scissors") != 0
        ) {
        return "Invalid";
    }

    // Determine the winner
    if (strcmp(player1Choice, player2Choice) == 0) {
        return "Draw";
    }

    if (
        (strcmp(player1Choice, "rock") == 0 && strcmp(player2Choice, "scissors") == 0) ||
        (strcmp(player1Choice, "scissors") == 0 && strcmp(player2Choice, "paper") == 0) ||
        (strcmp(player1Choice, "paper") == 0 && strcmp(player2Choice, "rock") == 0)
        ) {
        return "Player1"; 
    }
    else if (
        (strcmp(player1Choice, "scissors") == 0 && strcmp(player2Choice, "rock") == 0) ||
        (strcmp(player1Choice, "paper") == 0 && strcmp(player2Choice, "scissors") == 0) ||
        (strcmp(player1Choice, "rock") == 0 && strcmp(player2Choice, "paper") == 0)
        ) {
        return "Player2"; 
    }
    else {
        printf("Invalid choice\n"); 
    }
}