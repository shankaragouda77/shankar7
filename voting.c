#include <stdio.h>
int main() {
int age;
printf("enter the age:");
scanf("%d",&age);
if(age<18)
{
    if(age<0)
    {
        printf("error");
    }
    else
    {
        printf("not eligible");
    }
}
if(age>=18)
{
    if(age==18)
    {
        printf("first time voting");
    }
    else
    {
        printf("eligible");
    }
}

}
