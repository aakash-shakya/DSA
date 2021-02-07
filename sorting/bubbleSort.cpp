#include<bits/stdc++.h>
#define max 100

int main(){

    int arr[max],n;
    void bubbleSort(int arr[max],int m);

    printf("How many elements you want to sort? ");
    scanf("%d",&n);
    if (n > max){
        printf("no. of elements exceeds than max capacity by %d", max-n);
        exit;
    }
    else{
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
    }

    /* bubble sort */
    
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}

void bubbleSort(int arr[max],int n){
    int c,d,t;
    for (c = 0 ; c < n - 1; c++) {
        for (d = 0 ; d < n - c - 1; d++) {
            if (arr[d] > arr[d+1]) {
                /* Swapping */
                t         = arr[d];
                arr[d]   = arr[d+1];
                arr[d+1] = t;
      }
    }
  }
}