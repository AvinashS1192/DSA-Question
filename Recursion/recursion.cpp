#include<iostream>
using namespace std;
// ways to reach the nth stair using recursion
int stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return (stairs(n-1)+stairs(n-2));
}

//fibbonacci Series using recursion 
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return (fib(n-1)+ fib(n-2));
}

//sum of n using recursion
int sum (int n){
    if(n==0){
        return 0;
    }
    return (n+sum(n-1));
}

// Factorial using recursion
int factorial(int  n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    return (n*factorial(n-1));
}


int main(){
    int n=5;
    int ans = factorial(n);
    cout<< ans<< endl;
    cout<< sum(n)<< endl;
    cout<<fib(n)<< endl;
    cout<<stairs(n)<< endl;
    return 0;

}
