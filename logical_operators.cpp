#include <iostream>
#include <string> 

using namespace std;

int main() {

    int age = 20; 
    bool hasID = false;   // testing with false/true

    if(hasID == true) {        // can use && and || like with most languages 
        cout << "You are allowed to enter";
    }else if(age >= 50) {
        cout << "Customer gets senior discount";
    }
    else {
        cout <<"You are NOT allowed to enter";
    }
    
}