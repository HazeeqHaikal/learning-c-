#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <stdio.h>

using namespace std;

int main(){

    srand (time(NULL));
    int secretNum = rand() % 10;
    int guess;
    int amountOfTry = 1;

    cout << "Guess a number: ";
    cin >> guess;

    while(secretNum != guess && amountOfTry < 5){
        cout << "Wrong number guess again: ";
        cin >> guess;
        amountOfTry++;
    }

    if(amountOfTry >= 5){
        cout << "Your try has run out";
        return 0;
    }

    cout << "Correct the number is " << secretNum;

    return 0;
}