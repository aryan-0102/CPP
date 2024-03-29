// Bubble sort is a sorting algorithm that works by repeatedly swapping adjacent elements until a sorted array is obtained.


#include <iostream>
using namespace std ;

int swap(int* a ,int* b){
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

// --------- Here is the main code -------

    for(int i = 0;i<n;i++){                     // The outer loop is used to control the number of passes 
        for(int j = 0; j<n-i;j++){              // Inner loop iterates over all the adjacent elements 
            if(arr[j]>arr[j+1]){                // Swapping if the elements are in incorrect order
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

// ------ Main code ends here -----------

    cout<<endl<<"Array after sorting : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}
