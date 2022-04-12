#include <iostream>
// define possible headers needed
#include <ctime> //for random number operations
#include <cstdlib>
using namespace std;
// declare possible function prototypes
void wins_n_lost(int, int, int);
// declare possible global variables
const int TIMES = 3;
int rand_num[TIMES];
int slot1;
int slot2;
int slot3;
double amount_won;
double bet_money;
int main()
{
    //display a welcome screen 
    cout<<"*****************************************************"<<endl;
    cout<<"Welcome to the slot game where fortunes are decided"<<endl;
     cout<<"****************************************************"<<endl;
    // define your variables
    bool answer;
    // defining an enumerated data type
    enum Possibilities
    {
        Cherries,
        Oranges,
        Plums,
        Bells,
        Melons,
        Bars
    };
    // allow the user to enter the amount of money to bet on
    do
    {
        cout << "Enter the amount of money into the slot\n";
        cout<<"the lever will be pulled automatically for you\n";
        cin >> bet_money;
        cout << "you put in $" << bet_money << endl;
        srand(time(0)); // this function must only be executed once, putting it in a loop will cause some problems
        for (int count = 0; count < TIMES; count++)
        {
            // generate the random number
            // set random number range and store the value in rand_num
            rand_num[count] = rand() % 5 + 1;

            // display the result
            switch (rand_num[count])
            {
            case Cherries:
                cout << "Cherries\n";
                break;
            case Oranges:
                cout << "Oranges\n";
                break;
            case Plums:
                cout << "Plums\n";
                break;
            case Bells:
                cout << "Bells\n";
                break;
            case Melons:
                cout << "Melons\n";
                break;
            case Bars:
                cout << "Bars\n";
                break;
            }
            slot1 = rand_num[0];
            slot2 = rand_num[1];
            slot3 = rand_num[2];
        }
        // call the function
        wins_n_lost(slot1, slot2, slot3);
        cout << "do you wish to play again?\n";
        cout << "0(no) or 1(yes)" << endl;
        cin >> answer;
    } while (answer);
    cout<<"see you again soon!\n";
    return 0;
}
// defining function header for two matches
void wins_n_lost(int slot1, int slot2, int slot3)
{
    if (slot1 == slot2 && slot1 == slot3 || slot2 == slot1 && slot2 == slot3 || slot3 == slot1 && slot3 == slot2)
    {
        cout << "you won three times the amount entered\n";
        amount_won = 3 * bet_money;
        cout << "you won: $" << amount_won << endl;
    }
    else if(slot1==slot2||slot1==slot3||slot2==slot3)
    {
    cout<<"you won two times the amount entered\n";
    amount_won=2*bet_money;
    cout<<"you won: $"<<amount_won<<endl;
    }
        else
        {
            cout << "sorry! you lost\n";
        }
}
