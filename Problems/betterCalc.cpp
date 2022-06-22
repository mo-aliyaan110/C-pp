#include<iostream>
using namespace std;

int main(){
    int n, m;
    char op;
    cout << "Enter the first number: ";
    cin >> n;

    cout << "Enter the second number: ";
    cin >> m;

    cout << "Enter the operation: ";
    cin >> op;

    int result;

    if (op == '+'){
        result = n + m;
        cout << result << "\n";
    }
    else if (op == '-'){
        result = n - m;
        cout << result << "\n";
    }
    else if (op == '*'){
        result = n * m;
        cout << result << "\n";
    }
    else if (op == '/'){
        result = n / m;
        cout << result << "\n";
    }
    else if (op == '%'){
        result = n % m;
        cout << result << "\n";
    }
    else{
        cout << "Invalid opeartor \n";
    }

    
    return 0;




}