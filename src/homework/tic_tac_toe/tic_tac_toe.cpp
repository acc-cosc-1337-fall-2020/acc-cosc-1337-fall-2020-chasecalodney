#include <string>
#include <iostream>
#include "tic_tac_toe.h"
bool test_config()
{
    return true;
}

TicTacToe::TicTacToe(): pegs(9, " "), player() // constructor
{

}
bool TicTacToe::game_over(){
    return check_board_full();
}
void TicTacToe::start_game(std::string first_player){
    if (first_player == "X")
    {
        player = "X";
    }
    else if (first_player == "O")
    {
        player = "O";
    }
}
void TicTacToe::mark_board(int position){
        pegs[position-1] = player;
        set_next_player();
}
std::string TicTacToe::get_player() const{
    return player;

}
void TicTacToe::display_board() const{
    for (int i = 0; i < pegs.size(); i++)
    {
        if (i == 2 or i == 5 or i == 8){
            std::cout << "|" << pegs[i] << "|" << "\n";

        }
        else {
            std::cout << "|" << pegs[i];

        }

    }
}
void TicTacToe::set_next_player(){

    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full() const{
    for (int i = 0; i <pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}
void TicTacToe::clear_board(){

    for (int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";

    }
}