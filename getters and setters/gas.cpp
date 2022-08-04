#include <iostream>

using namespace std;

class Movie
{
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    };


    void setRating(string aRating){
        bool valid = false;
        string validRating[] = {"PG-13", "G", "R", "PG"};
        for (int i = 0; i <= sizeof(validRating)/sizeof(validRating[0]); i++){
            if (aRating == validRating[i]){
                valid = true;
            }
        }

        if(valid){
            this->rating = aRating;   
        }else{
            this->rating = "Invalid rating";
        }
    }

    string getRating() {
        return this->rating;
    }

};

int main(){

    Movie tickboom("Tick tick boom", "Lin-Manuel Miranda", "PG-13");
    cout << tickboom.getRating();

    return 0;
}