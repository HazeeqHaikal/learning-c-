#include <iostream>

using namespace std;

class Book {

    public:
        string title;
        string author;
        int pages;

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle; 
            author = aAuthor;
            pages = aPages;
        };
};

int main(){

    Book dummy;
    Book sejarah("Penjajahan British", "Hazeeq Haikal", 29);
    Book sejarah2("Tanah Tumpash Darahku", "Hazeeq Haikal", 64);

    cout << sejarah.title << endl;
    cout << dummy.title;

    return 0;
}