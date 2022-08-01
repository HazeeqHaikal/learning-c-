#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <stdio.h>

using namespace std;

int main(){

    srand (time(NULL));

    int secretNum = rand() % 10;
    int guess;

    cout << "Guess a number: ";
    cin >> guess;
    
    do{
        cout << "Wrong number guess again: ";
        cin >> guess;
    }while(secretNum != guess);

    cout << "Correct the number is " << secretNum;

    return 0;
}