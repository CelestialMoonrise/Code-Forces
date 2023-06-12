/******************************************************************************

1A. Theatre Square

Input
The input contains three positive integer numbers in the first line: n,m and a (1≤n,m,a≤10^9).

Output
Write the needed number of flagstones.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, res;
    cin >> n >> m >> a;
    
    res = (n + a - 1) / a * ((m + a - 1) / a);
    cout << res;

    return 0;
}
