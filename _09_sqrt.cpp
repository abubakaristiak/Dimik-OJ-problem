#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double root = sqrt(n);
        
        if(root == (int)root){
            cout << "YES" << endl;        
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}