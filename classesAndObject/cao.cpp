#include <iostream>

using namespace std;

class Book {

    public:
        string title;
        string author;
        int pages;

};

int main(){

    Book sejarah;
    sejarah.title = "Penjajahan British";
    sejarah.author = "Hazeeq Haikal";
    sejarah.pages = 29;

    cout << sejarah.pages << "\n";

    Book sejarah2;
    sejarah2.title = "Tanah Tumpah Darahku";
    sejarah2.author = "Hazeeq Haikal";
    sejarah2.pages = 64;

    cout << sejarah2.title;

    return 0;
}