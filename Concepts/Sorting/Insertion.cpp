// Insertion sort picks an element and puts it wherever it belongs by checking all the elements to its left

#include <iostream>
using namespace std ;

int swap(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main(){
        int n ;
    cout<<"Enter number of elements  : ";
    cin>>n;

    int arr[n];

    cout<<"Enter values into array : "<<endl;

    for(int i = 0;i<n;i++){
        cout<<"Enter arr["<<i<<"] : ";
        cin>>arr[i];
    }
    
    cout<<"Array before sorting : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


// ====== Sorting Begins here ======
    for(int i = 0; i < n; i++) {
    for(int j = i; j > 0; j--) {
        if(arr[j-1] > arr[j]) {
            swap(&arr[j], &arr[j-1]);
        }
    }
}

// =================================

    cout<<endl<<"Array after sorting : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}