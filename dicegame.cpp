#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    /*Dice game */
    srand(time(0));
    int random;
        cout << "===================================" << endl;
        cout << "DICE GAME BY KING DAN GATE" << endl;
        /* Generating dice figures ranging from 0 - 5 */
    for(int i = 0; i <= 1; i++)
    {
    int random = (rand() % 5);
     cout << "===================================" << endl;
    cout << "YOUR DICE SPUN: ";
    cout << random << endl;
    cout << "===================================" << endl;
    /* Win / Loss Messages */
    if( random < 3)
    {
        cout << "YOU LOSE" << endl; 
        cout << "IF YOU GET MORE THAN 3 YOU WIN!!!" << endl;
    }
    else
    {
        cout << "YOU WIN" << endl;
        cout << "!!!CONGRATULATIONS!!!" << endl;
    } 
     cout << "===================================" << endl;
    }
    return 0;
}

