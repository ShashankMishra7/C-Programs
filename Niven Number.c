#include <stdio.h>    
     
int main()    
{    
    int num;
    scanf("%d",&num);
    int rem = 0, sum = 0, n;    
   
    n = num;    
       
    while(num > 0)
    {    
        rem = num%10;    
        sum = sum + rem;    
        num = num/10;    
    }    
   
    if(n%sum == 0)    
        printf("1");    
    else    
        printf("0");    
     
    return 0;    
}
