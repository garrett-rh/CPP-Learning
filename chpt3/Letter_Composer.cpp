//Chapter 3 Drill - Single form letter based on user input

#include "../std_lib_facilities.h"

int main () {
    
    //Get name and age of recipient and push into variables
    cout << "Enter the first_name of the person you would like to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "What is the recipient's age:\n";
    //Ensure that age is realistic
    int age;
    cin >> age;
    if (110 < age < 0) {
        simple_error("you're kidding!");
    }
    
    //Get friend information from user
    cout << "What is the name of another friend?\n";
    string friend_name;
    cin >> friend_name;
    cout << "What is the friend's sex (m/f)?";
    char friend_sex = 0;
    cin >> friend_sex;
    
    //Print letter out
    cout << "Dear " << first_name << ",\n"
    << " How are you? I am fine. Hope to see you soon.\n"
    << "Have you seen " << friend_name << " lately?\n"
    << "If you see " << friend_name << " please ask ";

    // Determine what to write depending on if friend is male or female
    if (friend_sex == 'm') {
        cout << "him ";
    }
    else {
        cout << "her ";
    }
    cout << "to call me.\n";
    
    //Print different outputs depending on recipient's age
    if (age < 12) {
        cout << "Next year you will be " << age + 1 << ".";
    }
    else if (age == 17) {
        cout << "Next year you will be able to vote.";
    }
    else if (age > 70) {
        cout << "I hope you are enjoying retirement.";
    }
    
    //Print signature
    cout << "\nYours sincerely,\n\nGarrett\n";
}