int firstocc( vector<int> & arr,int start, int end, int k, int ans=-1){
    if(start>end){
        return ans;
    }
  //cout<< ans <<" "<<" "<<start<<" "<<end<< endl;
    int mid = (start+end)/2;
   
    if(arr[mid]==k){
     ans=(mid);
     return(firstocc(arr, start, mid-1, k, ans));
    }
    if(arr[mid]>k){
         return(firstocc(arr, start, mid-1, k, ans));
    }
    if (arr[mid] < k) {
       
         return(firstocc(arr, mid + 1, end, k, ans));
    }
    return ans;
}

int lastocc(vector<int>& arr,int start, int end, int k, int ans=-1){
    if(start>end){
        return ans;
    }
    //cout<< ans <<" "<<" "<<start<<" "<<end<< endl;
    int mid = start+ (end-start)/2;
    
    if(arr[mid]==k){
     ans=(mid);
        return(lastocc(arr, mid+1, end, k, ans));
    }
    if(arr[mid]>k){
       return(lastocc(arr, start, mid-1, k, ans));
    }
    if(arr[mid]<k){
        return(lastocc(arr, mid+1, end, k, ans));
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    int start =0;
    p.first=firstocc(arr,start,n,k);
    p.second=lastocc(arr,start,n,k);
    return p;
}
