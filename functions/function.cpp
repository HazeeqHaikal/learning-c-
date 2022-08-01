#include <iostream>

using namespace std;

void hi(string name, int age);

int main(){

    hi("hazeeq", 18);
    hi("redza", 30);
    hi("mole", 74);

    return 0;
}

void hi(string name, int age){
    cout << "hi " << name << "\n";
    cout << "you are " << age << " years old\n"; 
}