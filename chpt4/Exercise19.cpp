#include "../std_lib_facilities.h"

int main () 
try {
    vector <string> name;
    vector <int> score;
    string temp_name;
    int temp_score;

    cout << "Enter a name and a score: ";
    while (cin >> temp_name >> temp_score && temp_name != "NoName") {
        for (int i=0; i<name.size(); ++i) {
            if (temp_name == name[i]) error("Duplicate: ", temp_name);
        }
        name.push_back(temp_name);
        score.push_back(temp_score);
} 

    

    for (int i = 0; i<name.size(); ++i) {
        cout << '(' << name[i] << ", " << score[i] << ")\n";
    }
}
catch (runtime_error e) {
    cout << e.what() << '\n';
}

catch (...) {
    cout << "Exiting\n";
}


