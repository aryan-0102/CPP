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

// --------- Here is Selection sort-------
    for(int i = 0; i<n;i++){
        int min = i;
        for( int j = i + 1 ;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }

// ------ Main code ends here -----------

    cout<<endl<<"Array after sorting : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}

