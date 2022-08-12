#include <iostream>

using namespace std;

class Sword {

private:
    string name;
public:

    string user;
    int sharpness;
    Sword(string aName, string aUser, int aSharpness){
        name = aName;
        setUser(aUser);
        sharpness = aSharpness;
    }

    void setUser(string aUser){
        if(aUser == "G" || aUser == "PG" || aUser == "NR")
            user = aUser;
        }   else {
            user = "NR";
        }

};


int main()
{



    Sword brokensword("Broken sword", "Luis", -1);


    Sword.setUser("Luis");

   cout << Sword.user;







        return 0;
}
