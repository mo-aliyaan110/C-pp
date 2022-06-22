#include<iostream>
using namespace std;

int exponent(int n, int m);


int main(){
    int n = 2, m = 5;
    cout << exponent(2, 5);
    return 0;
}

int exponent(int n, int m){
    int result = 1;
    for(int i = 1; i <= m; i++){
        result = result * n;    
    }
    return result;   
}