#include <iostream>

using namespace std;

string changeNumberToDay(int num){
    string nameDay;
    
    switch (num){
        case 0:
            nameDay = "Monday";
            break;
        case 1:
            nameDay = "Tuesday";
            break;
        case 2: 
            nameDay = "Wednesday";
            break;
        case 3:
            nameDay = "Thursday";
            break;
        case 4:
            nameDay = "Friday";
            break;
        case 5:
            nameDay = "Saturday";
            break;
        case 6: 
            nameDay = "Sunday";
            break;
        default:
            cout << "Invalid number";
            break;

    }

    return nameDay;
}

int main(){
    
    cout << changeNumberToDay(1000);
    
    return 0;
}