#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out ("oszto.out");
    int N, t[100], i, atlag=0, max=-100;
    in >> N;
    for (i=0; i<N; i++)
    {
        in>> t[i];
        if(t[i]>max)
        {
            max=t[i];
        }
        atlag+=t[i];
    }
    atlag/=N;
    cout << atlag << endl;
    cout << max << endl;
    int S=0;
    int temp=max;
    int szam;
    cout << temp << endl;
    if(max!=0){
    while(max>0)
    {
        max=max/10;
        S+=1;
    }
    cout << S <<endl;
    int hatvany= pow(10,S);
     szam=atlag*hatvany+temp;
    }

    else{
            szam= atlag*10;
    }

    cout << szam;
    for (int j=szam/2; j>0; j--)
    {
        if (szam%j==0)
        {
            out << j;
            break;
        }
    }
    return 0;
}
