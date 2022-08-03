#include <iostream>

using namespace std;

int main(){

    int age = 18;
    int *pAge = &age;

    double gpa = 3.9;
    double *pGpa = &gpa;

    string name = "Hazeeq";
    string *pName = &name;

    cout << *&gpa;

    // cout << "Age: " << &age << "\n";
    // cout <<"Gpa: " << &gpa << "\n";
    // cout <<"Name: " << &name << "\n";

    return 0;
}