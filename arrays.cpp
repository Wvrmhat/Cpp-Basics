#include <iostream>
#include <string> 

using namespace std;

int main() {

    int numbers[3] = {100 ,2, 3};       // declared an array of 3 integers

    for (int n = 0; n < 3; n++) {      // goes through each position of the array 
        cout << numbers[n] << endl;     // 
    }

    cout << "---------------" << endl;

    int numbers_b[4] = {10, 12, 13, 14};

    numbers_b[0] = 20;
    numbers_b[1] = 15;
    
    for(int i = 0; i < 4; i++) {
        cout << numbers_b[i] << endl;
    }


}