//cpp
#include "loops.h"
#include <iostream>

int factorial (int num){
    int num2 = 1;
    for (int i = 1; i <= num; ++i){
        num2 *= i;
    }
return num2;
}