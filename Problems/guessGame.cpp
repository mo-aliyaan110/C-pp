#include<iostream>
using namespace std;

int main(){

    int n;
    int guessLimit = 0;
    cout << "Start the guess game by inputing the number: \n";

    do{
        if(guessLimit == 3){
            break;
        }
        cout << "Guess here: ";
        cin >> n;
        guessLimit++;
    }
    while(n != 7);
    
    if(n == 7){
        cout << "You guessed it right, it's 7";
    }
    else{
        cout << "Sorry you loose...!";
    }
    return 0;
}