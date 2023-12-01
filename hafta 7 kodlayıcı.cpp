#include <iostream>

using namespace std;

int main()
{

   int ogr_sira[12]={1,3,5,7,11,9,12,10,2,4,6,8};
   int notlar[12][2];
   int a;
   for ( a=0; a<12; a++)
    for(int b=0; b<2; b++)
   {
      cout <<ogr_sira[a]<<"nolu ogrenci icin"<<b+1<<". sözlü notunu girin :";
      cin >>
      notlar [a][b];
   }

   return 0;

   }





