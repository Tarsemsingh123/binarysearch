#include<iostream>
using namespace std; 

int PeakElement(int arr[],int n){
    int start=0,mid;
    int end=n-1;
    //first condition
    while(start<=end){

   int  mid=start+(end-start)/2;


if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
    return mid;
    break;
}
else if(arr[mid]>arr[mid-1]){
    start=mid+1;

}
else{
    end=end-1;
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

cout<<PeakElement(arr,n);
    return 0;
return 0;
}