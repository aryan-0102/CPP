#include <iostream>
using namespace std;

void merge(int arr[] , int lb , int mid , int ub)
{   int i = lb ; int j = mid + 1  ; int temp[ub-lb + 1] ; int k = 0;
    while(i <= mid && j<=ub){
        if( arr[i]> arr[j]){
            temp[k++] = arr[j++];
        }
        else{
            temp[k++] = arr[i++];

        }
    }
    while(i<= mid){
        temp[k++] = arr[i++];
    }

    while(j<= ub){
        temp[k++]  = arr[j++];
    }

    for( i = lb ;i <= ub ; i++){
        arr[i] = temp[i-lb];
    }

}

void mergeSort(int arr[],int lb ,int ub)
{
    if(ub>lb)
    { 
        int mid = (lb+ub)/2 ; 
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);

    }
}


void prinArr(int arr[], int lb , int size){
    for(int i = lb ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n ; 

    cout<< "Enter number of elements  : ";
    cin>>n;

    int arr[n];
    cout<<"Enter values in array";
    for(int i = 0;i<n;i++){
        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }
cout<<"Array before sorting ";

    prinArr(arr, 0 ,n);

cout<<endl;

    mergeSort(arr,0,n-1);


cout<<endl<<"Array after sorting : ";
    prinArr(arr, 0 ,n);


    return 0 ;

}