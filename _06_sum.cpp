#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int first_digit = n/10000;
        int last_digit = n%10;
        int sum = first_digit+last_digit;
        cout << "Sum = " <<sum << endl;
    }
    
    return 0;
}