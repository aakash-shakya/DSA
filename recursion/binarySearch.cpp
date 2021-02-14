#include<bits/stdc++.h>

int main(){
    int arr[10]={12,13,15,18,19,20,25,26,29,31};
    int result,target;
    int lower,upper;

    int binarySearch(int arr[],int target,int high, int low);
    
    result = binarySearch(arr,target=13,lower=0,upper=9);

    printf("target is in index %d\n",result);
    return 0;
}

int binarySearch(int arr[],int target,int low, int high){
    int mid;
    bool found = false;
    if(low > high){
        // printf("%d, %d",low,high);
        // printf("parameters not correct ---> upper index cannot be less than lower index\n");
        // exit(1);
        return (-1);
    }
    else{
        mid = (low + high)/2;
        if(target == arr[mid]){
            printf("found the search target in list\n");
            found = true;
        }
        else{
            if(target > arr[mid]){
                low = mid + 1;
                binarySearch(arr,target,high,low);
            }
            else{
                high = mid - 1;
                binarySearch(arr,target,high,low);
            }
        }
    }
    if (found == true){
        return mid;
    }
    else{
        printf("not found\n");
    }
}