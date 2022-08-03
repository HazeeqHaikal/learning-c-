#include <iostream>

using namespace std;

int main(){

    int age = 18;
    double gpa = 3.9;
    string name = "Hazeeq";
    
    cout << "Age: " << &age << "\n";
    cout <<"Gpa: " << &gpa << "\n";
    cout <<"Name: " << &name << "\n";

    return 0;
}