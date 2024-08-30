#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)cin>>a[i][j];
}
// let's first calculate the transpose of the given matrix
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i <= j)swap(a[i][j] , a[j][i]);
}
}
for(int j=0;j<n;j++){
for(int i=0;i<n/2;i++){
swap(a[i][j] , a[n-i-1][j]);
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){cout<<a[i][j]<<" ";}cout<<endl;
}

}