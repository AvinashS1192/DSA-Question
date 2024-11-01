#include<iostream>
using namespace std;
//Check if an element is present or not
bool ispresent(int arr[], int size, int key){
    if(arr[0]==key){
        return 1;
    }
    if(size==0){
        return 0;
    }

    return(ispresent(arr+1,size-1, key));
}

//to find sum of an array
int arraysum(int arr[], int size){
int sum =0;
if(size==0){
    return 0;
}
return(arr[0]+arraysum(arr+1,size-1));
}

// Check if an array is sorted or not
bool issorted (int arr[], int size){
 if (arr[0]>arr[1]){
    return 0;
 }
 if (size<=1){
    return 1;
 }
 else return (issorted(arr+1, size-1));
}
int main(){

    int size =6;
    int arr[6]={2,4,6,8,10,12};
    int ans= issorted(arr,size);
    if(ans){
        cout<< "array is sorted"<< endl;
    }
    else cout<<"array is not sorted"<< endl;


    int sum=arraysum(arr, size);
    cout<< "sum is "<<sum<<endl;

    int key =12;
    int present= ispresent(arr, size, key);
    if(present){
        cout<<"key is presnet "<< endl;
    }
    else cout<<"key is not present"<< endl;
} 
