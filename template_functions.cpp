#include <iostream>
#include <string> 

using namespace std;

// template allows different datatypes in a function, without defining them
template <typename T1, typename T2>
auto info(T1 num1, T2 num2) {     // automatically declares function based off input
    return num1 + num2;
}               

int main() {
    cout << "Result: " << info(10.5, 5);


}