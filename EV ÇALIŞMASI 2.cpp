#include <iostream>
using namespace std;

int karecevrehesap(int p_a)
{
    int cevre;

    cevre = p_a*4;

    return cevre;
}

int dikcevrehesap(int p_1,int p_2)
{
    int cevre;

    cevre = p_1+p_1+p_2+p_2;

    return cevre;
}

int main()
{
    int d_k;
    int d_s;
    cout<<"karenin kenar�n� giriniz: ";
    cin>>d_k;
    d_s= karecevrehesap (d_k);
    cout<<"sonu�: "<<d_s<<endl;

    int d_kk;
    int d_uk;
    cout<<"dikd�rtgenin uzun kenar�n� giriniz:";
    cin>>d_uk;
    cout<<"dikd�rtgenin k�sa kenar�n� giriniz:";
    cin>>d_kk;
    d_s=dikcevrehesap(d_uk,d_kk);
    cout<<"sonu�:"<<d_s;
    return 0;

}
