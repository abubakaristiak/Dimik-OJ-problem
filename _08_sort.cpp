// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for(int k=1; k<=t; k++)
//     {
//         int n=3;
//         int ar[n];
//         for(int i=0; i<3; i++){
//             cin >> ar[i];
//         }
//         for(int i=0; i<n-1;i++){
//             for(int j=i+1; j<n; j++){
//                 if(ar[i] > ar[j]){
//                     swap(ar[i], ar[j]);
//                 }
//             }
//         }
//         cout << "Case "<< k <<": ";
//         for(int i=0; i<n; i++){
//             cout << ar[i] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int k=1; k<=t; k++){
        int ar[3];
        for(int i=0; i<3; i++)
        {
            cin >> ar[i];
        }

        sort(ar,ar+3);
        cout << "Case " <<k<<": ";
        for(int i=0; i<3; i++){
            cout << ar[i];
            if(i<2){
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}