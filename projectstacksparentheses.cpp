#include <iostream>
#include <iomanip>
#include <stack>
#include <string>
using namespace std;

// Function used to check if the parentheses are balanced
bool balancedParentheses(string expr)
{
    // Stack of characters named p because the expression will contain parentheses
    stack<char> p;
    // for loop used in order to traverse the expression of parentheses
    for (int i = 0; i < expr.length(); i++)
    {
        // If the expression contains open parentheses, meaning '('
        if (expr[i] == '(')
            p.push(expr[i]);
        else
            p.pop();
    }
    // Return empty stack
    return (p.empty());
}

// main function, which will take the input from the user and display the output
// of whether or not the expression contains balanced parentheses
int main()
{
    string parenthesesExpression;
    // The user inputting the parentheses expression that either does or does not have balanced parentheses.
    cin >> parenthesesExpression;
    if (balancedParentheses(parenthesesExpression))
        // Output that will be displayed if the expression has balanced parentheses.
        cout << "Balanced";
    else
        // Output that will be displayed if the expression's parentheses are not balanced.
        cout << "Not Balanced";
    return 0;
}
