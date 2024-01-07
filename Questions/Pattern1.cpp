#include <iostream>

using namespace std;

/* Pattern

     * * * * *
     * * * *
     * * *
     * *
     * 

*/

int main(){
    int i,n;
    cout<<"Enter no of lines ";
    cin>>n;
    for(i=n;i>0;i--){
        for(int j =i;j>0;j--){
        cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}