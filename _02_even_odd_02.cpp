#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cin.ignore();
        int len = s.length();
        if(s[len-1]%2==0){
            cout << "even" << endl;
        }
        else{
            cout << "odd" << endl;
        }
        

    }
    
    return 0;
}

