/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: "<<'\n';
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    int k = i+1;
    for(int i=0;i<k;i++){
        cout<<arr[i]<< " ";
    }
    
    
}
