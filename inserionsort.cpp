/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    inserion_sort(int arr[],int n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
swap(arr,start,end){
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
}
insertion_sort(int arr[],int n){
    for(i=0;i<n-1,i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr,j,j-1);
            }else{
                break;
            }
            }
        }
    }
}