#include <iostream>
#include <cstring> // Required for strcmp
#include <iomanip> // Required for setw

using namespace std;

int main() {
    // Named constant for array size
    const int COLOR_SIZE = 20;
    
    // Character arrays to store inputs
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];
    
    // Prompt and read the first color
    cout << "Enter the first primary color (red, blue, yellow) Use lower case: ";
    cin >> setw(COLOR_SIZE) >> first_color;
    
    // Prompt and read the second color
    cout << "Enter the second primary color (red, blue, yellow) Use lower case: ";
    cin >> setw(COLOR_SIZE) >> second_color;
    
    // Validate the first input
    bool first_is_valid = (strcmp(first_color, "red") == 0 || 
                           strcmp(first_color, "blue") == 0 || 
                           strcmp(first_color, "yellow") == 0);
                           
    // Validate the second input
    bool second_is_valid = (strcmp(second_color, "red") == 0 || 
                            strcmp(second_color, "blue") == 0 || 
                            strcmp(second_color, "yellow") == 0);
                            
    // If either input is invalid, display an error message
    if (!first_is_valid || !second_is_valid) {
        cout << "Error: One or both inputs are not valid primary colors or lower case" << endl;
    }
    // If both inputs are the same, display that color
    else if (strcmp(first_color, second_color) == 0) {
        cout << "Result: " << first_color << endl;
    }
    // Handle red and blue -> purple
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "blue") == 0) ||
             (strcmp(first_color, "blue") == 0 && strcmp(second_color, "red") == 0)) {
        cout << "Result: purple" << endl;
    }
    // Handle red and yellow -> orange
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "red") == 0)) {
        cout << "Result: orange" << endl;
    }
    // Handle blue and yellow -> green
    else if ((strcmp(first_color, "blue") == 0 && strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "blue") == 0)) {
        cout << "Result: green" << endl;
    }
    
    return 0;
}
