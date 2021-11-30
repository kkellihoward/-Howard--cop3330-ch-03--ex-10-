/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kelli Howard
 */

#include <iostream>
using namespace std;

int main()
{
    
    string operations;
    double value1;
    double value2;
    double result;

    cout<<"Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two numbers separated by a space:\n " << endl;
    while(cin >> operations >> value1 >> value2)
    {
        if(operations == "+" || operations == "plus" )
        {
            cout << value1 << " " << operations << " " << value2 << " = " << value1 + value2;
        }
        else if(operations == "-" || operations == "minus" ) 
        {    
            cout << value1 << " " << operations << " " << value2 << " = " << value1 - value2;
        }
        else if(operations == "*" || operations == "mul" )
        {    
            cout << value1 << " " << operations << " " << value2 << " = " << value1 * value2;
        }
        else if(operations == "/" || operations == "div" )
        {
            if(value2 == 0)
            {
                cout<< "ERROR. Cannot divide by 0";
            }
            else
            {    
                cout << value1 << " " << operations << " " << value2 << " = " << value1 - value2;
            }                         
        }
    }

}