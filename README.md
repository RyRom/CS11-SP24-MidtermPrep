# CS 11 Practice Midterm Practicum

## What you will do:
This assignment will be mocking the practicum you will be completing on the midterm exam. You have 30 minutes to complete the code, you can only use your cheat sheet,do not discuss the questions with your classmates, me, or look up answers until after the allotted time.

This assignment is brokwn down into smaller sections to keep things organized and simple, on the midterm, it will be one big program.

## Instructions:
For each of the small coding assignments below, write code in the appropriate file to satisfy the requirements and produce the same output. You can compile and test your code as much as you want.

**You are able to use code from a previous question and paste it into a different one if it does the same thing.**

## Question 1
Write a C++ program that prompts the user to enter the size of an integer array. Then, ask the user to enter the elements of the array. Finally, display the array elements in reverse order.

### Steps
1. Open the file ```reverseArray.cpp```
2. Ask the user to enter a size of their array, and then prompt them to enter data to populate the array.
3. Loop through the array and print elements in reverse order by index.

Example Output:
```
Enter the size of the array: 5
Enter 5 integers:
1
2
3
4
5

Array elements in reverse order:
5 4 3 2 1
```

### If you don't know how to have the user enter numbers to fill the array, uncomment the array initialization in the starter code and just print that array in reverse.

## Question 2
Write a C++ program to find the sum and average of elements in a floating-point array. Prompt the user to enter the size of the array and the array elements.

### Steps
1. Open the file ```stats.cpp```
2. Ask the user to enter a size of their array, and then prompt them to enter data to populate the array.
3. Iterate through the array and calculate the sum then print out the sum and average of the numbers entered.

**Note: The sum and average MUST BE ROUNDED to 1 decimal place**

Example Output:
```
Enter the size of the array: 4
Enter 4 floating-point numbers:
2.5
3.5
4.5
5.5

Sum of elements: 16.0
Average of elements: 4.0
```

## Question 3
Write a C++ program that takes a string as input and prints the frequency of a specific character in the string.

### Steps
1. Open the file ```frequency.cpp```
2. Ask the user to enter a string. It could be one word or a whole sentence.
3. Ask the user for a specific character to count.
3. Iterate through the string and count the instances of the given character.

Example Output:
```
Enter a string: Programming is my favorite thing to do in the whole world!
Enter a letter to search for: m

Frequency of 'm': 3
```

