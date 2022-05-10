///* Nama File  : SelectinSort.c ///
///* Pembuat    : Mustafa Iswardana - 24060121149117 *///
///* Tanggal    : 8 - 05 - 2022 *///
///* Deskripsi  : untuk mengurutkan data dengan membandingkan semua data lalu setelah nilainnya ditemukan barulah dilakukan pertukaran nilai dan Nilai yang sudah ditetapkan tidak akan dibandingkan lagi

#include <stdio.h>
#include <stdlib.h>

void SelectinSort(int array[], int n)
{
    ///Kamus Lokal
    int i;
    int j;
    int min;
    int temp;

    ///Algoritma
    for (i =0 ; i < n-1 ; i++){
    	min = i;
    	for (j =i+1; j< n; j++){
    		if(array[j] < array[min]){
    			min = j;
    		}
		}
        temp = array[min];
        array[min] = array[i];
        array[i] < temp;
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
    SelectinSort(array, n);
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

