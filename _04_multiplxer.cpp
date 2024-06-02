#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        int n;
        cin>>n;
        cout << "Case "<<i<<":"; 
        for(int i=1; i<=n; i++){
            if(n%i==0){
                cout <<" " << i;
            }
        }
        cout << endl;
    }
    
    return 0;
}