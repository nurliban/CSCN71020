#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* playRockPaperScissors(char player1Choice[], char player2Choice[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(playRockPaperScissorsFuntionality1)
		{
			char* result = playRockPaperScissors("rock", "scissors"); 
			Assert::AreEqual(result, "Player1"); 
		}
		 
		TEST_METHOD(playRockPaperScissorsFuntionality2)
		{
			char* result = playRockPaperScissors("paper", "scissors"); 
			Assert::AreEqual(result, "Player2"); 
		}

		TEST_METHOD(playRockPaperScissorsFuntionality3)
		{
			char* result;

			result = playRockPaperScissors("rock", "rock");

			Assert::IsTrue(strcmp(result, "Draw") == 0);
		}

		TEST_METHOD(playRockPaperScissorsInvalidChoice1)
		{
			char* result;

			result = playRockPaperScissors("InvalidChoice", "scissors");

			Assert::IsTrue(strcmp(result, "Invalid") == 0);
		}

		TEST_METHOD(playRockPaperScissorsInvalidChoice2)
		{
			char* result;

			result = playRockPaperScissors("paper", "InvalidChoice");

			Assert::IsTrue(strcmp(result, "Invalid") == 0);
		}
	};
}