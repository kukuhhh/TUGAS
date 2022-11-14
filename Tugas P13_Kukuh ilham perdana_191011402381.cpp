#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char kode,pembeli[30],input,nama[30];
	int harga,jumlah,total,jumtotal,jumbayar,kembalian,potongan;

	awal:
	cout<<"            CUAN ICE CREAM"<<endl;
	cout<<"========================================="<<endl;
	cout<<" Input Nama Pembeli : "; cin >> pembeli;
	cout<<" Pilihan Es Krim Yang Tersedia : "<<endl;
	cout<<" 1  Chocolate "<<endl;
	cout<<" 2  Strawberry "<<endl;
	cout<<" 3  Vanila "<<endl;
	cout<<" Es Krim Yang Dipilih : ";cin>>kode;
	cout<<"\n Jumlah Beli : "; cin>>jumlah;

	if(kode=='1')
	{
		strcpy(nama,"Chocolate");
		harga=15000;

	}
	else if(kode=='2')
	{
		strcpy(nama,"Strawberry");
		harga=20000;
		
	}else if(kode=='3')
	{
		strcpy(nama,"Vanila");
		harga=25000;
		
	}else
	{
		cout << "kode yang anda masukan salah";
		exit(0);
	}


	cout<<" \n\n========================================="<<endl;
	cout<<" Struk Pembayaran "<<endl;
	cout<<" ========================================="<<endl;
	cout<<" Nama Pembeli : "<<pembeli<<endl;
	cout<<" Nama Es Krim : " << nama << endl;
	cout<<" Harga : "<<harga<<endl;
	cout<<" Jumlah : "<<jumlah<<endl;
	total=harga*jumlah;
	
	cout<<" Total : "<<total<<endl;
	
	if (total >40000 && total<=49999)
	{
		potongan=0.05*total;
	}
	else if (total>=50000)
	{
		potongan=0.1*total;
	}else
	{
		potongan=0;
	}
	
	cout<<" Potongan : "<<potongan<<endl;
	cout<<" ========================================="<<endl;
	jumtotal=total-potongan;
	cout<<" Total Keseluruhan : "<<jumtotal<<endl;
	cout<<" Uang Bayar : ";cin>>jumbayar;
	kembalian=jumbayar-jumtotal;
	cout<<" Uang Kembali : "<<kembalian<<endl;
	cout<<" ========================================="<<endl;
	cout<<" Mau Input Lagi [Y/N]? : ";cin>>input;

	if(input=='Y'||input=='y')
	{
		goto awal;
	}else
	{
		exit(0);
	}
	
	return 0;
}
