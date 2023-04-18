/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int power(int base, int power){
    int result=1;
    for(int i =0;i<power;i++){
        result*=base;
    }
    
    return result;
}

double function1(int n){
    
    if(n!=1){
        return (double)(power(-1.0,(n+1))/ ((double) n)+function1(n-1));   
    }else{
        return -1.0/n;
    }
}


double function1(){
    static int n=0;
    if(n==0){
        cout<<"please give an integer greater than 1"<<endl;
        cin>>n;
    }
    
    
    if(n!=1){
        return (double)(power(-1.0,(n+1))/ ((double) n)+function1(n-1));   
    }else{
        return -1.0/n;
    }
}



int main()
{   cout<<function1()<<endl;
    cout<<function1(5)<<endl;
    return 0;
}