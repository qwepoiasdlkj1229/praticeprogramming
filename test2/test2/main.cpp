#include <iostream>


using namespace std;


int main(int argc, char** argv)
{
    double num1, num2;
    char tell;

    cout << " enter a number: ";
    cin >> num1;
    cout << " ADD(+) SUBTRACT(-) MULTIPLY (*) DIVIDE (/): ";
    cin >> tell;
    cout << " Another number: ";
    cin >> num2;

    int result;


    if(tell == '+'){
        result = num1 + num2;
    }   else if (tell == '-'){
        result = num1 - num2;
    }   else if (tell == '*'){
        result = num1 * num2;
    }   else if (tell == '/'){
        result = num1 / num2;
    }   else {
        cout << "ENTER ONLY * - + /";
    }
    cout << result;




    return 0;
}
