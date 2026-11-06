# Lab-6-BMI-and-Color-Mixer

# Program 1: Body Mass Index - Plan

1 - Ask for a weight in pounds and a height in inches. 
2 - Store both values as double in variables height and weight.
3 - Set conditions: Both values must be greater than zero. If either value is zero or negative, display an error 
    message and end the program before calculating BMI. 
4 - Use the formula: 
    bmi = weight * 703.0 / (height * height);
    Use height * height to square the height as required in assigment.
    Store the result in a variable bmi before displaying it.
5 - Use these categories for this programming exercise:
    BMI classification rules based on calculated BMI	
    Messages:
    Less than 18.5	Underweight
    18.5 through 25.0, including both endpoints	Optimal weight
    Greater than 25.0	Overweight
    Use the unrounded BMI to choose the category. 
6 - Display the BMI with fixed and setprecision(2), followed by its category. Include clear prompts and labels.

7 - BMI tests: weight in pounds, height in inches
    Inputs: 
    Test#  weight, height	    Expected result
    1      100,      70	        14.35    Underweight
    2      150,      70	        21.52    Optimal weight
    3      200,      70	        28.69    Overweight
    4      150,      0	        Error:   Weight and height must both be greater than zero.
    5      -150,     70	        Error:   Weight and height must both be greater than zero.
    
    6      100,      100        7.03     Underweight
    7      600,      20         1054.50  Overweight
    8      174.2532  70         25       Optimal
    9      128.9474  70         18.5     Optimal  

8 - Review of Tests Results:
    The program returned all expected results. (All tests)
    The program handles both end points correctly (Tests #8 & 9)
    The program follows the rules for user input (Tests 4 & 5)
    The algorithm needs additional analysis of input values because evaluate data that has no sense. (Tests 6 & &)

9 - Explain The code:

    # How does the BMI formula use pounds and inches? Why is height * height needed?
    The original formula for Body Mass Index is: BMI= Weight [Kilograms] \Height [Meters]
    Because the program request the user for pounds and inches, the formula needs a conversion factor to turn those
    Imperial units into Metric units.
    703 is the factor that convert the inches and pounds to necessary units on the formula.

    # How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain 
    how your conditions avoid gaps and handle both endpoints.
    BMI of 18.5 and 25 return category Optimal because the condition is:
    else if (bmi >= 18.5 && bmi <= 25.0) 
    Greater or equal to 18.5  and smaller or equal to 25. It's a closed interval.

    Why do you check weight and height before calculating BMI?
    The  program checks weight and height to avoid negative values and 0
    
    Why do you classify the unrounded BMI and round only its displayed value?
    To get more presicion in the result.

10 -Compile and run the BMI program
    Ensure your terminal is in the directory containing the source files, then run the commands below sequentially:
    
    bash
    g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi./bmi

    Other Option:
    Open bmi.cpp in the repository.
    Copy the complete code
    Go to https://www.onlinegdb.com/online_c++_compiler
    Paste the code in the main screen.
    Click RUN (The compiler will compile the program and will run it)
    Follow the instructions of the program in the botton black screen.
    Click ENTER after entering each value and to exit the program.

    
