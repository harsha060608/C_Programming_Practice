#include <stdio.h>

int main()
{
   int arr[5] = {0};   

   int N, rem; 

   printf("Enter the value of N:");

   scanf("%d", &N);

   while(N>0)
   {
      rem = N % 10;

      if(arr[rem] == 1)
      {
         break;
      }

      arr[rem] = 1;

      N = N / 10;
   }

   if(N > 0)
   {
      printf("Yes");
   }

   else
   {
      printf("No");
   }

   return 0;
}



