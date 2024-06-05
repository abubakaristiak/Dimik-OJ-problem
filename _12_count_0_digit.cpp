// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>> t;
    
//     while (t--)
//     {
//         int n;
//         cin >>n;
//         long long int fact =1;
//         for(int i=1; i<=n;i++){
//             fact = fact*i;
//         }
//         string s = to_string(fact);
    
//         int count =0; 
//         for(int i=0; i<s.length(); i++){
//             if(s[i]=='0'){
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int count_0_digit_at_the_end_of(int n){
    int count = 0;
    for(int i=5; n/i >=1; i*=5){
        count +=n/i;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        cout << count_0_digit_at_the_end_of(n) << endl;
    }
    
    return 0;
}
