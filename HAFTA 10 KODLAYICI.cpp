#include <iostream>
using namespace std;
 class Pazarlik {
 public:
    string ad;
    float eski_f;
    float yeni_f;

    Pazarlik (string a_ad,float a_eski_f,float a_yeni_f) {

        ad= a_ad;
        eski_f= a_eski_f;
        yeni_f= a_yeni_f;
     }

    void goster(){
         cout<<ad<<"  "<<eski_f <<"  "<<yeni_f <<endl;
    }
    void indirim(){
         cout<<"indirim="<<eski_f-yeni_f<<endl;
    }

 };



 int main(){

    Pazarlik n1("ahmet",100,75);
    n1.goster();
    n1.indirim();

    Pazarlik n2("elif",800,600);
    n2.goster();
    n2.indirim();

        return 0;
     }
