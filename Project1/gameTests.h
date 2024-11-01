#include <assert.h>
#include <string.h>
#include "game.c"

void test_rps();

void test_rps() {
    char* result = rps_game("Rock", "Scissors");
    assert(strcmp(result, "Player1") == 0);
}
