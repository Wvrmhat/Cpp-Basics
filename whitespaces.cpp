#include <iostream>
#include <string> 

using namespace std;

int main() {

    string text;

    cout << "Enter text: ";
    getline(cin, text);     
    // cin >> text;        // only the text before a whitespace is stored, so we use getline and the <string> library


    cout << text; 
}