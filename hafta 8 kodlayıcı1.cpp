#include <iostream>
using namespace std;

int tek_cift_bul(int p_sayi)
{
    if((p_sayi%2==0))
    {
        return p_sayi/2;
    }
    else
    {
        return p_sayi*p_sayi;
    }
}
int main()
{
    int sayi1,sayi2,sayi3;
    int sonuc;

    sayi1=15;
    sonuc = tek_cift_bul(sayi1);
    cout<<"hesaplanan:"<<sonuc<<endl;


    sayi2=22;
    sonuc = tek_cift_bul(sayi2);
    cout<<"hesaplanan:"<<sonuc<<endl;

    sayi3=7;
    sonuc = tek_cift_bul(sayi3);
    cout<<"hesaplanan:"<<sonuc<<endl;

return 0;
}

