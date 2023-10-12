#include <stdio.h>
#include <cs50.h>


int main(void)
{
 
 long x = get_long("x is : ");
 long y = get_long("y is : ");

 printf("%li\n", x + y);
}