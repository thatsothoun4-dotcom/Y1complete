#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name;
    string age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    getline(cin, age);

    ofstream file("../file.txt", ios::app);

    if (!file.is_open()) {
        cout << "Cannot open file!" << endl;
        return 1;
    }

    file << "======================" << endl;
    file << "Name : " << name << endl;
    file << "Age  : " << age << endl;
    file << "======================" << endl;

    file.close();

    cout << "Data saved successfully!" << endl;
    // if use ifstream 
    ifstream readfile("../file.txt") ; 
    if (!readfile.is_open()){
        cout << "Error file "<<endl; 
        return 1 ; 
    }

    string line ; 
    while(getline(readfile,line)){
        
        cout << line <<endl; 

    }
    readfile.close() ; 


    return 0;
}