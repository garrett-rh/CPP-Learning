//Check if previously input word (from stdin) is the same as the last

#include "../std_lib_facilities.h"

int main () {

    //Initialize the repeat word counter, set to 0 since it is a counter
    int number_of_words = 0;

    //Initialize w/ a space to indicate no word since cin seperates words on whitespace
    string previous = " ";
    string current;

    //Read words from stdin and push them the the `current` variable and increase the words counted variable
    while (cin >> current) {
    ++number_of_words;

    //Compare if the previous word is equal to the current word
        if (previous == current) {

        //Output the results if the word is a duplicate of the last word
            cout << "word number " << number_of_words
            << " repeated word: " << current << "\n";
        }
        //Set the previous word to the current word for the next loop
        previous = current;
    }
}