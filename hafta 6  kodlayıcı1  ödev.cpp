#include <iostream>

using namespace std;

int main()
{
    int sayi1,sayi2;
    cout<<"Birinci sayiyi giriniz: ";
    cin >> sayi1;

    cout<<"ikinci sayiyi giriniz: ";
    cin >> sayi2;

    if(sayi1==sayi2)
      cout << "sayılar eşittir";
     else if (sayi1 > sayi2)
        cout << "birinci sayi büyüktür";
    else
        cout << "ikinci sayi büyüktür";

    return 0;
}
