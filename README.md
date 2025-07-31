# Arrays-String-in-cpp
Aim: To study and implement C++ arrays and strings.                                 
Tools: GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler).
## Theory

An array in C++ is a collection of elements of the same data type stored in contiguous memory locations. It allows indexed access using zero-based indexing. Arrays are useful for storing multiple values of the same type and performing operations like  searching, sorting, etc.

### Key Features:
- Fixed size defined at the time of declaration.
- Access elements using index notation (`arr[i]`).
- Stored in continuous memory blocks.

---

## Algorithms

### 1. Array Input and Output 

**Algorithm:**
1. Start.
2. Read the number of elements n.
3. Declare an array marks of size n.
4. Input n elements from the user into marks.
5. Traverse the array and print each element.
6. Stop.

### 2. Search an Element in Array 
**Algorithm:**
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

**Algorithm:**
1. Start.
2. Read the number of elements n.
3. Declare and input array marks[n].
4. Print original array.
5. Loop from index n-1 to 0 and print elements in reverse.
6. Stop.

### 4. Sum and Average of Array 

**Algorithm:**
1. Start.
2. Read number of elements n.
3. Declare array marks[n] and input values.
4. Initialize Sum = 0.
5. Loop through the array and add each element to  Sum.
6. Compute Average = Sum / n.
7. Print sum and average.
8. Stop.

### 5. Minimum and Maximum in Array 
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

## Algorithms

### 1. String Declaration 
**Algorithm:**
1. Start.
2. Declare multiple strings using both character arrays and string class.
3. Output all declared strings.
4. Stop.

### 2. Input and Output of Strings 
**Algorithm:**
1. Start.
2. Declare two character arrays.
3. Take input for both strings using standard input.
4. Display the entered strings using standard output.
5. Stop.

### 3. String Concatenation
**Algorithm:**
1. Start.
2. Declare strings for first name, last name, college, and course.
3. Take input for all strings.
4. Concatenate first name and last name into a full name.
5. Display full name, college name, and course name.
6. Stop.

### 4. Reverse a String 
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
1. Start.
2. Declare a string and take input.
3. Compare characters from both ends moving toward the center.
4. If all corresponding characters match, it's a palindrome.
5. Otherwise, it's not a palindrome.
6. Output the result.
7. Stop.

## Conclusion
We learned how to use arrays and strings in C++ for storing and manipulating data. Arrays allow handling fixed-size collections with operations like input/output, searching, reversing, and calculating sum, average, min, and max. Strings, using both character arrays and the `string` class, support tasks like input, concatenation, reversing, and palindrome checks. Together, these concepts logic nessacary for being a programmer.
