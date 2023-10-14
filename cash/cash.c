#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents(); // cents = 31

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents); // quarters = 1
    // cents = 31 - (1 * 25)
    // cents = 31 - 25
    // cents = 6
    cents = cents - quarters * 25;
    printf("%i\n", quarters);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;
   
    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}


/*
The cents displays the remainder of a value that
25 can go into because 25 is the last available
cent.

Also if the user enters a value less than zero the 
prompt "Enter number of cents" will run again.
*/

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Enter the number of cents: ");
    }
    while(cents < 0);

    return cents;
}

/*
Everytime the amount of cents entered is more than the 
prescribed cents it will keep iterating a subtracting 
from the value until the loop is false.

If false the value will go to the next function
and continue that process.And display the amount of
that specific sense the user will receive.
*/

int calculate_quarters(int cents)
{   
   int quarter = 0;

    while(cents >= 25)
   {
    quarter++;

    cents = cents - 25;

   }
   return quarter;
}

int calculate_dimes(int cents)
{
   int dimes = 0;

   while( cents >= 10)
   {
    dimes++;

    cents = cents - 10;

   }
   return dimes;

}

int calculate_nickels(int cents)
{
   int nickels = 0;

   while(cents >= 5){

    nickels++;

    cents = cents - 5;

   }
   return nickels;
}

int calculate_pennies(int cents)
{
   int pennies = 0;

   while(cents >= 1)
   {
    pennies++;

    cents = cents - 1;

   }
   return pennies;
}
