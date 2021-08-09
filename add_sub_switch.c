#include <stdio.h>  
  
int main()  
{  
   double a, b;  
    char ch;  
  
    printf("Enter your choice\n");  
    printf("a. Addition\ns. Subtraction\n");  
    scanf("%c", &ch);  
  
  
   printf("Enter 2 double numbers\n");  
   scanf("%lf %lf", &a, &b);  
  
  
    switch(ch)  
    {  
        case 'a': printf("add = %lf\n", (a+b));  
                break;  
  
        case 's': printf("sub = %lf\n", (a-b));  
                break;  
    
  
        default: printf("No action");  
                 break;  
    }  
  
    return 0;  
}  
