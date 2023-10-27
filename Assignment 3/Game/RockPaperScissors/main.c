#include <stdio.h>
#include <string.h>
#include "main.h"

int main() {
    char player1Choice[] = "scissors";
    char player2Choice[] = "rock";

    char* result = playRockPaperScissors(player1Choice, player2Choice);  
    printf("Outcome: %s\n", result);

    return 0;
}