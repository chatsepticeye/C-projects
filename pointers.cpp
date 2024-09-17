/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int* p;
    p = &a;
    printf("Size of integer is %zu bytes\n", sizeof(int));  // %zu is better for size_t
    printf("Address=%p, Value=%d\n", (void*)p, *p);         // Correct format for pointer address
    return 0;
}
