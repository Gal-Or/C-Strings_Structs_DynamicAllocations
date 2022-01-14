# C-Strings_Structs_DynamicAllocations

The second exercise in a C programming course. 
The exercise involves strings, structs and dynamic allocations.

## Description

is exercise requires you to solve a system of linear equations.
The program will pick up from the user the number of equations the system includes, this value can be in the range 1-3.
If an incorrect value is entered, a message will be displayed accordingly and another input attempt will be made.
after the steps above,  a string from the user must be received for each equation, which must be analyzed according to the rules described below.

Each system of linear equations cannot represent using a coefficient matrix A, vector B solutions and vector disappear X. 
The system may not have a single solution or no solution at all.
Legality Input Equation:
* The number of equations is equal to the number of disappearances in the system and therefore the coefficient matrix is necessarily quadratic.
* It can be assumed that the first input of the number of equations is an int integer.
* The length of each equation should not exceed 80 characters.
* As part of the equation receiver the user can tap spaces, these characters should be ignored. 
* It can be assumed that the input of the equations will be correct: 
    1. A set of equations which contains one missing equation is x. 
    2. A set of equations which contains two vanishing equations are x, y.
    3.System of equations which contains three vanishing equations are x, y, z.
    4. No need to perform a string input test.
* It can be assumed that the input of the equation will be as follows: 
    1. The left side of the equation contains the coefficients a, b, c and the variables x, y, z depending on the number of equations.
    2. The right side of the equation will contain only the free limb d.
    3. The variables x, y, z will appear only as lowercase letters oThere will be no need to perform complex arithmetic operations

For the purpose of solving the exercise we will define the following structures:
* The Equation structure - which represents a single equation. Coefficient line A and free value B.
* The AllEquations structure - which represents the entire system of equations, holds an array of pointers for Equation.
* The Solver structure - which unites all the equations for the coefficient matrix A and vector B. Explanation: A_Mat is an array of rows the size of the number of equations and in each cell retains the address of array A of the corresponding equation. Note: It is not necessary copy vector A of each equation. B_Vec is an array with a large number of equations that holds the coefficients B of each equation.
    

## How To Run

This project runing on Ubuntu environment(linux) or visual studio.

