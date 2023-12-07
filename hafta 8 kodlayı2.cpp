#include <iostream>
using namespace std;

void iki_ekle(int p_sayi1,int p_sayi2)
{
    int sayi;

    sayi = p_sayi1;
    for(int i=0;i<p_sayi2;i++)
    {
        sayi = sayi + 2;
        cout<<sayi<<endl;
    }

}

int main()
{

    iki_ekle(3,5);

    return 0;
}
