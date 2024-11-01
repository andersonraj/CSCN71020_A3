
#include "pch.h"
#include "CppUnitTest.h"  // Include the MSTest library
#include "../Project1/game.c""

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameUnitTests
{
    TEST_CLASS(GameTests)
    {
    public:

        TEST_METHOD(Test_RockVsScissors) {
            char* result = rps_game("Rock", "Scissors");
            Assert::AreEqual("Player1", result);  // Player1 should win
        }

        TEST_METHOD(Test_ScissorsVsRock) {
            char* result = rps_game("Scissors", "Rock");
            Assert::AreEqual("Player2", result);  // Player2 should win
        }

        TEST_METHOD(Test_PaperVsRock) {
            char* result = rps_game("Paper", "Rock");
            Assert::AreEqual("Player1", result);  // Player1 should win
        }

        TEST_METHOD(Test_RockVsPaper) {
            char* result = rps_game("Rock", "Paper");
            Assert::AreEqual("Player2", result);  // Player2 should win
        }

        TEST_METHOD(Test_PaperVsScissors) {
            char* result = rps_game("Paper", "Scissors");
            Assert::AreEqual("Player2", result);  // Player2 should win
        }

        TEST_METHOD(Test_ScissorsVsPaper) {
            char* result = rps_game("Scissors", "Paper");
            Assert::AreEqual("Player1", result);  // Player1 should win
        }

        TEST_METHOD(Test_DrawCases) {
            Assert::AreEqual("Draw", rps_game("Rock", "Rock"));
            Assert::AreEqual("Draw", rps_game("Paper", "Paper"));
            Assert::AreEqual("Draw", rps_game("Scissors", "Scissors"));
        }

        TEST_METHOD(Test_CaseSensitivity) {
            char* result = rps_game("rock", "Scissors");
            Assert::AreEqual("Invalid", result);  // Expect Invalid for lowercase input

            result = rps_game("Rock", "scissors");
            Assert::AreEqual("Invalid", result);  // Expect Invalid for lowercase input
        }
    };
}
