#include <iostream>

using namespace std;

class Book {

    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle; 
            author = aAuthor;
            pages = aPages;
        };
};

int main(){

    Book sejarah("Penjajahan British", "Hazeeq Haikal", 29);
    Book sejarah2("Tanah Tumpash Darahku", "Hazeeq Haikal", 64);

    cout << sejarah.title;

    return 0;
}