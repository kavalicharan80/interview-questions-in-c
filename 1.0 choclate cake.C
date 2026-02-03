// Online C compiler to run C program online
#include <stdio.h>
int main()
{
  int big;
  int small;
  int goal;
  printf("Enter the amount of big bars \n");
  scanf("%d",&big);
  printf("Enter the amount of small bars \n");
  scanf("%d",&small);
  printf("Enter the amount of cake weight \n");
  scanf("%d",&goal);
  int required=goal/5;
  if (required<=big)
  {
      int rem=goal-(required*5);
      if(rem<=small)
     {
         printf("%d",rem);
     }
    else
    {
        printf("-1");
    }
  }
     else
  {
      int rem1=goal-(big*5);
      if(rem1<=small)
     {
         printf("%d",rem1);
     }
   }
  {
      int rem=goal-(required*5);
      if(rem<=small)
     {
         printf("%d",rem);
     }
    else
    {
        printf("-1");
    }
  }
}