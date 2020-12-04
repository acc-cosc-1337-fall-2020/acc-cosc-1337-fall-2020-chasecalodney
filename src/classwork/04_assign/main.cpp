//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main(){

	char repeat;
	int num;
	while (repeat != 'N')
	{
		do{
			cout << "Please enter a positive integer: " << "\n";
			cin >> num;
		}
		while (num < 1 || num > 20);

		cout << "The factorial is " << factorial(num) << "\n";
		cout << "Enter another number? (Y/N) " << "\n";
		cin >> repeat;
	}
}