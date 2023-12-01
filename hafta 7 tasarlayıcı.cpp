#include <iostream>
#include <ctime>

using namespace std;

int main()
 {
     int girilensayi;
     int rnd;
     int sayi2;


     cout<<" sayi giriniz:";
     cin>>girilensayi;

     if(girilensayi>10 and girilensayi<20)
     {

        for(int i=0;i<2;i++)
        {
            srand(time(0)+i);
            rnd=10+rand()%(10);
            if (girilensayi==rnd)
            {
                sayi2=rnd*2;
                cout<<1+1<<". de sayiyi bulduk"<<rnd<<endl;
                cout<<"sayının 2 katı1="<<sayi2;
            }
            else {
                cout<<i+1<<" de bulamadik. tekrar dene.tutdugum sayi ="<<rnd<<endl;

            }


        }
    }
    else
    {
         cout<<"hatalı sayı girdiniz ";

    }
 }
