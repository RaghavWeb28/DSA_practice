#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));

    int r,c;
    cin>>r>>c;

    r--;
    c--;
    
    a[r][c]=1;

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i-j==r-c) a[i][j]=1;
            if(i+j==r+c) a[i][j]=1;
            //if((i+j)%2==1) a[i][j]=1;
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int count=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==1) count++;
        }
    }

    cout<<count-1;
    return 0;
}