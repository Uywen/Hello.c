#include <stdio.h>
#include <cs50.h>


int main(void)
{
    /* 
    Created a string variable that contains
    the user input function which would prompt
    the user to enter their name
    */
    string name = get_string("Whats your name ? ");

    /*
    The "%s" acts as a placeholder for the name variable
    that contains the user input to be displayed in 
    printf
    */
    printf("Hello World, %s\n", name);
}