#include <stdio.h>

int main()
{
   int a[5], *p, *q, i, temp; 

   printf("Enter 5 integers: ");

   for(i = 0; i < 5; i++)
   {
      scanf("%d", &a[i]);
   }

   p = a, q = a + 4;

   while(p < q)
   {
      temp = *p;

      *p = *q; 

      *q = temp; 

      p++;

      q--;
   }

   printf("Reversed array: ");

   for(i = 0; i < 5; i++)
   {
      printf("%d ", a[i]);
   }

   return 0; 

   
}