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

05.Example: Square Frame
Write a program that takes an integer n and draws on the console a square frame with a size of n * n.
Input   Output   Input  Output       Input    Output 
4       + – - +  5      + – - – +    6        + – - – - +
        | – - |         | – - – |             | – - – - |
        | – - |         | – - – |             | – - – - |
        + – - +         | – - – |             | – - – - |
                        + – - – +             + – - – - +

Hints and Guidelines
We can solve the problem in the following way:
• We read from the console the number n.
• We print the upper part: first a + sign, then n-2 times - and in the end a + sign.
• We print the middle part: we print n-2 rows, as we first print a | sign, then n-2 times - and in 
the end again a | sign. We can do this with nested loops.
• We print the lower part: first a + sign, then n-2 times - and in the end a + sign.

06.Problem: Rhombus Made of Stars
Write a program that takes a positive integer n and prints a rhombus made of stars with size n.
Input Output Input Output  Input Output       Input Output 
1       *        2    *    3       *           4     *
                     * *          * *               * *
                      *          * * *             * * *
                                  * *             * * * *
                                   *               * * *
                                                    * * 
                                                     * 
Hints and Guidelines
To solve this problem, we need to mentally divide the rhombus into two parts – upper one, which
also includes the middle row, and lower one. For the printing of each part we will use two separate 
loops, as we leave the reader to decide the dependency between n and the variables of the loops.

07.Problem: Christmas Tree
Write a program that takes a number n (1 ≤ n ≤ 100) and prints a Christmas tree with height of n+1.
Input Output Input Output      Input Output     Input Output 
1      |       2      |          3     |         4      |
     * | *          * | *            * | *            * | *
                   ** | **          ** | **          ** | **
                                   *** | ***        *** | ***
                                                   **** | ****
Hints and Guidelines
From the examples we see that the Christmas tree can be divided into three logical parts. The first
part is the stars and the white spaces before and after them, the middle part is |, and the last part is 
again stars, but this time there are white spaces only before them. The printing can be done with only
one loop and the new string(…) constructor, which we will use once for the stars and once for the 
white spaces.

08.Problem:Sunglasses
Write a program that takes an integer n (3 ≤ n ≤ 100) and prints sunglasses with size of 5*n x n as 
found in the examples:
Input      Output 
3
          ******   ******
          *////*|||*////*
          ******   ******
Input     Output
4
          ********    ********
          *//////*||||*//////*
          *//////*    *//////*
          ********    ********
Input     Output 
5
          **********     **********
          *////////*     *////////*
          *////////*|||||*////////*
          *////////*     *////////*
          **********     ********** 
Hints and Guidelines
From the examples we can see that the sunglasses can be divided into three parts – upper, middle 
and lower one. A part of the code with which the problem can be solved is given below.

09.Problem: House
Write a program that takes a number n (2 ≤ n ≤ 100) and prints a house with size n x n, just as in the 
examples:
Input Output  
2
      **
      || 
Input Output
 3     -*-
       ***
       | *|       
Input Output
4
     -**-
     ****
     |**|
     |**|

Input Output
5     --*--
      -***-
      *****
      |*** |
      |***|    
![image](https://github.com/Sasho80/6.1.DrawingOnTheConsole/assets/7139995/6a1682f8-c50b-48dc-a2ae-c19b2d65127e)
Hints and Guidelines
We understand from the problem explanation that the house is with size of n x n. 
What we see from the example input and output is that:
• The house is divided into two parts: roof and base.
Chapter 6.1. Nested Loops 233
• When n is an even number, the point of the house is "dull".
• When n is odd, the roof is one row larger than the base.
The Roof
• It comprises of stars and dashes.
• In the top part there are one or two stars, depending on if n is even or odd (also related to the 
dashes).
• In the lowest part there are many stars and no dashes.
• With each lower row, the stars increase by 2 and the dashes decrease by 2.
The Base
• The height is n rows.
• It is made out of stars and pipes.
• Each row comprises of 2 pipes – one in the beginning and one in the end of the row, and also
stars between the pipes with string length of n - 2.



