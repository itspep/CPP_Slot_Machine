#include<iostream>
//define possible headers needed
#include<ctime>//for random number operations
#include<cstdlib>
using namespace std;
//declare possible function prototypes
void twoMatches(int[], int);
void threeMatches(int[], int);
int main()
{
    //define your variables
    double bet_money;
    const int TIMES=3;
    int rand_num[TIMES];
    //defining an enumerated data type
    enum Possibilities {Cherries, Oranges, Plums, Bells, Melons, Bars };
    //allow the user to enter the amount of money to bet on
    cout<<"Enter the amount of money you wish to bet on into the slot\n";
    cin>>bet_money;
    //defining a random word selection, atleast three times
    for(int count=0; count<TIMES; count++)
    {
        //generate the random number
        srand(time(0));
        //set random number range and store the value in rand_num
        rand_num[count] = rand() % 5+1;
    }
    //call the function for two matches
    twoMatches(rand_num, TIMES);
    //call the function for three matches
    threeMatches(rand_num, TIMES);

return 0;
}