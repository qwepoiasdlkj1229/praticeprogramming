#include <iostream>

using namespace std;

class Sword {
public:
    string name;
    string user;
    int sharpness;
    Sword(string aName, string aUser, int aSharpness){
        name = aName;
        user = aUser;
        sharpness = aSharpness;
    }
};


int main()
{
    Sword brokensword("Broken sword", "Luis", -1);


   cout << brokensword.name;







        return 0;
}
