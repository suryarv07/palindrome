
#include<stdio.h>



int main()

{


int num,rev=0,rem,temp;

printf("Enter The Number");
scanf("%d",&num);


temp=num;
while(temp!=0)

{
    rem=temp%10;
    rev=(rev*10)+rem;
    temp/=10;

}
if(rev==num)

{
    printf("%d is a Palindrome",num);

}
else
{
    printf("%d is not a Palindrome",num);
}
return 0;
}
