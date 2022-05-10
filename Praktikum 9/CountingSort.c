///* Nama File  : CountingSort.c ///
///* Pembuat    : Mustafa Iswardana - 24060121149117 *///
///* Tanggal    : 9 - 05 - 2022 *///
///* Deskripsi  : Mengurutkan dengan cara menghitung jumlah kemunculan dari setiap data yang berada di dalam array *///


#include <stdio.h>
#include <stdlib.h>

void CountingSort(int array1[], int n, int max)
{
    ///Kamus Lokal
    int i;
    int j;
    int count[50] = {0};

    ///Algoritma
    for (i =0; i < n; i++)
    	count[array1[i]] = count[array1[i]]+1;
    for(i=0; i<=max; ++i)
    	for(j=1; j<=count[i]; ++j)
    		printf("%d ", i);
}
    	


int main()
{
    /// Kamus
    int i;
    int n;
    int *array;
    int max=0;
    
    /// Algoritma
    scanf("%d", &n);
    array = (int*) malloc(n* sizeof(int));
    for(i=0; i<n; i++){
    	scanf("%d", &array[i]);
    }
    printf("Array Sebelum Disorting: ");
    for(i=0; i<n; i++){
    	if(array[i] > max)
    		max = array[i];
    	printf("%d ", array[i]);
    }
    printf("\nNilai Max : %d\n", max);
    
    printf("\nArray Setelah Disorting: ");
    CountingSort(array, n, max);
    
    return 0;
}

