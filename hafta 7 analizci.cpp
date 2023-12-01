#include <iostream>

using namespace std;

int main()
{

   int notlar[12]={90,68,87,80,50,100,70,98,49,87,69,95};
   int toplam;
   double ortalama;
   int a;
   for ( a=0; a<12; a++)
   {
      cout <<a+1<<". ogrencinin notu :"<<notlar[a]<<endl;
      toplam=toplam+notlar[a];
        cout <<"Anlýk toplam :"<<toplam<<endl;
   }

    cout <<endl<<"Sonuc toplamý :"<<toplam<<endl;
    ortalama=toplam/12;
    cout<<endl<<"ortalama:"<<ortalama<<endl;

   return 0;

   }





