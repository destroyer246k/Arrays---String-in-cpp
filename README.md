# Arrays-String-in-cpp
Aim: To study and implement C++ arrays and strings.                                 
Tools: GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler).
## Theory

An array in C++ is a collection of elements of the same data type stored in contiguous memory locations. It allows indexed access using zero-based indexing. Arrays are useful for storing multiple values of the same type and performing operations like  searching, sorting, etc.

### Key Features:
- Fixed size defined at the time of declaration.
- Access elements using index notation (`arr[i]`).
- Stored in continuous memory blocks.



### 1. Array Input and Output 
This program demonstrates how to declare an array and accept user input to store multiple elements. It uses a loop to read values and another loop to display all elements. It introduces basic array traversal using for loops and emphasizes how arrays store values in indexed order.      


### 2. Search an Element in Array 
**Algorithm:**
The program searches for a specific element in an array and prints its positions and count. It uses a loop and conditional check to compare each value.
1. Start.
2. Read the number of elements n.
3. Declare array marks[n] and input values.
4. Read the element ele to search.
5. Initialize flag =0 and count = 0.
6. Loop through the array:
   - If  marks[i] == ele, set flag = 1, increase count, and print position.
7. After loop, print total occurrences or not found message.
8. Stop.

### 3. Reverse an Array 
The program accepts an array of integers from the user and then prints the elements in reverse order. It uses a loop that starts from the last index and moves backward. This example shows how array indices can be manipulated to reverse the sequence without modifying the original data.


### 4. Sum and Average of Array 
This program calculates the total sum and average of values stored in an array. After reading the elements, it accumulates the sum in a variable and divides it by the number of elements to find the average. It illustrates arithmetic operations on arrays and how to process numerical data efficiently.


### 5. Minimum and Maximum in Array 
It finds and displays the smallest and largest values in an array by iterating through all elements and updating min and max variables.
**Algorithm:**
1. Start.
2. Read number of elements n.
3. Declare array marks[n] and input values.
4. Initialize min = marks[0], max = marks[0].
5. Loop to find maximum by comparing each element.
6. Loop to find minimum similarly.
7. Print min and max.
8. Stop.

# Strings in C++
In C++, strings are used to store and manipulate sequences of characters. They can be declared and used in two main ways:
1. **Character Arrays (C-style strings)** – These are arrays of characters that end with a null character `\0`. They provide low-level access and require manual handling of size and termination.
2. **C++ string Class (Standard Library)** – The string class is a part of the C++ Standard Library and offers flexible, dynamic, and user-friendly string handling with built-in functions for common operations.

### Common Features:
- Strings support operations like concatenation, comparison, input/output, and substring extraction.
- Character arrays are static in size, while string objects are dynamic.

## Ways to Declare Strings in C++
1. Using character arrays with string literals.
2. Using character arrays with indivdual characters and a null terminator.
3. Using character arrays without specifying size.
4. Using string objects from the C++ Standard Library.

### 1. String Declaration Types  
This program demonstrates four ways to declare strings in C++, including character arrays with string literals and character lists, and standard string class usage. It helps visualize how strings are stored and displayed in both C-style and modern C++ approaches. This comparison aids understanding of null terminators, fixed sizes, and flexibility of string.

### 2. String Input and Output  
This program takes two string inputs using character arrays and displays them. It shows how C-style strings behave during input, especially how cin stops at spaces. This highlights limitations of character array.

### 3. String Concatenation  
This program collects first name, last name, college, and course using string variables. It concatenates the names to form a full name using the + operator and prints all values. It demonstrates how simple and intuitive it is to handle strings using the standard string class compared to character arrays.


### 4. Reverse a String
It reverses the entered string by iterating from the last character to the first and builds a new reversed string.
**Algorithm:**
1. Start.
2. Declare two string variables: original and reversed.
3. Take input in the original string.
4. Traverse the string from the end to the beginning.
5. Append each character to the reversed string.
6. Output the reversed string.
7. Stop.

### 5. Check Palindrome 
**Algorithm:**
This program checks whether a given string reads the same forwards and backwards. It prints whether the string is a palindrome or not.
1. Start.
2. Declare a string and take input.
3. Compare characters from both ends moving toward the center.
4. If all corresponding characters match, it's a palindrome.
5. Otherwise, it's not a palindrome.
6. Output the result.
7. Stop.

## Conclusion
We learned how to use arrays and strings in C++ for storing and manipulating data. Arrays allow handling fixed-size collections with operations like input/output, searching, reversing, and calculating sum, average, min, and max. Strings, using both character arrays and the `string` class, support tasks like input, concatenation, reversing, and palindrome checks. Together, these concepts logic nessacary for being a programmer.
