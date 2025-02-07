#include <iostream>
#include <string> 

using namespace std;

int main() {
    int num1;
    int num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+ - / *): ";
    cin >> op;

    switch(op){
        case '-': 
            cout << "Result: " << num1 - num2;
        case '+':
            cout << "Result: " << num1 + num2;
        case '/':
            cout << "Result: " << num1 / num2;
        case '*':
            cout << "Result: " << num1 * num2;  
    }

}