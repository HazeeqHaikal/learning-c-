#include <iostream>

using namespace std;

int main(){

    int numberGrid[5][2] = {

        {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}

    };

    for (int i = 0; i < sizeof(numberGrid) / sizeof(numberGrid[0]); i++){
        for (int b = 0; b < sizeof(numberGrid[0]) / sizeof(numberGrid[0][0]); b++){
            cout << numberGrid[i][b] << "\n";
        };
    };
    

    return 0;
}