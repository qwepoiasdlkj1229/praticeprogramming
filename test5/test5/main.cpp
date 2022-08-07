#include <iostream>

using namespace std;

class Sword {
public:
    string name;
    string user;
    int sharpness;
};


int main()
{
    Sword brokensword;
    brokensword.name = "Broken sword";
    brokensword.user = "Luis";
    brokensword.sharpness = -1;

    Sword diamondsword;
    diamondsword.name = "diamond sword";
    diamondsword.user = "luis";
    diamondsword.sharpness = 20;

    cout << diamondsword.name;





        return 0;
}
