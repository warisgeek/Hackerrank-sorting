#include<iostream>
#define max 10000
using namespace std;
int main(){
    int a[max];int temp;
    for(int i=0;i<max;i++)
        a[i]=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    temp=a[n-1];
    for(int i=0;i<n;i++){
        if(temp<a[n-i-2]){
            //cout<<a[n-i-1];
            a[n-i-1]=a[n-i-2];
            for(int j=0;j<n;j++)
                cout<<a[j]<<" ";
        }
        else{
            a[n-i-1]=temp;
            for(int j=0;j<n;j++)
                    cout<<a[j]<<" ";
            break;
        }
        cout<<"\n";
    }
    return 0;
}

