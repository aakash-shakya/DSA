#include<bits/stdc++.h>

int main(){
    int n1,n2, result;
    int multiply(int a, int b);

    printf("enter two numbers for multiplication: ");
    scanf("%d %d",&n1, &n2);

    result = multiply(n1,n2);

    printf("multiplied answer = %d\n",result);

    return 0;
}


int multiply(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    else if(b == 1){
        return a;
    }
    else{
        return a*(b-1)+a;
    }
}