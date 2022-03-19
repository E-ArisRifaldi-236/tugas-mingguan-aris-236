// nama : aris rifaldi
// nim : 2100018236


#include <iostream>
using namespace std;
int main ()
{

	int p;
	float i,bb,ba;
	cout << "PROGRAM KONVERSI SUHU" << endl ;	
	do {
	cout << "\n===================================================="<< endl;		
	cout << "PILIHAN MENU : " << endl ;
	cout << "1) Konversi dari C ke F\n" ;
	cout << "2) Konversi dari C ke K\n" ;
	cout << "3) Konversi dari F ke C\n" ;
	cout << "4) Konversi dari F ke K\n" ;
	cout << "5) Konversi dari K ke C\n" ;
	cout << "6) Konversi dari K ke F\n" ;
	cout << "0) Keluar\n" ;
	cout << "\n====================================================" << endl;
	cout << "Masukkan Pilihan Menu = ";
	cin >> p ;		
	if (p == 1){
		cout << "Masukkan Batas Bawah suhu yang ingin di konversi = ";
		cin >> bb ;
		cout << "Masukkan Batas Atas suhu yang ingin di konversi = ";
		cin >> ba ;
		cout << "C \t F" << endl;
		for (i=bb ; i<= ba; i++){
			cout << i << " \t " << i*9/5+32 ;
			cout << endl ;
		}
		cout << endl;			
	}
	else if (p == 2){
		cout << "Masukkan Batas Bawah suhu yang ingin di konversi = ";
		cin >> bb ;
		cout << "Masukkan Batas Atas suhu yang ingin di konversi = ";
		cin >> ba ;
		cout << "C \t K" << endl;
		for (i=bb ; i<= ba; i++){
			cout << i << " \t " << i+273 ;
			cout << endl ;
		}			
	}
	else if (p == 3){
		cout << "Masukkan Batas Bawah suhu yang ingin di konversi = ";
		cin >> bb ;
		cout << "Masukkan Batas Atas suhu yang ingin di konversi = ";
		cin >> ba ;
		cout << "F \t C" << endl;
		for (i=bb ; i<= ba; i++){
			cout << i << " \t " << (i-32)*5/9 ;
			cout << endl ;
		}
	}
	else if (p == 4){
		cout << "Masukkan Batas Bawah suhu yang ingin di konversi = ";
		cin >> bb ;
		cout << "Masukkan Batas Atas suhu yang ingin di konversi = ";
		cin >> ba ;
		cout << "F \t K" << endl;
		for (i=bb ; i<= ba; i++){
			cout << i << " \t " << (i-32)*5/9 +273 ;
			cout << endl ;
		}
	}
	else if (p == 5){
		cout << "Masukkan Batas Bawah suhu yang ingin di konversi = ";
		cin >> bb ;
		cout << "Masukkan Batas Atas suhu yang ingin di konversi = ";
		cin >> ba ;
		cout << "K \t C" << endl;
		for (i=bb ; i<= ba; i++){
			cout << i << " \t " << i-273 ;
			cout << endl ;
		}
	}
	else if (p == 6){
		cout << "Masukkan Batas Bawah suhu yang ingin di konversi = ";
		cin >> bb ;
		cout << "Masukkan Batas Atas suhu yang ingin di konversi = ";
		cin >> ba ;
		cout << "K \t F" << endl;
		for (i=bb ; i<= ba; i++){
			cout << i << " \t " << (i-273)*9/5 +32 ;
			cout << endl ;
		}
    }
    else if (p == 0){
		cout << "Keluar Dari Program ";
	}
	else {
		cout << "Mohon maaf data yang dimasukan tidak tersedia" ;		
		}
	} while ( p != 0);
	
	return 0;
}

