//Task 1: Create a program that generates a random number and asks the user to guess it. Provide feedback on whether the guess is too high or 
//too low until the user guesses the correct number.

#include<iostream>
#include<stdlib.h>
using namespace std;

class random_num{
    public:
        int rand_num,guess;
        void rand_num_gen();
        void guess_num();
};
void random_num::rand_num_gen(){

            rand_num = rand();
            cout<<"Random number successfully generated\n";
        }

void random_num::guess_num(){
    cout<<"Guess the number: ";
    cin>>guess;

    while(guess!=rand_num){
        if(guess==rand_num){
        cout<<"You guessed it right."<<endl;
        }
        else{
            if(guess<rand_num){
                cout<<"Try putting a higher number."<<endl;
                cin>>guess;
            }
            else{
                cout<<"Try putting a lower number."<<endl;
                cin>>guess;
            }
        }
    }

cout<<"You guessed it right."<<endl;
cout<<"Random number is: "<<rand_num<<endl;
}

int main(){
    int ch;
    random_num r;

    cout<<"\nRandom Number Generator\n";

    do
    {   
        cout<<"\nEnter 1 to generate random number \nEnter 2 to guess the number \nEnter 3 to Exit ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            r.rand_num_gen();
            break;
        case 2:
            r.guess_num();
            break;
        case 3:
            break;
        default:
            cout<<"Reenter your choice\n";
            break;
        }
    } while (ch!=3);
    
    return 0;
}