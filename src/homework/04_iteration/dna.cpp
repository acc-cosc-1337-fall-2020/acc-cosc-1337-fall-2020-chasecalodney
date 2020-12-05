#include "dna.h"
#include <iostream>
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& DNA){
    double gc_content;
    for (int i=0; i < DNA.length(); i++)
    {
        if (DNA[i] == 'G' || DNA[i] == 'C'){
            gc_content++;
        }
    }
    return (gc_content / DNA.length()) * 100;
}




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string DNA){
    int len = DNA.length();
    int n = len-1;
    for (int i = 0; i < (len / 2); i++){
        char temp = DNA[i];
        DNA[i] = DNA[n];
        DNA[n] = temp;
        n=n-1;
    }
    return DNA;

}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string DNA)
{
    string x = get_reverse_string(DNA);
    for (int i = 0; i < x.length(); i++){
        if (x[i] == 'A'){
            x[i] = 'T'; 
        }
        else if (x[i] == 'T'){
            x[i] = 'A';
        }
        else if (x[i] == 'C'){
            x[i] = 'G';
        }
        else if (x[i] == 'G'){
            x[i] = 'C';
        }
    }
    return x;
}
