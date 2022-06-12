#include <iostream>
#include "calculator.h"


using namespace std;

int main()
{
    int math_operator;
    calculator cal;
    bool loop = true;
    cout << "Choose mathematical operator" << endl;
    cout<< "Choose 1 for summation" << "\n" <<
    "Choose 2 for subtraction" << "\n" <<
    "Choose 3 for multiplication" << "\n" <<
    "Choose 4 for division" << "\n" <<
    "Choose 0 to exit" << "\n" << endl;
    cin >> math_operator;


while(loop == true){
    if (math_operator ==1)
    {
        cal.result();
        cout << cal.sum() << endl;
        break;
    }
    else if(math_operator ==2)
    {
        cal.result();
        cout << cal.subtract() << endl;
        break;
    }
    else if(math_operator ==3)
    {
        cal.result();
        cout << cal.multiply() << endl;
        break;
    }
    else if(math_operator ==4)
    {
        cal.result();
        cout << cal.divide() << endl;
        break;
    }
    else
    {
        loop = false;
    }

}

    return 0;
}
