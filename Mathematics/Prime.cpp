#include<iostream>
using namespace std;
int isPrime(int n){
    int flag = 1;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

    return flag;

}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)==1){
        cout<<"Prime";

    }else{
        cout<<"Not prime";
    }
    return 0;
}