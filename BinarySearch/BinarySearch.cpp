#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    cout<<"Enter a sorted array";
    int i;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    
    int start=0,end=n-1;
    int mid;
    int key;
    cin>>key;
    int found=0;
    
    while(start<=end){
        mid=(start+end)/2;
        if(key==A[mid]){
            cout<<mid;
            found=1;
            break;
            
        }else if(key<A[mid]){
            end=mid-1;
        }else{
            start=end+1;
        }
    }
    
    if(found==0){
        cout<<"not found";
    }

    return 0;
}