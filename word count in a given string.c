#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0, i;
    //printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for( i = 0; i < strlen(s)-1; i++) {  
        if(s[i] == ' ' && isalpha(s[i+1]) && (i > 0)) {  
            count++;  
        }  
    }    
    count++;   
    printf("%d", count);  
   
    return 0;  
}   





