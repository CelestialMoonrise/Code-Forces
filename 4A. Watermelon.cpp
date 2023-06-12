/******************************************************************************

4A. Watermelon
Input
The first (and the only) input line contains integer number w (1<=w<=100) — the weight of the watermelon bought by the boys.

Output
YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos
NO in the opposite case.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int w=0;
    cin >> w;
    if(w%2==0 && w>2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
