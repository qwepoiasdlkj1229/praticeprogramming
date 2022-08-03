#include <iostream>
using namespace std;


void stell(){

        string tell = "hello";


string getDay(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "sunday";
        break;
    case 1:
        dayName = "monday";
        break;
    case 2:
        dayName = "teusday";
        break;
    case 3:
        dayName = "wednesday";
        break;
    case 4:
        dayName = "thursday";
        break;
    case 5:
        dayName = "friday";
        break;
    case 6:
        dayName = "saturday";
        break;


        default:
            dayName = "Invalid day number";

    }

    return dayName;

    cout << tell();
}

int main()
{
    cout << getDay(2);

    return 0;
}













