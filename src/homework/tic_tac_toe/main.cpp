#include <iostream>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_manager.h"
using namespace std;

TicTacToeManager manager;
int main() 
{
	while(true){
		TicTacToe3 * game = new TicTacToe3();
		string player;
		string winner;
		int position;
		cout << "X or O?" << endl;
		cin >> player;
		game->start_game(player);
		while(!game->game_over()){
			std::cout << *game << endl;
			cout << "Player " << game->get_player() << ": Choose a location on the board: 1-9. Type 0 to Quit. ";
			cin >> position;
			game->mark_board(position);
		}
		std::cout << *game << endl;
		manager.save_game(game);
		char playAgain;
		cout << "Play again? Y or N: ";
		cin >> playAgain;
		if( playAgain != 'Y')
		{
			break;
		}
	}
	int o; int x; int t;
	manager.get_winner_total(o,x,t);
	std::cout << "O won " << o << " games." << endl;
	std::cout << "X won " << x << " games." << endl;
	std::cout << "There were " << t << " ties." << endl;
	std::cout << manager << endl;
	return 0;
}

