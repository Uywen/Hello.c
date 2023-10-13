#include <stdio.h>
#include <cs50.h>

/*
Placed the name of the functions above 
because C ignores functions below "main"
*/
int get_size(void);
void print_hash(int height);



int main(void)
{
   /*
   Calls the function each time the code compiles
   */
   int x = get_size();

   // Prints the grid of hashes
   print_hash(x);
}

int get_size(void)
{

   // initialising x
   int x;

   /*
   The do while loop will continuously
   prompt the user to enter a height if
   the value is less than one or more than 8
   */
   do
   {
      x = get_int("Enter a height: ");
   }
   while(x < 1 || x > 8);
   return x;
}


/*
The function that creates the hash 
*/

void print_hash(int height)
{
   for(int i = 0 ;  i < height;i++)
   {

      /*
      used the variable height to intialize the 
      k variable and subtracted "i" each time because
      height starts with the value the user enters and the loop would
      run that specified amount of times the loop would run until the
      value is no longer more than 1 because it would be subtracted
      each time the loop ran.
      */
      for(int k = height - i; k > 1;k--)
      {
         printf(" ");
      }
    for(int j = 0; j <= i;j++)
    {
     printf("#");
    }
    printf("\n");
   }
}