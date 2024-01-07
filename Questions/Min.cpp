#include <iostream>
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter numbers ";
    cin>>num1>>num2;
    if (num1 > num2){
        cout<< "Min ----> "<<num2;

    }
    else{
        cout << "min --->"<< num1;
    }
    return 0 ;
}