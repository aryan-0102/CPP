#include <iostream>

using namespace std;

int main() {
    int sum = 0,num;

    cout<<"Enter N for sum for N natural num : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        sum += i;
    }

    cout<<"Sum-----> "<<sum;

    return 0;
}
