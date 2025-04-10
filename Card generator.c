/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>



int main(void)
{
    wchar_t diamond = 0x2666;
    wchar_t spade = 0x2660;
    wchar_t clover = 0x2663;
    wchar_t heart = 0x2665;
    int suit, digit;
    
    
   srand (time(NULL));
   suit = rand() % 4 + 1;
   digit = rand() % 13 + 1;
    setlocale(LC_CTYPE, "");
    if (suit == 1)
        wprintf(L"%lc\n", spade);
    if (suit == 2)
        wprintf(L"%lc\n", heart);
    if (suit == 3)
        wprintf(L"%lc\n", diamond);
    if (suit == 4)
        wprintf(L"%lc\n", clover);
    
    if (digit == 1)
    wprintf(L"A");
	else
    if (digit == 11)
    wprintf(L"J");
	else
    if (digit == 12)
    wprintf(L"Q");
	else
    if (digit == 13)
    wprintf(L"K");
    else 
    wprintf(L"%i", digit);
    

    return 0;
}
