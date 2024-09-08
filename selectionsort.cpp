/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

void swap(int arr[],int first,int second){
    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
    
}    
int getMaxIndex(int arr[],int start, int end){
    int max=start;
    for(int i=start;i<=end;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
        
    }return max;
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int last= n-i-1;
        int maxIndex=getMaxIndex(arr,0,last);
        swap(arr,maxIndex,last);
   }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort( arr,n);
    cout<<"SORTED ARRAY:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}
