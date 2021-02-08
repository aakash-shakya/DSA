#include <bits/stdc++.h>

typedef struct{
    int numerator;
    int denomenator;
}Rational;


void reduce(Rational *inrat, Rational *outrat){
    int a,b,r;

    if(inrat->numerator > inrat->denomenator){
        a = inrat->numerator;
        b = inrat->denomenator;
    }
    else{
        a = inrat->denomenator;
        b = inrat->numerator;
    }
    while(b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    outrat->numerator = inrat->numerator/a;
    outrat->denomenator =inrat->denomenator/a;
}

int main(){
    Rational inrat, outrat;
    printf("Enter Value of Numerator: ");
    scanf("%d",&inrat.numerator);
    printf("Enter Value of denomenator: ");
    scanf("%d",&inrat.denomenator);
    
    reduce(&inrat, &outrat);
    printf("after reducing to lowest form \n");
    printf("numerator = %d, denominator = %d\n",outrat.numerator, outrat.denomenator);
    return 0;
}