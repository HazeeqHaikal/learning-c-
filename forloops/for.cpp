#include <iostream>

using namespace std;

int main(){

    int numbers[] = {1, 40, 20, 12, 33};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        cout << numbers[i] << "\n";
    }
    

    return 0;
}