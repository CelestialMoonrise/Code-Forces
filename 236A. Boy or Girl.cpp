/******************************************************************************

236A. Boy or Girl
https://codeforces.com/problemset/problem/236/A

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    string s, res;
    getline(cin, s);
    
    for(int i=0; i<s.size(); i++){
        if(res.find(s[i])>s.size()) res += s[i];
    }
    
    if(res.size()%2!=0) cout << "IGNORE HIM!"; //s might not be s later!!!
    else cout << "CHAT WITH HER!";

    return 0;
}
