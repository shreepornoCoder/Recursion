#include<iostream>
using namespace std;

void print_num(int n){
    if (n==0) return;

    cout<<n<<" ";
    print_num(n-1);
}

int main(){
    print_num(5);
    return 0;
}