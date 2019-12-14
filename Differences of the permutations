#include<stdio.h>
#include<stdlib.h>
 
 
int factorial(int n)
{
    int x=1, i=0;
    for(i=1; i<=n; i++)
    {
        x = x*i;
    }
    
    return x;
}
 
int sum(int n)
{
    int i=0, s=0;
    
    for(i=1; i<=n; i++)
    {
        s += (n-i); 
    }
    
    return s;
}
 
int main()
{
    int t;
    scanf("%d", &t);
    int n, x=0, s=0;
    while(t!=0)
    {
        scanf("%d", &n);
        x  = factorial(n);
        s = sum(n);
        printf("%d", x*s);
        printf("\n");
        t--;
    }
 
 return 0;   
}
