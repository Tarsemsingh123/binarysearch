#include<iostream>
using namespace std; 


int binarysearch(int arr[],int n, int key){
    int start=0,mid;
    int end=n-1;
    //first condition
    while(start<=end){

   int  mid=start+(end-start)/2;


if(arr[mid]==key){
    return mid;
    break;
}
else if(arr[mid]<key){
   
  end=end-1;
}
else{
   start=mid+1;
}

    }
    return -1;
}


int main(){
    int arr[1000];
int n;
cout<<"enter the size of array";
cin>>n;
cout<<"the element of an array is:";



for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cout<<"enter the key which you found";
cin>>key;
cout<<binarysearch(arr,n, key);
return 0;
}