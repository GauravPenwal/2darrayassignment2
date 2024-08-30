#include<iostream>
using namespace std;
int main(){
int n ;
cout << "Enter the number of rows : ";
cin >> n;
int arr[n][n];
cout << "Enter the elements of matrix : "<<endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)cin>>arr[i][j];
}
cout << "Elements of both the diagonals are as follows : "<<endl;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < n ; j++){
if((i + j == n - 1) or (i == j))cout << arr[i][j] << " ";
else cout << " ";
}
cout<<endl;
}
}