#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa; 
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        };

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

int main(){

    Student student("Hazeeq", "Computer Science", 4.0);
    Student student2("Afrina", "English", 4.0);
    Student student3("Plow", "Flight Engineer", 2.5);

    cout << student3.hasHonors();
    return 0;
}