
// Implementasi gerbang OR menggunakan operator +

#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int a[4] = { 0, 0, 1, 1 };
    int b[4] = { 0, 1, 0, 1 };
    int i, or_ans;
  
    for (i = 0; i < 4; i++) {
  
        // using the + operator
        if (a[i] + b[i] > 0)
            or_ans = 1;
        else
            or_ans = 0;
  
        printf("\n %d OR %d = %d",
               a[i], b[i], or_ans);
    }
     printf("\n");
}