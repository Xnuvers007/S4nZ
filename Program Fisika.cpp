#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main() {

double massa, tinggi, kecepatan, potensial, kinetik, mekanik;
char jawab;

awal:
	cout<<"Program Menghitung Energi Mekanik Suatu Benda"<<endl<<endl;
	
cout<<"Masukan Massa Benda : ";
cin>>massa;

cout<<"Masukan Tinggi Benda : ";
cin>> tinggi;

cout<<"Masukan Kecepatan benda : ";
cin>> kecepatan;

system("color 6");
potensial = massa*9.8*tinggi;
kinetik = massa/2*(kecepatan*kecepatan);
mekanik = potensial + kinetik;

cout<<endl;

cout<<"Energi Potensialnya adalah : "<<potensial<<endl;
cout<<"Energi Kinetiknya adalah : "<<kinetik<<endl;
cout<<"Energi Mekaniknya adalah : "<<mekanik<<endl;
cout<<"\n";

cout<<"==================================================\n";
cout<<"Xnuvers Xploit Xen\n";
cout<<"==================================================\n";
cout<<"\n";

cout<<"Kamu Ingin Mencoba nya lagi ? [Y/N] : ";
cin>> jawab;

if (jawab == 'y' || jawab == 'Y')
{
	goto awal;
}
if (jawab == 'n' || jawab == 'N')
{
	goto akhir;
}
akhir:
	cout<<"Terimakasih Sudah memakai program Ku"<<endl;
	cout<<"Semoga bermanfaat ya Buat kamu"<<endl;
	cout<<"have a nice Day :D ";
	cout<<"\n";
	cout<<"source Code by XnuversXploitXen\n";

system("pause");

getch();
}
