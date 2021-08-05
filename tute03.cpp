/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <stdio.h>
int main()
{
    int no;
    long fac;

    std::cout << "Enter a Number : " << endl;
    std::cin >> &no >> endl;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    std::cout << "Factorial of ", no, fac << endl;  
    return 0;
}
