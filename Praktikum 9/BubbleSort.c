///* Nama File  : BubbleSort.c ///
///* Pembuat    : Mustafa Iswardana - 24060121149117 *///
///* Tanggal    : 9 - 05 - 2022 *///
///* Deskripsi  : mengurutkan dengan membandingkan dua data yang berdekatan dan menukarnya sampai urutan yang diinginkan *///

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int array[], int n)
{
    ///Kamus Lokal
    int i;
    int j;
    int temp;

    ///Algoritma
    for (i =0; i < n-1; i++){
    	for (j = 0; j < n -i -1; j++){
    		if (array[j] > array[j+1]){
    			temp = array[j];
    			array[j] = array[j +1];
    			array[j+1] = temp;
    		}
    	}
    }
}

int main()
{
    /// Kamus
    int i;
    int n;
    int *array;

    /// Algoritma
    scanf("%d", &n);
    array = (int*) malloc(n* sizeof(int));
    for(i=0; i<n; i++){
    	scanf("%d", &array[i]);
    }
    BubbleSort(array, n);
    printf("Sorted Array: \n");
    for(i = 0; i<n; i++)
    	
        printf("%d", array[i]);
    return 0;
}

