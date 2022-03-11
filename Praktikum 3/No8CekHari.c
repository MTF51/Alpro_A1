///* Nama File    : No8CekHari */
///* Deskripsi    : Mengecek nama-nama hari dari masukan nomor hari dari 1 hingga 7.  */
///* Pembuat      : Mustafa Iswardana - 24060121149117  */
///* Ttg Pembuatan: 11 Maret 2022 */



#include <stdio.h>
#include <stdlib.h>

int main()
{
/// Kamus
    int d;

/// Algoritma
    printf("Masukan Angka Hari: ");
    scanf("%d", &d);

    if( d >= 1 && d <= 7){
        if (d == 1){
            printf("Senin");
        }
        else if (d == 2){
            printf("Selasa");
        }
        else if (d == 3){
            printf("Rabu");
        }
        else if (d == 4){
            printf("kamis");
        }
        else if (d == 5){
            printf("jum'at");
        }
        else if (d == 6){
            printf("Sabtu");
        }
        else{
            printf("Minggu");
        }
    }
    else {
        printf("Masukan nomor Hari tidak tepat");
    }
    return 0;
}
