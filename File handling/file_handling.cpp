#include <iostream>
#include <string> 

#include <fstream> // library used for files, for reading and writing 

using namespace std;

int main() {

    // ifstream for writing to file, ofstream for reading from, fstream is for reading from and writing to

    // ofstream data("data.txt", ios::out);     // opens file in write mode

    // if (data.is_open()) {
    //     data << "random text.";
    // }
    // else {
    //     cout << "faield to open";
    // }

    ifstream file("data.txt");

    if(file.is_open()) {
        string line;
        while(getline(file, line)) {
            cout << line << endl;
        }
    }

}

