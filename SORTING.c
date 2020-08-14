#include <stdio.h> 
void sort(int n, int* ptr) 
{ 
    int i, j,k;
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                k = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = k; 
            } 
        } 
    }  
    for (i = 0; i < n; i++) 
        printf("%d ", *(ptr + i)); 
} 
int main() 
{ 
    int n = 7; 
    int arr[] = { 0,23,14,12,9,53,7 }; 
  
    sort(n, arr); 
  
    return 0; 
} 
