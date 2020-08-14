#include <stdio.h> 
void add(int a, int b) 
{ 
    printf("Addition is %d\n", a+b); 
} 
void subtract(int a, int b) 
{ 
    printf("Subtraction is %d\n", a-b);  
} 
  
int main() 
{  
    void (*fun_ptr_arr[])(int, int) = {add, subtract}; 
    int num, a = 20, b = 10; 
  
    printf("Enter Choice: 0 for add, 1 for subtract\n"); 
    scanf("%d", &num); 
  
    if (num > 1) return 0; 
  
    (*fun_ptr_arr[num])(a, b); 
  
    return 0; 
} 
