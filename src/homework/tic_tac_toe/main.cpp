#include <iostream>
#include "tic_tac_toe.h"
using namespace std;


int main() 
{
	TicTacToe game;
	string player;
	string winner;
	int position;
	cout << "X or O?" << endl;
	cin >> player;
	game.start_game(player);
	while(!game.game_over()){
		game.display_board();
		cout << "Player " << game.get_player() << ": Choose a location on the board: 1-9. Type 0 to Quit. ";
		cin >> position;
		game.mark_board(position);
	}
	game.display_board();
	char playAgain;
	cout << "Play again? Y or N: ";
	cin >> playAgain;
	if( playAgain == 'Y')
	{
		return main();
	}
	return 0;
}

