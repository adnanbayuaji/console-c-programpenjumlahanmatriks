/* PROGRAM PENJUMLAHAN_MATRIKS*/
//Menjumlahkan matriks dengan ordo matriks dan nilai dari matriks merupakan inputan user)//
#include <stdio.h>

main(){
	
	int a;				// a menyimpan ordo baris A
	int b;				// b menyimpan ordo kolom A
	int c;				// c menyimpan ordo baris B
	int d;				// d menyimpan ordo kolom B
	int i;				// i pencacah baris
	int j;				// j pencacah kolom
	int k;				// k pencacah untuk proses penjumlahan
	int m1[100][100];	// m1[a][b] menyimpan nilai ordo A
	int m2[100][100];	// m1[c][d] menyimpan nilai ordo B
	int m3[100][100];	// m1[a][d] menyimpan nilai ordo C
	char ulang;			// variabel untuk opsi pengulangan program		
	do
	{
		system("cls");	// membersihkan layar
		printf("PROGRAM_PENJUMLAHAN_MATRIKS");
		printf("\n\n Ordo Matriks A\n");
		printf("\n\n - Baris : "); scanf("%i", &a);
		printf("\n\n - Kolom : "); scanf("%i", &b);
		printf("\n\n Ordo Matriks B\n"); 
		printf("\n\n - Baris : "); scanf("%i", &c);
		printf("\n\n - Kolom : "); scanf("%i", &d);
		printf("\n\n___________________________");
		printf("\n\n A[%i][%i] + B[%i][%i]", a, b, c, d);
		if(b==c){ // validasi untuk menyamakan kolom ordo A = baris ordo B
			printf(" = C[%i][%i]\n", a, d);
			printf("___________________________\n");
			
			// Isi Matriks 1
			printf("\n\n Isi Matriks A\n");
			for(i=0;i<a;i++){
				for(j=0;j<b;j++){
					printf("\n\n Kolom [%i][%i] : ", i, j);
					scanf("%i", &m1[i][j]);
				}
			}
			printf("___________________________\n");
			
			// Isi Matriks 2
			printf("\n\n Isi Matriks 2\n");
			for(i=0;i<c;i++){
				for(j=0;j<d;j++){
					printf("\n\n Kolom [%i][%i] : ", i, j);
					scanf("%i", &m2[i][j]);
				}
			}	
			// Proses Perjumlahan
			for(i=0;i<a;i++){
				for(j=0;j<d;j++){
					for(k=0;k<b;k++){
						m3[i][j]= m1[i][j]+m2[i][j];
					}
				}
			}
			printf("___________________________\n");
			
			// menampilkan Matriks
			printf("\n\n Matrik A: \n\n");
			for(i=0;i<a;i++){
				for(j=0;j<b;j++){
					printf(" %i\t", m1[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Matrik B: \n\n");
			for(i=0;i<c;i++){
				for(j=0;j<d;j++){
					printf(" %i\t", m2[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Hasil Penjumlahan Matriks A dan B Adalah : \n\n");
			for(i=0;i<a;i++){
				for(j=0;j<d;j++){
					printf(" %i\t", m3[i][j]);
				}
				printf("\n");
			}
		}
		else 
		{
			printf("\n\n Maaf Jumlah Kolom Pada Matrik A Harus Sama Dengan Jumlah Baris Pada Matrik B");
		}
		fflush (stdin); // sebagai tempat sampah untuk menyimpan pergantian tipe data
		printf("\n\n Ulangi[y/t] ? "); scanf ("%s", &ulang);
	}
	while (ulang == 'y'|| ulang == 'Y'); // perulangan dimana terdapat variabel ulang yang berisi karakter y untuk mengulang program
}

