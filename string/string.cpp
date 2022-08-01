#include <iostream>

using namespace std;

int main(){

    string ayat = "Hello World";
    string kedua = "";
    kedua = ayat.substr(7, 3);
    cout << kedua << endl;
    cout << ayat.substr(7, 3) << endl;
    cout << ayat.length() << endl;
    cout << ayat[0] << endl; 
    cout << ayat.find("World", 0) << endl;
    ayat[0] = 'W';
    cout << ayat << endl;
    return 0;
}