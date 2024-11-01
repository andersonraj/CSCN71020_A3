// game.c
#include <string.h>

char* rps_game(const char* player1, const char* player2) {
    // Check if both inputs are valid moves
    if ((strcmp(player1, "Rock") == 0 || strcmp(player1, "Paper") == 0 || strcmp(player1, "Scissors") == 0) &&
        (strcmp(player2, "Rock") == 0 || strcmp(player2, "Paper") == 0 || strcmp(player2, "Scissors") == 0)) {

        // Handle draw cases
        if (strcmp(player1, player2) == 0) {
            return "Draw";
        }
        // Handle cases where Player1 wins
        else if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
            (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
            (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
            return "Player1";
        }
        // Otherwise, Player2 wins
        else {
            return "Player2";
        }
    }
    // Invalid input if either entry is not "Rock," "Paper," or "Scissors"
    return "Invalid";
}
