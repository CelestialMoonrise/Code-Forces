/******************************************************************************

71A. Way Too Long Words
Input
The first line contains an integer n (1<=n<=100). Each of the following n lines contains one word. 
All the words consist of lowercase Latin letters and possess the lengths of from 1-100 characters.

Output
Print n lines. 
first letter + amount of letters between + last letter
The i-th line should contain the result of replacing of the i-th word from the input data.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >>n;
    string w;
    for(int i=0; i<n; i++){
        cin >> w;
        if(w.length()>10){
            int c=0;
            cout << w[0] << w.length()-2 <<w[w.length()-1] << endl;
        }
        else{
            cout << w << endl;
        }
    }

    return 0;
}
