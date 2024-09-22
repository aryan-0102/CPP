/*
Print the given Pattern : 
For any given N say 5 ;

5 4 3 2 1
4 3 2 1 
3 2 1
2 1 
1

*/

#include <iostream>
using namespace std ;

int main(){
    int N ;
    cin>>N ;
    for(int i =N;i>0;i--){
        for(int j =i;j>0;j--){            
            cout<<j<<" ";
        }
        cout<<endl ;
        
    }
return 0 ;
}