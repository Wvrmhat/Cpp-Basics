#include <iostream>
#include <string> 



using namespace std;

int main() {

    try{
        int a, b;

        cout << "Enter your first number: ";
        cin >> a;

        cout << "Enter your second number: ";
        cin >> b;

        if (b == 0 || a == 0) {

            throw runtime_error("Division by zero is not allowed");

        }
        else {
            cout << "Result: " << a / b;
        }
    }catch (runtime_error e){
        cerr << "Error: " << e.what();  // represents an error
    }

}