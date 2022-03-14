#include <stdio.h>
int input()
{
  int x;
  printf("enter the value : \n");
  scanf("%d",&x);
  return x;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>b && a>c)
  {
     largest=a;
    return largest;
    
  }
   else if(b>a && b>c)
  {
     largest=b;
    return largest;
}
  else
   {
     largest=c;
     return largest;
   }
  }
  void output(int a,int b,int c,int largest)
  {
    printf("the largest number is %d",largest);
  }

  int main()
  {
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=cmp(a,b,c);
    output(a,b,c,largest);
    return 0;
      
  }

