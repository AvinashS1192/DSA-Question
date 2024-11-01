#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start, int end, int key){
   cout<<start<<"  "<<end<< endl;
   if(start>end){
    return false;
   }
    int mid= (start+end)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarysearch(arr,mid+1,end,key);
    }
    if(arr[mid]>key){
        return binarysearch(arr,start,mid-1,key);
    }
}

int main (){
    int size =6;
    int arr[6]={2,4,6,8,10,12};
    int key=2;
    int start=0;
    bool ans= binarysearch(arr,start,size,key);
    if(ans){
        cout<<"key is present"<< endl;
    }
    else cout<<"key is not present"<< endl;
    return 0;
}