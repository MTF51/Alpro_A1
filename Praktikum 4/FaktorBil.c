///* Nama File    : FaktorBil.c */
///* deskripsi    : Menampilkan suatu faktor-faktor dari suatu bilanga integer positif sembarang  */
///* Pembuat      : Mustafa Iswardana - 24060121149117 */
///* Tgl Pembuatan: 20 - 02 - 2022 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
   /// Kamus
    int n;
    int i;

   /// Algoritma
    printf("Masukan Nilai N: ");
    scanf("%d", &n);

    if(n<0){            /// Input tidak boleh negatif
        printf("\nN Harus Positif");
    }
    else {
        printf("\nJadi Faktor-faktor nya adalah :\n" );
        for(i=1; i<=n; i++){        /// Inisialisasi i dengan teraversal
            if( n % i == 0){        /// Mencari faktor-faktor dari n
                printf("%d,", i);
            }
        }
    }
    return 0;
}
