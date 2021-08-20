//Rock Paper Scissors

#include "../std_lib_facilities.h"

string winner (char user_choice, char computer_choice) {
    if ( user_choice == 'r' ) {
            if ( computer_choice == 's' ) {
                return "You win!\n";
            } else if ( computer_choice == 'p' ) {
                return "Computer wins!\n";
            } else {
                return "It is a tie!\n";
            }
    } else if ( user_choice == 's' ) {
        if ( computer_choice == 'p') { 
            return "You win!\n";
        } else if ( computer_choice == 'r' ) {
            return "Computer wins!\n";
        } else {
            return "It is a tie!\n";
        }
    } else { //Assumes user choice = p
        if ( computer_choice == 'r' ) {
            return "You win\n";
        } else if ( computer_choice == 's' ) {
            return "Computer wins\n";
        } else {
            return "It is a tie\n";
        }
    }

}

int main () {
    constexpr char rock = 'r';
    constexpr char paper = 'p';
    constexpr char scissors = 's';
    char user_choice;
    vector <char> computer_choice = {rock, paper, scissors, rock, paper, scissors};


    for (int i=0; i < computer_choice.size(); ++i) {
        cout << "Rock (r), Paper (p), or Scissors (s): ";
        cin >> user_choice;
        if ( user_choice != 'r' && user_choice != 'p' && user_choice != 's' ) {
            cout << "That's not an option :(\n";
            break;
        }
        cout << winner(user_choice, computer_choice[i]);
    }
    cout << "Game Over \n";
}

