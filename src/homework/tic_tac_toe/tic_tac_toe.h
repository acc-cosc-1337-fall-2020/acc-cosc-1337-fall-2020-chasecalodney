#ifndef  TICTACTOE_H
#define TICTACTOE_H
#include <vector>
#include <string>

bool test_config();

class TicTacToe
{
    public:
        TicTacToe(int size);
        bool game_over();
        size_t get_pegs_size() const{
            return pegs.size();
        }
        std::string get_peg(int i) const{
            return pegs[i];
        }
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        std::string get_winner() const;
    protected:
        void set_next_player();
        bool check_board_full() const;
        void clear_board();
        virtual bool check_column_win(){
            return false;
        }
        virtual bool check_row_win(){
            return false;
        }
        virtual bool check_diagonal_win(){
            return false;
        }
        void set_winner(std::string w);
        std::vector<std::string> pegs{9, " "}; 
        std::string player;
        std::string winner;
	
};
#endif
