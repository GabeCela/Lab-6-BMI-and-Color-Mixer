# Lab-6-BMI-and-Color-Mixer

# Program 1: Body Mass Index - 
# Plan
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
# Test
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
    The original formula for Body Mass Index is: BMI= Weight [Kilograms] \Height^2 [Meters]
    Because the program request the user for pounds and inches, the formula needs a conversion factor to turn those
    Imperial units into Metric units.
    703 is the factor that convert the inches and pounds to necessary units on the formula.
    height * height is needed to get the square of the height. It represent the surface of the body. 

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

# Program 2: Color_Mixer - 
# Plan
1 - Ask for two primary-color names. The valid inputs are the single lowercase words red, blue, and yellow.
2 - Store the inputs in char arrays. first_color & second_color
3 - Use strcmp from <cstring> to compare them. strcmp(first_color, "red") == 0 means the text matches. 
4 - Validate inputs
5 - Use a constant for the array size and limit characters. 
6 - const int COLOR_SIZE = 20;
7 - Limit characters to first_color as per [COLOR_SIZE];
8 - Apply the same input limit to the second array. Include <iomanip> for setw.
9 - Calculating results:
    Two different primary colors	Result
    red and blue, in either order	purple
    red and yellow, in either order	orange
    blue and yellow, in either order	green
    If both inputs are the same valid primary color, display that color. 
# Test
Inputs: first color, second color	Expected result
        red,         blue	        purple
        red,         yellow	        orange
        blue,        yellow	        green
        blue,        red	        purple
        red,         red	        red
        orange,      blue	        Error: One or both inputs are not valid primary colors or lower case
        red,         orange	        Error: One or both inputs are not valid primary colors or lower case
        Red,         Yellow         Error: One or both inputs are not valid primary colors or lower case
        Purple       Violet         Error: One or both inputs are not valid primary colors or lower case

    All test run as expected.
    No changes needed to program.

# Explain the code
# What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?
    strcmp returns 0 when the two strings match exactly. If the first string is alphabetically smaller than the 
    second, it returns a negative number; if it is larger, it returns a positive number.
    In C++, the name of a character array represents its memory address. Using == checks whether the two
    arrays are located at the exact same slot the computer's RAM, not whether they contain the same text. Because
    first_color and "red" live in different memory locations, first_color == "red" will always be false, even if the 
    user typed "red".

# How do you make each mixture work in either input order and handle two identical primary colors?
    To make the mixtures work regardless of which color is typed first, we use logical OR (||) operators to group
    both possible combinations inside a single if statement.

# How do you check for an invalid color in either input position?
    The best way to check for an invalid color is to use boolean flags to validate each input independently using
    the logical OR (||) operator. Then, you combine them with a logical NOT (!) operator:
    1. Create a boolean variable for each color array that checks if it matches any of the three valid options.
    2. Use an if statement to check if either flag is false: if (!first_is_valid || !second_is_valid)
    
# How do named constants and result variables make your programs easier to read and check?
    Constants: (like COLOR_SIZE): Using a constant prevents "magic numbers" from scattering across your code. 
    If lenght requirements change and you need to support 50-character words, we only have to change the 
    number 20 to 50 in one single place (where the constant is declared) instead of hunting through the code to fix 
    every char array and setw() statement.
    
    Result/Validation Variables (like first_is_valid): An if statement like if (!first_is_valid || !second_is_valid)      reads like natural English, making it easy to verify that the logic is correct.

# Compile and run the Color_Mixer program
    Ensure your terminal is in the directory containing the source files, then run the commands below sequentially:
    
    bash
    g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer./color_mixer

    Other Option:
    Open color_mixer.cpp in the repository.
    Copy the complete code
    Go to https://www.onlinegdb.com/online_c++_compiler
    Paste the code in the main screen.
    Click RUN (The compiler will compile the program and will run it)
    Follow the instructions of the program in the botton black screen.
    Click ENTER after entering each value and to exit the program.



    
