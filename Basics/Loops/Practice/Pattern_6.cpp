/*
Print the given Pattern : 
For any given N say 5 ;

1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

*/

#include <iostream>
using namespace std ;

int main(){
    int N ;
    cin>>N ;
    for(int i =N;i>0;i--){
        for(int j =1;j<i+1;j++){            
            cout<<j<<" ";
        }
        cout<<endl ;
        
    }
return 0 ;
}