#include<stdio.h>
int Fibonacci(int);
int main()
{
   int n=10, i = 0;
   printf("Fibonacci series\n");
 
   for (int j= 1 ; j <= n ;j++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
