int merge(vector<int> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArray[n1], rightArray[n2];

    for (int i = 0; i < n1; i++) {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = arr[mid + 1 + j]; 

    }

    int i = 0, j = 0, k = left;
    int invCount = 0;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k++] = leftArray[i++];
        } else {
            invCount += (n1 - i);
            arr[k++] = rightArray[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArray[i++];
    }

    while (j < n2) {
        arr[k++] = rightArray[j++];
    }

    return invCount;
}

int mergesort(vector<int>&arr, int s, int e){
   int count=0;
    if(s>=e){
        return count; 
    }
    int mid= (s+e)/2;
    // left side
    count+=mergesort(arr, s, mid);
    //right side 
    count+= mergesort(arr,mid+1,e);
   count+= merge(arr,s,mid,e);
   return count;
}

int numberOfInversions(vector<int>&a, int n) {
      return mergesort(a,0,n-1);
    
}
