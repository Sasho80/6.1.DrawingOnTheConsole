01.Problem: Rectangle Made of 10 x 10 Stars
Print on the console a rectangle made out of 10 x 10 stars.

Input Output 
(none)
**********
**********
**********
**********
**********
**********
**********
**********
**********
**********

02.Problem: Rectangle Made of N x N Stars
Write a program that enters a positive integer n and prints a rectangle made out of N x N stars:
Input Output Input Output Input Output 
2     **     3     ***    4     ****
      **           ***          ****
                   ***          ****
                                ****
03.Examples: Square of Stars
Print on the console a square made of N x N stars (use a space between the stars, on the same line):
Input Output Input Output Input Output 
2     * *    3     * * *  4     * * * *
      * *          * * *        * * * *
                   * * *        * * * *
                                * * * *

Hints and Guidelines
The problem is similar to the last one. The difference here is that we need to figure out how to add a 
whitespace after the stars so that there aren't any excess white spaces in the beginning or the end.

04.Example: Triangle Made of Dollars
Write a program that takes an integer n and prints a triangle made of dollars of size n.
Input Output 
 
Input Output Input Output
2     $      3     $
      $ $          $ $
                   $ $ $
Input Output
4     $
      $ $
      $ $ $
      $ $ $ $

Hints and Guidelines
The problem is similar to those for drawing a rectangle and square. Once again, we will use nested 
loops, but there is a catch here. The difference is that the number of columns that we need to print 
depends on the row, on which we are and not on the input number n. From the example input and 
output data we see that the count of dollars depends on which row we are on at the moment of the 
printing, i.e. 1 dollar means first row, 3 dollars mean third row and so on. Let's see the following 
example in detail. We see that the variable of the nested loop is connected with the variable of the 
outer one. This way our program prints the desired triangle.
