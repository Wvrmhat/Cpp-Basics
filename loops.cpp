#include <iostream>
#include <string> 

using namespace std;

int main() {
   
    string name;

    for(int num = 5; num <= 10; num++){
       cout << num << endl; 
    }

    cout << "-------" << endl;

   

    while(name.empty()) {            //while name is empty
        cout << "Enter your name: ";
        getline(cin, name);
       
    }
    cout << "Welcome " << name;
}