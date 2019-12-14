#include<stdio.h>
#include<stdlib.h>
 
int sum(int n)
{
    int  t = n;
    int remainder=0, sum=0;
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   
   return sum;
}
 
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
 
 
int main()
{
    int a, b, k;
    
    scanf("%d %d %d", &a, &b, &k);
    
    int i = 0, x=0, count=0, y=1;
    for(i = a; i<=b; i++)
    {
        x = sum(i);
        y = prime(x);
        
        if(y==0)
        {
            if(i%k==0)
            {
                count += 1;
            }
        }
        
    }
    
    printf("%d", count);
    return 0;
}
