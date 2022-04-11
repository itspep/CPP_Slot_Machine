#include<iostream>
//define possible headers needed
#include<ctime>//for random number operations
#include<cstdlib>
using namespace std;
int main()
{
    //define your variables
    double bet_money;
    int rand_num;
    //defining an enumerated data type
    enum Possibilities {Cherries, Oranges, Plums, Bells, Melons, Bars };
    //defining a random word selection, atleast three times
    for(int count=0; count<3; count++)
    {
        //generate the random number
        srand(time(0));
        //set random number range and store the value in rand_num
        rand_num = rand() % 5+1;

    }

return 0;
}