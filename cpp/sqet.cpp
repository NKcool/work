#include<iostream> 
using namespace std;

long long int binarySearch (long long int n){

    long long int s = 0;
    unsigned int e = n;
    long long int m = s+(e-s)/2;
    long long int a = 0;

    while(s<=e){
        long long int sqr = m * m;
        if(sqr==n){
            return m;
        }
        if(sqr<n){
            a=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
        m = s+(e-s)/2;
    }
    return a;
}


int main()
{
    
cout<<binarySearch(7777777772);
}