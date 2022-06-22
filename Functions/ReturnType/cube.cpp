#include<iostream>
using namespace std;

double cube(double n);

int main(){
    double n = 6.5;

    // double res = cube(n);
    // cout << res << "\n";
    cout << "cube of " << n << " is " << cube(n);
    return 0;

}

double cube(double n){
    return n * n * n;
    
}