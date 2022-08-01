#include <iostream>

using namespace std;

int main(){

    int num1, num2;
    char choice;
    int result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> choice;
    cout << "Enter second number: ";
    cin >> num2;

    if(choice == '+'){
        result = num1 + num2;
    }else if(choice == '-'){
        result = num1 - num2;
    }else if(choice == '/'){
        result = num1 / num2;
    }else if(choice == '*'){
        result = num1 * num2;
    }else {
        cout << "Not a valid operator";
        return 0;
    }
    
    cout << num1 << " " << choice << " " << num2 << " = " << result;

    return 0;
}