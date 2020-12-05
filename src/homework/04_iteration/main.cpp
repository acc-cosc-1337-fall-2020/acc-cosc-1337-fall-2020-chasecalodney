//write include statements
#include "dna.h"
#include <iostream>
#include <string>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string DNA;
	int question;
	bool quit = false;
	while (quit != true){
		
		cout << "Enter a DNA string((Y/y) to quit): ";
		cin >> DNA;
		if (DNA == "Y"){
			break;
		}
		else if (DNA == "y"){
			break;
		}
		double result = get_gc_content(DNA);
		
		cout << "Enter a 1 for Get GC Content and 2 for Get DNA Compliment: ";
		cin >> question;
		if (question == 1){
			cout << result << endl;
		}
		else if (question == 2){
			cout << get_dna_complement(DNA) << endl;
		}
	}
}