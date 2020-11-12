#include "tic_tac_toe_manager.h"

TicTacToeManager::TicTacToeManager():
    games(),
    x_win(0),
    o_win(0),
    ties(0)
    {

    }
void TicTacToeManager::save_game(const TicTacToe b){
    games.push_back(b);
    update_winner_count(b.get_winner());
    
}
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager){
    for (TicTacToe const &g: manager.games){
        out << g << std::endl;
    }
    return out;

}
void TicTacToeManager::get_winner_total(int& O, int& X, int& T){
    O = o_win;
    X = x_win;
    T = ties;
}