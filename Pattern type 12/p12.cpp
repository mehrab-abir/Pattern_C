#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col,n;
    cout<<"Number of rows: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row == 1 || row == n ||col == 1 || col == n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
