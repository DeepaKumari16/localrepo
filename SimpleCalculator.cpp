//Task2: Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication and division.
//       Allow the user to input two numbers and choose an operation to perform.


#include<iostream>
using namespace std;

class Calculator{
    public:
        float add(float a, float b);
        float sub(float a, float b);
        float mul(float a, float b);
        float div(float a, float b);
};


float Calculator::add(float a, float b){
    float result;
    result = (a + b);
    return result;
}

float Calculator::sub(float a, float b){
    float result;
    result = (a - b);
    return result;
}

float Calculator::mul(float a, float b){
    float result;
    result = (a * b);
    return result;
}

float Calculator::div(float a, float b){
    float result;   
    result = (a / b);
    return result;
}


int main(){

    float num1 , num2;
    int ch;
    float r;
    Calculator c;

    cout<<"\n**************** Welcome to Simple Calculator! ****************"<<endl;
    
    do{
        cout<<"\nWhich operation do you want to perform?\n";
        cout<<"\nEnter \n\t1 for Addition \n\t2 for Subtraction \n\t3 for Multiplication \n\t4 for Division \n\t5 to Exit "<<endl;
        cin>> ch;

        switch (ch)
        {
        case 1:
            cout<<"\nEnter first number: ";
            cin>>num1;
            cout<<"\nEnter second number: ";
            cin>>num2;
            cout<<"\n";
            r = c.add(num1, num2);
            cout<<"Result: "<<r<<endl;
            break;
        case 2:
            cout<<"\nEnter first number: ";
            cin>>num1;
            cout<<"\nEnter second number: ";
            cin>>num2;
            cout<<"\n";
            r = c.sub(num1, num2);
            cout<<"Result: "<<r<<endl;
            break;
        case 3:
            cout<<"\nEnter first number: ";
            cin>>num1;
            cout<<"\nEnter second number: ";
            cin>>num2;
            cout<<"\n";
            r = c.mul(num1, num2);
            cout<<"Result: "<<r<<endl;
            break;
        case 4:
            cout<<"\nEnter first number: ";
            cin>>num1;
            cout<<"\nEnter second number: ";
            cin>>num2;
            cout<<"\n";
            if(num2 != 0 ){
                
                r = c.div(num1, num2);
                cout<<"Result: "<<r<<endl;
            }
            else{
                cout<<"Divide by 0 error\nProgram will restart."<<endl;
            }
            break;
        case 5:
            break;
    
        default:
        cout<<"\nWrong choice entered.\n";
            break;
        }
    }while(ch != 5);

    return 0;
}