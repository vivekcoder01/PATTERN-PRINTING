#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Row Number Of times : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
}