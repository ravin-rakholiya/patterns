#include <./stdc++.h>
using namespace std;

void getDigit()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << endl;
    cout << "digits are:" << endl;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        cout << lastdigit << endl;
    }
}

void countDigit()
{
    int n, count = 0;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << endl;
    // while(n>0){
    //     n = n/10;
    //     count++;
    // }

    count = int(log10(n) + 1);
    cout << "total digits in number is: " << count << endl;
}

void reverseNumber()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << endl;
    string st = "";
    while (n > 0)
    {
        int lastdigit = n % 10;
        st = st + to_string(lastdigit);
        n = n / 10;
    }
    cout << "Reverse Number is:" << st << endl;
}

void checkPalinrome()
{
    int n, rnumber = 0;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << endl;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        rnumber = (rnumber * 10) + ld;
        n = n / 10;
    }
    cout << rnumber;
    if (dup == rnumber)
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";
}

void checkArmstrongNumber()
{
    int n, sumNumber = 0;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << endl;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        sumNumber = sumNumber + (ld * ld * ld);
        n = n / 10;
    }
    if (sumNumber == dup)
        cout << "Number is Palindrome" << endl;
    else
        cout << "Number is not Palindrome" << endl;
}

void getNumberDivisor()
{
    int n, sumNumber = 0;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "divisors of " << n << " are: " << endl;
    //    for(int i=1;i<=n;i++){
    //         if(n%i==0){
    //             cout << i << endl;
    //         }
    //    }
    vector<int> ve;
    for (int i = 1; i <= sqrt(n); i++)
    {
        
        if (n % i == 0)
        {
            ve.emplace_back(i);
            if (n / i != i)
            {
                ve.emplace_back(n / i);
            }
        }
    }

    // vector<int>::iterator it = ve.sort().begin();
    sort(ve.begin(), ve.end());
    for(auto it:ve) cout << it << endl;
    
}
int main()
{
    // getDigit();
    // countDigit();
    // reverseNumber();
    // checkPalinrome();
    // checkArmstrongNumber();
    getNumberDivisor();
    return 0;
}