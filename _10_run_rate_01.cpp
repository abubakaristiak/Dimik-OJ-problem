// Pending
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int total_run, current_run, balls_left;
        cin >> total_run >> current_run >> balls_left;

        double over_bowled = (300.0-balls_left)/6.0;
        double bortoman_run_rate = (double)current_run/over_bowled;

        double overs_remainning = balls_left/6.0;
        double kakito_run_rate = (double)(total_run+1 - current_run)/overs_remainning;

        cout << fixed << setprecision(2) << bortoman_run_rate <<" "<<kakito_run_rate << endl;

        
    }
    
    return 0;
}


/*
NOTES
r1 = 300, r2 = 294, B = 6
তাহলে:

ওভার সংখ্যা হিসাব করতে হবে: (300 - 6) / 6 = 49.0
বর্তমান রানের হার হবে: 294 / 49.0 = 6.00
বাকি ওভার সংখ্যা হবে: 6 / 6 = 1.0
কাঙ্ক্ষিত রানের হার হবে: (300 + 1 - 294) / 1.0 = 7.00
*/