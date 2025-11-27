#include <iostream>
using namespace std;
 

int main() 
{
	int n;
     
	 cout << "Masukan jumlah baris : ";
	 cin >> n; // jumlah baris yang dimasukan

	 for (int i = 0; i < n; i++) // i = baris yang dimulai dari 0
	 {  
		for (int spasi = 0; spasi < n - i; spasi++) // memberi spasi agar membentuk segitiga
		{
			cout << " ";
		}

		int val = 1; // val = 1 angka pertama setiap baris 1
		for (int j = 0; j <= i; j++) 
		{
			cout << val << " ";
			val = val * (i - j) / (j + 1); // rumus untuk menghitung angka selanjutnya
		}
		cout << endl;
	 }
	 return 0;
}

	