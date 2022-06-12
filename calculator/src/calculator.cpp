#include <iostream>
#include "calculator.h"

using namespace std;

calculator::calculator()
{
    //ctor
   // int first_number;
   // int second_number;

}

calculator::~calculator()
{
    //dtor
}

void calculator::result()
{
cout << "Enter first number";
cin >> first_number;
cout << "Enter second number";
cin >> second_number;
}
//function to set values
float calculator::sum()
{

    return first_number + second_number;
}

//function to set values
float calculator::subtract()
{

    return first_number - second_number;
}

float calculator::multiply()
{

    return first_number * second_number;
}

float calculator::divide()
{

    return first_number / second_number;
}
