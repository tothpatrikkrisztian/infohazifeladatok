#include <iostream>

using namespace std;

int main()
{
    int szam, szj;
    int ujszam=0;

    cout << "szam=";
    cin >> szam;
    int tmp=szam;
    while (szam>0){
        szj=szam%10;
        szam=szam/10;
        ujszam=ujszam*10+szj;
    }
     cout << " pall= " <<ujszam;
     if(tmp == ujszam){
        cout << " A szam pallindrom.";
     }
    else{
        cout << " A szam nem pallindrom.";
    }

    return 0;
}
