//swap two variable using third veriable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first verible");
    scanf("%d",&a);
    printf("enter the second verible");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n after swapping first verible = %d",a);
    printf("\n after swapping second verible = %d",b);
    return 0;
}

//swap no without using third veriable

#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;    
b=a-b;    
a=a-b;
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   