// Implementasi gerbang OR menggunakan  if-else
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int a[4] = { 0, 0, 1, 1 };
    int b[4] = { 0, 1, 0, 1 };
    int i, or_ans;
  
    for (i = 0; i < 4; i++) {
  
        // using the if-else conditions
        if (a[i] == 0 && b[i] == 0)
            or_ans = 0;
        else
            or_ans = 1;
  
        printf("\n %d OR %d = %d",
               a[i], b[i], or_ans);
    }
    printf("\n");
}