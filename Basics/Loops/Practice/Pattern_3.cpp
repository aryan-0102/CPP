/*
Print the given Pattern : 
For any given N say 5 ;

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/

#include <iostream>
using namespace std ;

int main(){
    int N ;
    cin>>N ;
    for(int i = 0;i<N;i++){
        for(int j = 1;j<i+2;j++){
            cout<<j<<" ";
        }
        cout<<endl ;
    }
return 0 ;
}