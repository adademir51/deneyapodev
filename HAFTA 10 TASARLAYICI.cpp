#include <iostream>
using namespace std;
 class Sunucu{
 public:
     string ad;
     string soyad;
     string sehir;
     int puan;
     Sunucu (string a_ad,string a_soyad,string a_sehir,int a_puan) {

        ad=a_ad;
        soyad=a_soyad;
        sehir=a_sehir;
        puan=a_puan;
     }
 };

 int main(){

    Sunucu sunucu1("su","saglik","istanbul",95);
    Sunucu sunucu2("emre","kocaman","bursa",55);
    Sunucu sunucu3("elif","altýn","ankara",85);

    cout<<sunucu1.ad<<"  "<<sunucu1.soyad<<"  "<<sunucu1.sehir<<"  "<<sunucu1.puan<<endl;
    cout<<sunucu2.ad<<"  "<<sunucu2.soyad<<"  "<<sunucu2.sehir<<"  "<<sunucu2.puan<<endl;
    cout<<sunucu3.ad<<"  "<<sunucu3.soyad<<"  "<<sunucu3.sehir<<"  "<<sunucu3.puan<<endl;

    return 0;
     }
