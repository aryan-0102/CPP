/*
Print the given Pattern : 
For any given N say 5 ;

 *********
  *******
   ***** 
    ***    
     * 

*/

#include <iostream>
using namespace std ;

int main(){
    int N ;
    cin>>N ;
    for(int  i = N+1; i>0 ; i--){
        for(int k =0;k<N-i+1;k++){
            cout<<" ";
        }
        for(int j = 2*i-1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
return 0 ;
}