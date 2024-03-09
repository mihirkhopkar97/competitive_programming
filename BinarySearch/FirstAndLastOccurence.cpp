#include<iostream>
using namespace std;
int firstOcc(int *A, int n, int key){
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;
        if(A[mid]==key){
            ans=mid;
            e=mid-1;
        }else if(A[mid]<key){
            s=mid+1;
            
        }else{
            e=mid-1;
        }
        
    }
    return ans;
}
int lastOcc(int *A, int n, int key){
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;
        if(A[mid]==key){
            ans=mid;
            s=mid+1;
        }else if(A[mid]<key){
            s=mid+1;
            
        }else{
            e=mid-1;
        }
        
    }
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int key;
    scanf("%d",&key);
    int i;
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int first = firstOcc(A, n, key);
    int last = lastOcc(A, n, key);
    cout<<first<< " "<<last;
    return 0;
}