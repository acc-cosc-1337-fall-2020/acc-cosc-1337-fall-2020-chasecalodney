#ifndef  TICTACTOE3_H
#define TICTACTOE3_H
#include <vector>
#include <string>
#include "tic_tac_toe.h"

bool test_config();

class TicTacToe3: public TicTacToe
{
    public:
        TicTacToe3(): TicTacToe(3){
            
        }
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe3& game);
        friend std::istream& operator>>(std::istream& in, const TicTacToe3& game);
    protected:
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
};
#endif