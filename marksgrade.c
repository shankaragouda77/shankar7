#include <stdio.h>
int main() {
int marks;
printf("enter the marks:");
scanf("%d",&marks);
if(marks<=40)
{
    if(marks<35)
    {
        printf("fail");
    }
    else
    {
        printf("just pass");
    }
}
if(marks<=60)
{
    if(marks>40)
    {
    
    printf("grade B");
        
    }

else
{
    printf("fail");
}
}
if(marks<=80)
{
    if(marks>60)
    {
    printf("garde A");
        
    }

else
{
    printf("fail");
}
}
if(marks<=100)
{
    if(marks>80){
    printf("grade A+");}
}
else
{
    printf("invalid");
}
}
