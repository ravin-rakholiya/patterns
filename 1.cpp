#include<./stdc++.h>
using namespace std;

void doSomething(int &n1){
    cout << n1 << endl;
    n1 += 5;
    cout << n1 << endl;
    n1 += 5;
    cout << n1 << endl;
}
int main(){
    int num1=10;
    doSomething(num1);
    cout << num1 << endl;
    return 0;
}