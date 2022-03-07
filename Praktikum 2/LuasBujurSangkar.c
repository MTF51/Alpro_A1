/*  Nama File           : LuasBujurSangkar   */
/*  Deskripsi           : Membuat Program Luas Bujur Sangkar  */
/*  Pembuat             : Mustafa Iswardana - 24060121149117 */
/*  Tanggal Pembuatan   : 6 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int Sisi;
    int Luas;

/* Algoritma */
    printf("Masukan sisi : ");
    scanf("%d", &Sisi);
    Luas = Sisi*Sisi;

    printf("Sisi = %d\n", Sisi);
    printf("Luas Bujur Sangkar = %d", Luas);

    return 0;
}
