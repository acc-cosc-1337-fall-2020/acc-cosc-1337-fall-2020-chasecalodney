#ifndef  MANAGER_H
#define MANAGER_H
#include <vector>
#include <string>
#include "tic_tac_toe.h"
#include <iostream>
bool test_config();

class TicTacToeManager
{
    public:
        TicTacToeManager();
        void save_game(const TicTacToe * b);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int& t);
    private:
        std::vector<TicTacToe *> games;
        //create vector of tictactoe named games
        void update_winner_count(std::string winner){
            if (winner == "X"){
                x_win += 1;
            }
            else if (winner == "O"){
                o_win += 1;
            }
            else{
               ties += 1;
            }
        }
        int x_win;
        //initialize to 0
        int o_win;
        //initialize to 0
        int ties;
        //initialize to 0
	
};
#endif