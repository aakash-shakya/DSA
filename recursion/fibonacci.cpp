#include<bits/stdc++.h>

int main(){
    // int result;
    int fibonacci(int n);
    printf("%d\n",fibonacci(20));
    return 0;
}

int fibonacci(int n){
    int x,y;
    
    if (n<=1){
        return n;
    }
    else{
        x = fibonacci(n-1);
        y = fibonacci(n-2);
    }
    return x + y;
}