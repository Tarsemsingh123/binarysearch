#include<iostream>
using namespace std; 


int Minimum_element_at_roted_array(int arr[],int n){
    int start=0,mid;
    int end=n-1;
    int ans=arr[0];
    //first condition
    while(start<=end){

   int  mid=start+(end-start)/2;


if(arr[mid]>=arr[0]){
    start=mid+1;
}
else {
    ans =arr[mid];
    end=mid-1;

}

    }
    return ans;
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

cout<<Minimum_element_at_roted_array(arr,n);
return 0;
}