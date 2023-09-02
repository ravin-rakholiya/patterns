#include<./stdc++.h>
using namespace std;

void print1(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<"* ";
        }
        cout << endl;
    }
// * * * * 
// * * * * 
// * * * * 
// * * * *
}



void print2(int n){
    for(int i=0; i<= n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * *
}


void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " "; 
        }
        cout << endl;
    }
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
}


void print5(int n){
    for(int i=0; i<n;i++){
        for(int j=n;j>i ;j--){
            cout << "* ";
        }
        cout << endl;
    }
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
}

void print6(int n){
    // for(int i=0;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
}

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
         cout << endl;
    }
//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
//     *     
//    * *    
//   * * *   
//  * * * *  
// * * * * * 
}


void print9(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
// *********
//  ******* 
//   *****  
//    ***   
//     *
}
void print10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
// * * * * * * * 
//  * * * * * *  
//   * * * * *   
//    * * * *    
//     * * *     
//      * *      
//       *  
}

void print11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *  
}

void print12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<< "*";
        }
        cout << endl;
    }
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
}

void print13(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){ 
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
// 1
// 01
// 101
// 0101
// 10101
}

void print14(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=1;j<=(2*n)-(2*i);j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
}

void print15(int n){
    int number = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
              cout << char(j+65);
        }
        cout << endl;
    }
// ABCDE
// ABCD
// ABC
// AB
// A
}

void print16(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(i+65);
        }
        cout << endl;
    }
// A
// BB
// CCC
// DDDD
// EEEEE
}

void print17(int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            count++;
            cout << count;

        }
        cout << endl;
    }
// 1
// 23
// 456
// 78910
// 1112131415
}

void print18(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(65+j);
        }
        cout << endl;
    }
// A
// AB
// ABC
// ABCD
// ABCDE
}

void print19(int n){
    for(int i=0;i<n;i++){
        int lastnumber = 64;
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            if(((2*i)/2+1)>j){
                lastnumber = lastnumber + 1;
                 cout << char(lastnumber);
                 
            }
            
            else{
                lastnumber--;
                 cout << char(lastnumber);
            }
        }
        cout << endl;
    }
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
}

void print20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(64+n+j-i);
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
// E    
// DE   
// CDE  
// BCDE 
// ABCDE
}

void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;

    }
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
}

void print22(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
}

void print23(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
// **********
// *        *
// *        *
// *        *
// *        *
// *        *
// *        *
// *        *
// *        *
// **********
}

void print24(int n){
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            int top = i;
            int bottom = (2*n-2)-i;
            int right = (2*n-2)-j;
            int left = j;
            cout << n-min(min(top, bottom), min(right, left));
        }
        cout << endl;
    }
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
}
int main(){
   print1(4);
   print2(5);
   print3(5);
   print4(5);
   print5(5);
   print6(5);
   print7(5);
   print8(5);
   print9(7);
   print10(7);
   print11(5);
   print12(5);
   print13(5);
   print14(10);
   print15(5);
   print16(5);
   print17(5);
   print18(5);
   print19(5);
   print20(10);
   print21(5);
   print22(5);
   print23(10);
   print24(4);
   

    
    return 0;
}