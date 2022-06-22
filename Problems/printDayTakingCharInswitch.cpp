#include<iostream>
using namespace std;

int main(){
    char input;
    cout << "Enter the A-G to print the days of Week :";
    cin >> input;

    switch(input){
        
        case 'a': cout << "Monday";
        break;

        case 'b': cout << "Tuesday";
        break;

        case 'c': cout << "Wednesday";
        break;

        case 'd': cout << "Thursday";
        break;

        case 'e': cout << "Friday";
        break;

        case 'f': cout << "Saturday";
        break;

        case 'g': cout << "Sunday";
        break;

        default: cout << "Invalid Input";
    }
    return 0;
}