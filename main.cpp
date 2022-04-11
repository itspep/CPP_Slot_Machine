#include<iostream>
//define possible headers needed
#include<ctime>//for random number operations
#include<cstdlib>
using namespace std;
//declare possible function prototypes
void twoMatches(int[], int);
void threeMatches(int[], int);
//declare possible global variables
const int TIMES=3;
int rand_num[TIMES];
int main()
{
    //define your variables
    double bet_money;
    char answer;
    enum choice{N, Y};
    //defining an enumerated data type
    enum Possibilities {Cherries, Oranges, Plums, Bells, Melons, Bars };
    //allow the user to enter the amount of money to bet on
    do
    {
    cout<<"Enter the amount of money you wish to bet on into the slot\n";
    cin>>bet_money;
    cout<<"press enter to play\n";
    cin.get();//to take characters or symbols
    //defining a random word selection, atleast three times
    for(int count=0; count<TIMES; count++)
    {
        //generate the random number
        srand(time(0));
        //set random number range and store the value in rand_num
        rand_num[count] = rand() % 5+1;
    
    //display the result
    switch(rand_num[count])
    {
        case Cherries: cout<<"Cherries\n";
                       break;
        case Oranges: cout<<"Oranges\n";
                       break;
        case Plums:   cout<<"Plums\n";
                        break;
        case Bells:   cout<<"Bells\n";
                        break;
        case Melons:  cout<<"Melons\n";
                        break;
        case Bars:    cout<<"Bars\n";
                        break;
    }
    }
    //call the function for two matches
    twoMatches(rand_num, TIMES);
    //call the function for three matches
    threeMatches(rand_num, TIMES);
    cout<<"do you wish to play again?\n";
    cout<<"Y or N"<<endl;
    char answer;
    enum choice{N, Y};
    cin>>answer;
    if(!answer)
    {
        cout<<"bye!!!\n";
    }
    }
    while(answer=true);

return 0;
}
//defining function header for two matches
void twoMatches(int rand_num[], int TIME)
{
    if(rand_num[2-TIME]==rand_num[TIME] || rand_num[--TIME]==rand_num[TIME] || rand_num[2-TIME]==rand_num[--TIME])
    {
    cout<<"you won two times the amount entered\n";
    }
    else
    {
        cout<<"sorry! try again.\n";
    }
}
//defining function header for three matches
void threeMatches(int rand_num[], int TIME)
{
    if(rand_num[0]==rand_num[1]==rand_num[3])
    {
        cout<<"you won three times the amount entered\n";
    }
    else
    {
        cout<<"sorry try again\n";
    }
}