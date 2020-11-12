#include <string>
#include <iostream>
#include "tic_tac_toe.h"
bool test_config()
{
    return true;
}

TicTacToe::TicTacToe(int size): pegs(size * size, " "), player() // constructor
{

}
bool TicTacToe::game_over(){
    
    if (check_column_win())
    {
        std::cout << "Theres a column winner! Congrats " << get_winner() << "\n";
        return true;
    }
    if (check_row_win())
    {
        std::cout << "Theres a row winner! Congrats " << get_winner() <<  "\n";
        return true;
    }
    if (check_diagonal_win())
    {
        std::cout << "Theres a diagonal winner! Congrats " << get_winner() << "\n";
        return true;
    }
    if (check_board_full())
    {
        std::cout << "There's a tie!" << "\n";
        return true;
    }

    return false;
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
void TicTacToe::set_winner(std::string w){
    winner = w;
}
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}
std::string TicTacToe::get_player() const
{
    return player;
}
void TicTacToe::set_next_player(){

    if (player == "X")
    {
        player = "O";
    }
    else if (player == "0")
    {
        return;
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full() const{
    for (size_t i = 0; i <pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}
void TicTacToe::clear_board(){

    for (size_t i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";

    }
}
std::string TicTacToe::get_winner() const
{
    return winner;
}