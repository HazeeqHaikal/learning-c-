#include <iostream>

using namespace std;

int main(){

    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall) {
        cout << "Youre a tall male";
    }else if(isMale && !isTall){
        cout << "Youre a short male";
    }else if(!isMale && isTall){
        cout << "Youre a tall female";
    }else{
        cout << "Youre a short female";
    }
    return 0;
}