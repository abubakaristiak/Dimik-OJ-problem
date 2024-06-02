#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        
        stringstream ss;
        ss << s;
        string word;
        int count =0;
        while (ss>>word)
        {
            count++;

        }
        cout << count << endl;
    }
    
       
    return 0;
}