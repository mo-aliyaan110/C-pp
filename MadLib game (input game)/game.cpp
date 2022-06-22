#include<iostream>
using namespace std;

int main(){
    string name, city, designation;
    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Please enter your designation: ";
    getline(cin, designation);

    cout << "His name is " << name << " He is from " << city << " and he is a " << designation << "\n";
    return 0;
}