#include <iostream>
#include <string> 


using namespace std;

void number(int a) {
    cout << a;
}

int main() {
    // & * 
    int a = 10;
    
    int &ref = a;

    cout << ref << endl; 

    ref += 5;

    cout << ref;

    cout << "-----------" << endl;

    // Pointers
    // pointers always work with references, the main difference is that pointers shows the memory address of where the var is stored
    int b =10;

    int *ptr = &b;

    cout << ptr << endl;
    cout << a;


}