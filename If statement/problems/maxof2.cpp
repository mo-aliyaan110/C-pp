#include<iostream>
using namespace std;

int maxof2(int n, int m, int o);


int main(){
    int n = 3, m = 6, o = 98;
    int res = maxof2(n, m, o);
    cout << res << "\n";
    return 0;
}

int maxof2(int n, int m, int o){
    if (n > m && n > o){
        return n;
    }
    else if (m > n && m > o){
        return m;
    }
    else{
        return o;
    }
}