//Bleeps out bad words

#include "../std_lib_facilities.h"

int main () {
    vector <string> bad_words = {"bad", "word"};
    vector <string> words;
    for ( string temp; cin >> temp; ) {
        words.push_back(temp);
    }
    for ( int j=0; j < words.size(); ++j ) {
        for ( int i=0; i < bad_words.size(); ++i ) {
            if ( words[j] == bad_words[i] ) {
                words[j] = "BLEEP";
            }
        }
    cout << words[j] << "\n";
    }
}