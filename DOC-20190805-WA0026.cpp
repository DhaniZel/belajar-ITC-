#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	string nama,username,pilihan1;
	string pw1,idp1;
	int saldo1,s1,item1,token1;
	
	saldo1=100000000000;
	cout<<"\t===============================\n";
	cout<<"\t=Program kasir penjualan pulsa=\n";
	cout<<"\t===============================\n";
	
	cout<<"Masukkan nama anda: ";
	getline(cin,nama);
	system("cls");
	
	
	cout<<"Hello,selamat datang "<<nama;
	
	cout<<"\n\t=========================\n";
	cout<<"\t= HALAMAN LOGIN R_STORE =\n";
	cout<<"\t=========================\n";
	login:
	cout<<"USERNAME : ";cin>>username;
	    if(username=="Dhani"){
	 	goto pass1;
	 }
	    
	 else {
	 	cout<<"Username salah\n";
	 	goto login;
	 }
	 
	 pass1:
	 	cout<<"Masukkan password anda :";
	 	cin>>pw1;
	 	
	 	if(pw1=="1234"){
	 		system("cls");
	 		goto menu;
		 }
		else{
			cout<<"Password salah \n";
			goto pass1;
		}
	
	menu:
		cout<<"SElAMAT DATANG "<<nama<<" ANDA LOGIN SEBAGAI USER 1\n";
		cout<<"\t\n=========================================\n\t";
		cout<<"\t\n==      Selamat datang di R_store      ==\t\n";
		cout<<"\t\n=========================================\n\t";
		cout<<"\t\n==Daftar barang elektonik yang tersedia==\n\t";
		cout<<"\t\n==1.TOKEN LISTRIK(20,50,100,500)       ==\n\t";
		cout<<"\t\n==2.Pulsa all operator                 ==\n\t";
		cout<<"\t\n==3.Informasi sisa saldo anda          ==\n\t";
		cout<<"\t\n=========================================\n\t";
		
		cout<<"\t\nPIlIH MENU YANG INGIN ANDA PILIH :";cin>>item1;
		system("cls");
		
		if(item1,"1"){
			cout<<"Masukkan nomer id pelanggan :";cin>>idp1;
			cout<<"Masukkan nominal token yang anda pilih (20,50,100,500) :";cin>>token1;
			
			if(token1,"20"){
				cout<<"\n\t================================\n";
				cout<<"\n\t==ID pelanggan :"<<idp1<<"\n";
				cout<<"\n\t==NOMINAL BARANG : 20000      ==\n";
				cout<<"\n\t==Biaya admin    : 2500       ==\n";
				cout<<"\n\t==Total biaya    : 22500      ==\n";
				cout<<"\n\t================================\n";
				pembayaran:
				cout<<"Lanjut ke pembayaran ?(Y/N) :";cin>>pilihan1;
				if (pilihan1,"Y|y"){
						system("cls");
						cout<<"Transaksi sebesar 22500 dengan nomer id pelanggan "<<idp1<<" telah selesai\n";
						s1=saldo1-22500;
						cout<<"sisa saldo anda adalah "<<s1;
						
						cout<<"apakah anda ingin kembali ke menu?(y/n) ";cin>>pilihan1;
						if(pilihan1,"Y|y"){
							system("cls");
							goto menu;
						}else{
							return 0;
						}
					}
		
	    	if(token1,"50"){
				cout<<"\n\t================================\n";
				cout<<"\n\t==ID pelanggan :"<<idp1<<"\n";
				cout<<"\n\t==NOMINAL BARANG : 50000      ==\n";
				cout<<"\n\t==Biaya admin    : 2500       ==\n";
				cout<<"\n\t==Total biaya    : 52500      ==\n";
				cout<<"\n\t================================\n";
				pembayaran1:
				cout<<"Lanjut ke pembayaran ?(Y/N) :";cin>>pilihan1;
				if (pilihan1,"Y|y"){
						system("cls");
						cout<<"Transaksi sebesar 52500 dengan nomer id pelanggan "<<idp1<<" telah selesai\n";
						s1=saldo1-52500;
						cout<<"sisa saldo anda adalah "<<s1;
					}
				}else {
					goto menu;
				}
			}else{
				system("cls");
				goto menu;
			}
		
		
	
	
	}
return 0;
}
