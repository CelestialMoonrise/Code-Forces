/******************************************************************************

282A. Bit++
https://codeforces.com/problemset/problem/282/A

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n, x=0;
    cin >>n;
    string s;
    
    while(n>=0){
        getline(cin, s);
        if(s=="X++"||s=="++X"||s=="+X+") x+=1;
        else if(s=="X--"||s=="--X"||s=="-X-") x-=1;
        
        n--;
    }
    
    cout << x;

    return 0;
}
