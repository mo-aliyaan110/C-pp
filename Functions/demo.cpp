#include<iostream>
using namespace std;

void Hello( string name, int age);

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    Hello(name, 24);
    Hello("Jafar", 89);
    Hello("Hussain", 46);
    return 0;
}

void Hello(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old \n";
    return;
}