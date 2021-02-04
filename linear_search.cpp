//  WAP to search element in array using linear search ...

#include<iostream>
#define max 15

using namespace std;

int main(){
    int target,i;
    int arr[max]={20,10,40,51,15,32,26,21,23,12};
    cout<<"enter target"<<endl;
    cin>>target;
    for(i=0;i<max;i++){
        if (target==arr[i]){
            cout<<"------ target found ------ \n";
        }

        else{
            cout<<"target not found \n";
        }
    }
    return 0;
}