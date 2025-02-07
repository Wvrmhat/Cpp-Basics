#include <iostream>
#include <string> 

using namespace std;

void some_text();           // have to declare function on top otherwise it wont compile
int add();
string name(string name);


int main() {

    some_text();
    add();
    string your_name;
    cout << "Enter your name: ";
    cin >> your_name;

    name(your_name);
}

void some_text() {
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    cout << text << endl;
}

int add() {
    int a = 3;
    int b = 8;

    int sum = a + b;
    cout << "Result: " << sum << endl; 

    return 0;

}

string name(string name) {
    cout << "You are " << name;

    return name;
}