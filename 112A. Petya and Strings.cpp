/******************************************************************************

112A. Petya and Strings
https://codeforces.com/problemset/problem/112/A

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(auto &x:a) x = tolower(x);
    for(auto &x:b) x = tolower(x);
    
    int x = a.compare(b);
    
    if(x<0) cout << "-1";
    else if(x==0) cout << "0";
    else cout << "1";

    return 0;
}
