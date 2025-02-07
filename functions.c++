#include <iostream>
#include <string> 

using namespace std;

// void hello() {      //void returns nothing 
//     cout << "hello";
// } 

int add(int a, int b) {     // function that takes in 2 parameters
    return a + b;

}

int main() {
    int x = 3;
    int y = 8;

    cout << "Sum: " << add(x, y);

    
}