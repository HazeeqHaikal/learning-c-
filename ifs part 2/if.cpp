#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3){
    int result;
    
    if (num1 == num2 && num1 == num3){
        cout << "All 3 numbers are the same which is ";
        result = num1;
    }else if(num1 > num2 && num1 > num3){
        result = num1;
    }else if(num2> num1 && num2 > num3){
        result = num2;
    }else{
        result = num3;
    }

    return result;
}

int main(){

    cout << getMax(50, 50, 100);

    return 0;
}