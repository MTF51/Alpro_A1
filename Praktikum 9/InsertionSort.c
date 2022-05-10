///* Nama File  : InsertionSort.c ///
///* Pembuat    : Mustafa Iswardana - 24060121149117 *///
///* Tanggal    : 8 - 05 - 2022 *///
///* Deskripsi  : Membuat Algoritma Insertion Sort, yaitu mengurutkan sekumpulan data dengan membandingkan semua data mulai dari ke-2 (array index 1) dengan data ke-1 (array index 0) *///
///*              dan mulai dari datanya terus bertambah sampai berapa jumlah sekumpulan data dan dibandingkan datanya sampai data ke-1 *///


#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int array[], int n)
{
    ///Kamus Lokal
    int i;
    int j;
    int temp;

    ///Algoritma
    for (i =1; i < n; i++){
        temp = array[i];
        j = i-1;
        while(j >= 0 && array[j] > temp){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j +1] = temp;
    }
}

int main()
{
    /// Kamus
    int i;
    int n;
    int array[] = {29, 10, 14, 37, 13, 5, 7, 40, 35};

    /// Algoritma
    n = sizeof(array) / sizeof(array[0]);
    InsertionSort(array, n);
    for(i = 0; i < n; i++){
        printf("%d", array[i]);
    }

    return 0;
}

