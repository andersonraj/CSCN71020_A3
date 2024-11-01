#pragma once
#include <assert.h>
#include <string.h>
#include "game.c"

// Master function to run all test cases
void test_rps() {
    test_rock_vs_scissors();
    test_scissors_vs_rock();
    test_paper_vs_rock();
    test_rock_vs_paper();
    test_paper_vs_scissors();
    test_scissors_vs_paper();
    test_draw_cases();
    test_case_sensitivity();
}

// Individual Test Functions for each scenario
void test_rock_vs_scissors() {
    char* result = rps_game("Rock", "Scissors");
    assert(strcmp(result, "Player1") == 0);  // Player1 should win
}

void test_scissors_vs_rock() {
    char* result = rps_game("Scissors", "Rock");
    assert(strcmp(result, "Player2") == 0);  // Player2 should win
}

void test_paper_vs_rock() {
    char* result = rps_game("Paper", "Rock");
    assert(strcmp(result, "Player1") == 0);  // Player1 should win
}

void test_rock_vs_paper() {
    char* result = rps_game("Rock", "Paper");
    assert(strcmp(result, "Player2") == 0);  // Player2 should win
}

void test_paper_vs_scissors() {
    char* result = rps_game("Paper", "Scissors");
    assert(strcmp(result, "Player2") == 0);  // Player2 should win
}

void test_scissors_vs_paper() {
    char* result = rps_game("Scissors", "Paper");
    assert(strcmp(result, "Player1") == 0);  // Player1 should win
}

void test_draw_cases() {
    assert(strcmp(rps_game("Rock", "Rock"), "Draw") == 0);  // Expect Draw
    assert(strcmp(rps_game("Paper", "Paper"), "Draw") == 0);  // Expect Draw
    assert(strcmp(rps_game("Scissors", "Scissors"), "Draw") == 0);  // Expect Draw
}

void test_case_sensitivity() {
    char* result = rps_game("rock", "Scissors");
    assert(strcmp(result, "Invalid") == 0);  // Expect Invalid for lowercase input

    result = rps_game("Rock", "scissors");
    assert(strcmp(result, "Invalid") == 0);  // Expect Invalid for lowercase input
}
