/*
Print the given Pattern : 
For any given N say 5 ;

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


*/

#include <iostream>
using namespace std ;

int main(){
    int N ;
    cin>>N ;
    for(int i = 1;i<N+1;i++){
        for(int j = 0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl ;
    }
return 0 ;
}