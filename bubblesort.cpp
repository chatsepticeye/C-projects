/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                swapped= true;
            }
        }
    if(!swapped){
        break;
    }
    }
 }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    bubble_sort(arr,n);
    cout<<"SORTED ARRAY :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;   
    
    
}
