#include<bits/stdc++.h>

int main(){
    int arr[10]={12,13,15,18,19,20,25,26,29,31};
    int result,target=26;
    int low,high;

    int binarySearch(int arr[],int target,int high, int low);
    
    result = binarySearch(arr,target,low=0,high=9);

    printf("target is in index %d\n",result);
    return 0;
}

int binarySearch(int arr[],int target,int low, int high){
    int mid;

    mid = (low + high)/2;
    if(target == arr[mid]){
        printf("found the search target in list\n");
        return mid;
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