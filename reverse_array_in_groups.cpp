#include <iostream>
using namespace std;
void swapping(int *a,int *b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
void logic(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=k){
        if((i+k)<=n){
            for(int j=0;j<k/2;j++){
                swapping(&arr[i+j],&arr[i+k-1-j]);
            }
        }
        else{
            int size = n-i;
            for(int j=0;j<size/2;j++){
                swapping(&arr[i+j],&arr[i+size-j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
	int t;
    cin>>t;
    for(int i=0;i<t;i++){
        logic();
        cout<<endl;
    }
	return 0;
}