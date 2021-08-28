#include "../std_lib_facilities.h"

/*
 *Start at the top, and read down. So if you have the number 2 --> It is an expression --> Since its is a Term --> Since it is a Primary --> Because a primary is a number --> and a number is a floating-point-literal
 *What about 2 + 2?
    The first two is an expression (see above) the '+' is an expression because it falls under 'Expression "+" Term
 * The last two is a term because it is a number which is a primary which is a term. It is not an expression because it fits the rule of expression + term
Grammar: 
    Expression:
        Term
        Expression "+" Term
        Expression "-" Term
    Term:
        Primary
        Term "*" Primary
        Term "/" Primary
        Term "%" Primary
    Primary:
        Number
        "(" Expression ")"
    Number:
        floating-point-literal
 */

double expression();
double term();
double primary();

class Token {
    public:
        char kind; //what kind of token
        double value; // what is the value if kind is a number
};

Token get_token () { //Uses cin to get user input

}

double expression () { // Handles + and -

    double left = term(); // reads and evaluates a term (every term is an expression but not vice versa) See "Term" as a value in Expression
    Token t = get_token(); // Get our token that will contain our kind. If kind = + or - then it will return the calculation. Else, it will return just the number
    while (true) { //Looks for a term, checks for following + or - and loops on
        switch (t.kind) { // Checks what is the t.kind (+ or -) of the expression
            case '+':
                return left + term(); // read and eval term then add
            case '-':
                return left - term(); // read and eval term then subtract
            default:
                return left;
        }
    }
}

double term () { // Deals with * / and %

       double left = primary();
       Token t = get_token();
       while (true) {
           switch (t.kind) {
               case '*':
                   left *= primary();
                   t = get_token();
                   break;
                case '/':
                   {   double d = primary();
                        if (d == 0) error("Divided by zero");
                        left /= primary();
                        t = get_token();
                        break;
                    } // In a block because initializing variables in a switch
                // Removing temporarily due to problems
               // case '%':
               //    left %= primary();
               //    t = get_token();
               //    break;
                default:
                   return left;
        }
    }
}

double primary () { // Handles numbers and parentheses

    Token t = get_token();
    switch (t.kind) {
        case '(': //Checking for opening parenthesis
            { double d = expression();
                t = get_token();
                if (t.kind != ')') error("')' expected");
                return d;
            }
        case '8': //8 is the t.kind of all numbers because why not
            return t.value;
        default:
            error("primary expected");
    }
}
