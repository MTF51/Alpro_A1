///* Nama File    : No9CekBulan */
///* Deskripsi    : Mengecek nama-nama bulan dengan masukan nomer Bulan 1 sampai 12. */
///* Pembuat      : Mustafa Iswardana - 24060121149117 */
///* Ttg Pembuatan: 11 Maret 2022 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
/// Kamus
    int m;

/// Algoritma
    printf("Masukan Angka Bulan: ");
    scanf("%d", &m);

    if( m >= 1 && m <= 12){
        if (m == 1){
            printf("Januari");
        }
        else if (m == 2){
            printf("Februari");
        }
        else if (m == 3){
            printf("Maret");
        }
        else if (m == 4){
            printf("April");
        }
        else if (m == 5){
            printf("Mei");
        }
        else if (m == 6){
            printf("Juni");
        }
        else if (m == 7){
            printf("Juli");
        }
        else if (m == 8){
            printf("Agustus");
        }
        else if (m == 9){
            printf("September");
        }
        else if (m == 10){
            printf("Oktober");
        }
        else if (m == 11){
            printf("November");
        }
        else {
            printf("Desember");
        }
    }
    else {
        printf("Masukan nomor Bulan tidak tepat");
    }
    return 0;
}
