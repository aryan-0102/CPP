/*
Print the given Pattern : 
For any given N say 5 ;

     *     
    ***    
   *****   
  *******  
 ********* 

*/

#include <iostream>
using namespace std ;

int main(){
    int N ;
    cin>>N ;
    for(int  i = 1; i<N+1 ; i++){
        for(int k =N-i+1;k>0;k--){
            cout<<" ";
        }
        for(int j = 0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0 ;
}