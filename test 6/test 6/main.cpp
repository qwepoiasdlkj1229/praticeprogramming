#include <iostream>
using namespace std;

class Chef {
public:
    void makeChicken (){
        cout << "The chef makes chicken" << endl;
        }
    void makeSalad(){
        cout << "The chef makes salad" << endl;
    }


};

class koreanChef : public Chef{
public:
    void makeKimchi(){
        cout << "The chef makes kimchi"<<endl;
    }
    void makeSpecialDish(){
        cout << "The chef makes cheese kimbap"<< endl;
}

};


int main()
{
    Chef chef;
    chef.makeSalad();

    koreanChef korean;
    korean.makeSpecialDish();

    return 0;
}
