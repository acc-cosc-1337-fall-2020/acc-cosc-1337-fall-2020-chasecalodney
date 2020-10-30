#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test game over")
{
	TicTacToe game;
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test player set to X")
{
	TicTacToe game;
	game.start_game(X);
	REQUIRE(game.get_player() == 'X');

}
TEST_CASE("Test player set to O")
{
	TicTacToe game;
	game.start_game(O);
	REQUIRE(game.get_player() == 'O');

}
TEST_CASE("Test win by first column")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(1); // x
	game.mark_board(2); // o
	game.mark_board(4); // x
	game.mark_board(3); // o
	game.mark_board(7); // x
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by second column")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(2); // x
	game.mark_board(1); // o
	game.mark_board(5); // x
	game.mark_board(3); // o
	game.mark_board(8); // x
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by third column")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(3); // x
	game.mark_board(2); // o
	game.mark_board(6); // x
	game.mark_board(4); // o
	game.mark_board(9); // x
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(1); // x
	game.mark_board(4); // o
	game.mark_board(2); // x
	game.mark_board(5); // o
	game.mark_board(3); // x
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(4); // x
	game.mark_board(1); // o
	game.mark_board(5); // x
	game.mark_board(2); // o
	game.mark_board(6); // x
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(7); // x
	game.mark_board(1); // o
	game.mark_board(8); // x
	game.mark_board(2); // o
	game.mark_board(9); // x 
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win diagonally from top left")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(1); // x
	game.mark_board(2); // o
	game.mark_board(5); // x
	game.mark_board(3); // o
	game.mark_board(9); // x
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe game;
	game.start_game(X);
	game.mark_board(7); // x
	game.mark_board(1); // o
	game.mark_board(5); // x
	game.mark_board(2); // o
	game.mark_board(3); // x
	REQUIRE(game.game_over() == true);
}



