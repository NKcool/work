#include<iostream>
using namespace std;


void first(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;
    int mid = s +(e-s)/2;
    int ans = -1;
   
  while (s<=e)
  {
     if(arr[mid]==key){
        ans = mid;
        e = mid-1;
   }
    else if(arr[mid]<key){
        s = mid +1;
   }
   else{
    e = mid-1;
   }
   mid = s +(e-s)/2;

  }
  cout<<"starting index "<<ans<<endl;
  

}
void last(int arr[],int size,int key){
    int s = 0;
    int e = size - 1;
    int mid = s +(e-s)/2;
    int ans = -1;
   
  while (s<=e)
  {
     if(arr[mid]==key){
        ans = mid;
        s = mid+1;
   }
    else if(arr[mid]<key){
        s = mid +1;
   }
   else{
    e = mid-1;
   }
   mid = s +(e-s)/2;

  }
  cout<<"last index "<<ans<<endl;
  

}



int main(){
    int arr[] = {1,2,3,4,4,4,5,6,7};

    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    first(arr,size,key);
    last(arr,size,key);
   

}