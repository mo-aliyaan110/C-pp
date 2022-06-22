#include<iostream>

using namespace std;

int main(){
    string name = "Mohammmed Aliyaan";
    //string length...
    cout << name.length() << "\n";

    //string access

    cout << name[5] << "\n";

    //string find.

    cout << name.find("yaan", 5);
    return 0;
}