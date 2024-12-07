// Pending:
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
        char c;
        getline(cin,s);
        cin >> c;
        cin.ignore();
        int s_count = 0;
        for(char ch:s){
            if(ch==c){
                s_count++;
            }
        }

        if(s_count>0){
            cout << "Occurrence of '"<< c << "' in '" <<s << "' = " << s_count;
        }
        else{
            cout <<"'"<< c <<"' is not present ";
        }
        cout << endl;
    }
    
    return 0;
}