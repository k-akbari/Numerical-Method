#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define TOL 0.001

double func(double x){
    return 10-x*x;
}

void bisectionMethod(double x1,double x2){

    double x = (x1+x2)/2;

    double f1 = func(x1);
    double f2 = func(x2);

    double f = func(x);

    if((x2-x1)/x < TOL){
        printf("\nThe final solution is x = %lf",x);
        return;
    }

    if(f1*f2 >0){
         printf("\nInitial gues are wrong!!");
         return;
    }

    if(f*f2 < 0){ // x1=x and f1 = f
        printf("\n%f %f %f %f %f %f",x1,x2,x,f1,f2,f);
        bisectionMethod(x,x2);
    }else{ // x2=x f2=f
        printf("\n%f %f %f %f %f %f",x1,x2,x,f1,f2,f);
        bisectionMethod(x1,x);
    }

}

int main(){
    bisectionMethod(-2,5);
}