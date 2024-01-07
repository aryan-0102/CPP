#include <iostream>

using namespace std;

int main() {
    int n ;
    cout<<"Enter the number : ";
    cin>> n;
    int i = 1;
    while(i < 11){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }

    return 0;
}
