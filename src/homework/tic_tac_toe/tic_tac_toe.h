#ifndef  TICTACTOE_H
#define TICTACTOE_H
#include <vector>
#include <string>

bool test_config();

class TicTacToe
{
    public:
        TicTacToe();
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        void display_board() const;
        void set_next_player();
        bool check_board_full() const;
        void clear_board();
    private:
    
        std::vector<std::string> pegs; 
        std::string player;
	
};
#endif
