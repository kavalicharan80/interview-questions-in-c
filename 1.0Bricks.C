// Online C++ compiler to run C++ program online
#include <iostream>

int main()
{
  int big;
  int small;
  int goal;
  printf("Enter the no of small bricks \n");
  scanf("%d",&small);
  printf("Enter the no of big bricks \n");
  scanf("%d",&big);
  printf("Enter the no of goal \n");
  scanf("%d",&goal);
  int required=goal/5;
  if (required<=big)
  {
      int rem=goal-(required*5);
      if(rem<=small)
     {
         printf("true");
     }
    else
    {
        printf("false");
    }
  }
     else
  {
      int rem=goal-(big*5);
      if(rem<=small)
     {
         printf("true");
     }
     else
    {
        printf("false");
    }
  }
}