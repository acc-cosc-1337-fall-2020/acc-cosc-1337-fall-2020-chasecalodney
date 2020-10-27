#include <iostream>
#include "tic_tac_toe.h"
using namespace std;


int main() 
{
	TicTacToe game;
	string player;
	int position;
	cout << "X or O?" << endl;
	cin >> player;
	game.start_game(player);
	while(!game.game_over()){
		game.display_board();
		cout << "Player " << game.get_player() << ": Choose a location on the board: 1-9:";
		cin >> position;
		game.mark_board(position);
	}
	game.display_board();
	return 0;
}

