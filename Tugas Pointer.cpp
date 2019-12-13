#include <iostream>
using namespace std;


int main()
{
cout<<"\t\n\t(Program C++ Pointer)\n\n\n";
cout<<"\t\n\tOLEH  ";
cout<<"\t\n\tNama  : IMAM ARIEF AL BAIHAQY";
cout<<"\t\n\tProdi : D4 MANAJEMEN INFORMATIKA";
cout<<"\t\n\tNIM   : 19051397006\n\n\n";


int nilaiArray[5] = {2,5,4,6,7};
int *pointerArray;
pointerArray = nilaiArray;
cout<<"Nilai pada elemen 0 nilaiArray adalah = "<<nilaiArray[0]<<endl;
cout<<"Nilai pada elemen 0 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
pointerArray++; // naikan alamat yang ditunjuk pointer sejauh 1 integer
*pointerArray = 10; //Ubah nilai elemen 1 array (nilaiArray) menjadi 10
cout<<"Nilai pada elemen 1 nilaiArray adalah = "<<nilaiArray[1]<<endl;
cout<<"Nilai pada elemen 1 nilaiArray (Pointer) adalah = "<<*pointerArray<<endl;
pointerArray = nilaiArray; //kembalikan pointer pada elemen pertama
cout<<endl;
cout<<"Akses nilai semua array dengan pointer dan looping for"<<endl;
for (int i=0; i<5; i++){
 cout<<"Nilai indeks ["<<i<<"] adalah = "<<*(pointerArray+i)<<endl;
}
return 0;
}
