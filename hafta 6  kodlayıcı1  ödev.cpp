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
      cout << "say�lar e�ittir";
     else if (sayi1 > sayi2)
        cout << "birinci sayi b�y�kt�r";
    else
        cout << "ikinci sayi b�y�kt�r";

    return 0;
}
