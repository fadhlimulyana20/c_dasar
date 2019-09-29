#include <stdio.h>

//function to swap
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n){
    int i, j, min_idx;
    for (i=0; i < n-1; i++){
        min_idx = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() 
{ 
    int arr[3];
    int i;
    for (i=0; i<3; i++){
        printf("Masukkan Nilai\t:");
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    selection_sort(arr, n); 
    printf("Nilai tertinggi adalah %d\n", arr[n-1]);
    return 0; 
} 