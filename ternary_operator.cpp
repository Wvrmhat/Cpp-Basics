#include <iostream>

using namespace std;

int main() {
    int num = 10;

    // different method for validating values instead of if/else
    string result = (num == 10) ? "Number equal to 10" : "Not 10";

    // if(num == 10) {
    //     cout << "number is equal to 10";
    // }
    // else {
    //     cout << "Not 10";
    // }
    cout << result;

}