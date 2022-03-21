///* Nama File    : CekPrima.c */
///* deskripsi    : Mencari tau apakah sebuah bilangan prima atau bukan dari suatu masukan integer positif sembarang, */
///*                Bilangan Prima merupakan bilangan yang jumlah faktornya hanya 2, yaitu 1 dan dirinya sendiri */
///* Pembuat      : Mustafa Iswardana - 24060121149117 */
///* Tgl Pembuatan: 20 - 03 - 2022 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
   /// Kamus
    int n;
    int i, j;

   /// Algoritma
    printf("Masukan Nilai N : ");
    scanf("%d", &n);

    if(n<0){
                                /// input tidak boleh negatif
        printf("\nN Harus Positif\n");
    }
    else{                       /// n>o, inputan positif
        i = 1;                  /// inisialisasi i = 1
        j = 0;                  /// inisialisasi j = 0
        do{                     /// Perulangan
            if(n % i == 0){     /// mencari faktor faktor dari n
                j ++;           /// akan bertambah 1 untuk setiap faktor n
            }
        i++;
        }while(i<=n);{
            if(j == 2){         /// Bilangan Prima adalah Bilangan yang hanya memiliki 2 Faktor yaitu, 1 dan dirinya sendiri
                printf("\nN : %d Adalah Bilangan Prima\n", n);
            }
            else{               /// Jika jumlah faktor dari N tidak sama dengan 2 maka bukan bilangan prima.
                printf("\nN : %d Adalah Bukan Bilangan Prima\n", n);
            }
        }
    }
   return 0;
}
