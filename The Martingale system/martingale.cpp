#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void play()
{
    int redOrBlack;
    int money = 100;
    int bet = 5;
    int count = 0;

    cout << "Starting with " << money << "$" << endl;
    while (money != 10000)
    {
        cout << "---------------------------------------" << endl;
        cout << "Spin # " << count << endl;

        redOrBlack = rand() % 2 + 1;
        money = money - bet;
        cout << "Rolling..." << endl;
        if (redOrBlack == 1)
        {
            cout << "RED, You win " << bet << "$" << endl;
            money = money + bet + bet;
            cout << money << "$" << endl;
            bet = 5;
        }
        else if (redOrBlack == 2)
        {
            cout << "BLACK, You Lost " << bet << "$" << endl;
            bet = bet * 2;
            cout << money << "$" << endl;
            cout << "bet is now " << bet << "$" << endl;
        }

        count++;
    }
}
int main()
{
    play();
}