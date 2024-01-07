#include <iostream>

using namespace std;

int main(){
    int num ;
    cout<<"Enter a number ";
    cin>>num;
    if (num%2 != 0){
        cout<<num<<" is odd ";
    }
    else{
        cout<<num<<" is even "<<endl;
    }

    return 0;
}