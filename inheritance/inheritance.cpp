#include <iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout <<"The chef makes yummy chicken"<< endl;
        }
        void makeSalad(){
            cout <<"The chef makes salad"<< endl;
        }
        void makeSpecialDish(){
            cout <<"The chef makes bbq ribs"<< endl;
        }
};

class MalaysianChef : public Chef{
    public:
        void makeNasiLemak(){
            cout << "Preparing nasi lemak" << endl;
        }
        void makeSpecialDish(){
            cout <<"The chef makes sambal"<< endl;
        }
};


int main(){

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    MalaysianChef malaysianChef;
    malaysianChef.makeChicken();
    malaysianChef.makeNasiLemak();
    malaysianChef.makeSpecialDish();

    return 0;
}