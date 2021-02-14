#include<bits/stdc++.h>

int main(){
    int result, input;
    int factorial(int n);
    printf("Enter the number you want to find factorial of : ");
    scanf("%d",&input);
    result = factorial(input);

    printf("your result for factorial = %d\n",result);

    return 0;
}

int factorial(int n){
    int y;
    int count = 0, r_count=0;
    
    if (n == 0 || n == 1){
        return 1;
    }
    else{
       return (n * factorial(n-1));
    }
}