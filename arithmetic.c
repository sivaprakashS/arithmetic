#include<stdio.h>
int main(void)
{
int a,d,n,i,tn;
  int sum=0;
   printf("Enter the first number of the  series: ");
  scanf("%d",&a);
    printf("Enter the total numbers in the series: ");
    scanf("%d",&n);
    printf("Enter the common difference of  series: ");
  scanf("%d",&d);
    sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
    tn = a + (n-1) * d;
     printf("Sum of the series ");
   for(i=a;i<=tn; i= i + d )
 {
	if (i != tn)
 printf("%d + ",i);
             else
  printf("%d = %d ",i,sum);
  }
   return 0
}
