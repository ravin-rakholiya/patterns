#include<./stdc++.h>
using namespace std;

void printName(int i,int n, string name){
    if(i>n) return;
    cout << name << endl;
    printName(i+1, n, name);
}

void printNumber(int i, int n){
    if(i>n) return;
    cout << i << endl;
    printNumber(i+1, n);
}

void printNumberBackTracking(int i, int n){
    if(i<1) return;
    printNumberBackTracking(i-1, n);
    cout << i << endl;
}

void getSumofNparameter(int i, int sum){
    if(i<1){
        cout << sum << endl;
         return;
    }
    getSumofNparameter(i-1, sum+i);
    
}

int getSumofNFuncational(int i){
    if(i==0) return 0;
    return i+getSumofNFuncational(i-1);
}

void getFactorialVar(int i, int fact){
    if(i<1){
        cout << fact << endl;
        return;
    }
    getFactorialVar(i-1, fact*i);
}

int getFactorialFun(int n){
    if(n==0){
        return 1;
    }
    return n*(getFactorialFun(n-1));
}

void swapArr(int l, int r, int arr[]){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    swapArr(l-1,r-1, arr);
}

void swapArr1(int i, int n, int arr[]){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    swapArr1(i+1, n, arr);
}

bool checkPalindrome(int i, string st){
    if(i >= st.length()) return true;
    if(st[i] != st[st.length()-i-1]) return false;
    checkPalindrome(i+1, st);
    return true;
}


int fibonaci(int n){
    if(n<=1) return n;
    int last = fibonaci(n-1);
    int slast = fibonaci(n-2);
    return last+slast;
}
int main(){
    int n;
    // string name;
    cout << "Enter Number:" << endl;
    cin >> n;
    // cout << "Entre Name:" << endl;
    // cin >> name;

    // string st;
    // cout << "Enter the String:" << endl;
    // cin >> st;
    cout << "O/P:" << endl;
    // printName(1, n, name);
    // bool palindrome = checkPalindrome(0, st);
    // cout << bool(palindrome) << endl;
    // printNumber(1, n);
    // printNumberBackTracking(n, n);
    // getSumofNparameter(n, 0);
    // int sum = getSumofNFuncational(n);
    // cout << sum << endl;
    // getFactorialVar(n, 1);
    // int fact = getFactorialFun(n);
    // cout << fact << endl;

    // int arr[n];
    // for(int i=0;i<n;i++) cin >> arr[i];  
    // swapArr(0, n-1, arr);
    // // swapArr1(0, n, arr);
    // for(int i=0;i<n;i++) cout << arr[i] << " " << endl;

    int fib = fibonaci(n);
    cout << fib << endl;
    return 0;
}