# HW1_Pointers

###Assignment 1: Basics of Pointers
The first program demonstrates the basic use of pointers. I created an integer variable and then created a pointer that stores the address of that integer. The address of the integer was printed using both &number and the pointer. Both showed the same address because the pointer points to the integer. The value of the integer was also changed using: *ptr=25; After this operation, the value of the original integer changed. A pointer stores the memory address of another variable. By dereferencing the pointer with *, I can access and modify the original value.

###Assignment 2: Pointer Arithmetic
The second program uses a pointer with an array of five integers. The pointer starts at the first element of the array. Pointer arithmetic is then used to move through the array: *(ptr+i). The program prints each value and then changes the values using the pointer. After that, the modified array is printed using both the pointer and the array name. Adding to a pointer moves it through the elements of an array. Changing an element through the pointer also changes the original array because they access the same data in memory.

###Assignment 3: Pointers and Functions
The third program uses pointers with a swap() function. Two integer variables are created in main(). Their addresses are passed to the function: swap(&x,&y); The function received pointers to the two variables: void swap(int *a, int *b). The function uses these pointers to exchange the values. For example, if the values befor function are: x=10, y=20 ster the swap they become: x=20, y=10. Passing addresses to a function allows the function to modify the original variables instead of only working with copies of their values.

###Assignment 4: Pointers to Pointers
The fourth program demonstrates a double pointer. First, an integer variable is created. A pointer is then created that points to the integer. Finally, another pointer is created that points to the first pointer. The relationship can be shown as: doublePtr -> ptr -> number.  The value of the integer can be accessed using:*ptr or **dptr. Both give the same integer value. A pointer can point to another pointer. A double pointer requires two dereference operations to reach the original integer value.

###Assignment 5: Strings and Character Pointers
The fifth program uses a character pointer to work with the string "Hello". A pointer is created and set to the beginning of the string. A counter is also initialized to zero. A while loop is used to move through the string. *ptr is used to access and print the current character. After printing each character, the counter is increased by one and ptr++ moves the pointer to the next character. The loop continues until the pointer reaches the null character '\0', which marks the end of the string. The program prints Hello and reports that the string contains 5 characters. This program showed that a character pointer can be used to move through a string without using array indexing. The same loop can be used to both print and count the characters. Increasing the pointer with ptr++ moves it to the next character, and the null character '\0' tells the program when to stop.

This assignment helped me understand how pointers are used in C. I learned that pointers store memory addresses and can be used to directly access and change values. I also learned how pointer arithmetic works with arrays, how pointers allow functions to modify original variables, how double pointers work, and how character pointers can be used to work with strings. Overall, the assignments showed that pointers are useful when working directly with memory, arrays, functions, and strings.

###Use of AI
In the scope of this homework th AI was used to help me with the steps needed to connect my work to GitHub and push the completed assignment to my repository. I also used it to improve the structure, organization, and wording of this report.
