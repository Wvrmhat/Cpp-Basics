#include <iostream>
#include <string> 

using namespace std;

int main() {

    int a = 10;
    int b = 7;

    cout << "Addition: " << a + b << endl;
    cout << "Sub: " << a - b << endl; 
    cout << "mult: "<<  a* b << endl;
    cout << "Division: " << a/ b << endl;
    cout << "Modulus: " << a % b << endl; 
    cout << "-----------" << endl; 

    cout << "a == b: " << (a == b) <<  endl; // false 
    cout << "a != b: " << (a != b) << endl; 
    cout << "a < b: " << (a < b) << endl;
    cout << "a > b: " << (a > b) << endl;
}