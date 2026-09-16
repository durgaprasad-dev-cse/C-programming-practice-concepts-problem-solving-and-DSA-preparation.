Structure of a C Program
📌 Overview

Every C program follows a basic structure that helps the compiler understand the program and determines how the program is organized and executed.

Understanding the structure of a C program is one of the first steps in learning C programming.

🧱 Basic Structure

A simple C program generally follows this structure:

Preprocessor Directive
        ↓
main() Function
        ↓
Statements
        ↓
return Statement
        ↓
Program Terminates
1. Preprocessor Directive

A C program may begin with a preprocessor directive.

Example:

#include <stdio.h>
What is #include?

#include is a preprocessor directive.

It tells the preprocessor to include the required declarations from a header file before the actual compilation process.

What is stdio.h?

stdio.h stands for Standard Input/Output Header.

It provides declarations for standard input and output functions such as:

printf()
scanf()

Therefore, when a program uses printf() or scanf(), stdio.h is commonly included.

2. The main() Function

The main() function is the normal entry point of a C program.

Example:

int main()

Program execution begins through the main() function.

Why is int used?

int indicates that the main() function returns an integer value.

Therefore:

int main()

means that the main() function returns an integer when it finishes execution.

3. Curly Braces { }

Curly braces define the body of a function or block.

Example:

int main()
{
    // statements
}

Everything between { and } belongs to the body of main().

They define the beginning and end of the block of instructions.

4. Statements

Statements are instructions that tell the computer what to do.

Example:

printf("Hello World");

This statement tells the program to display Hello World on the screen.

A C program can contain multiple statements.

Statements are executed according to the program's control flow.

5. Semicolon ;

Most C statements end with a semicolon.

Example:

printf("Hello World");
return 0;

The semicolon indicates the end of a statement.

It is an important part of C syntax.

6. printf()

printf() is a standard input/output function used to display information on the screen.

Example:

printf("Hello World");

The text inside the quotation marks is displayed as output.

The printf() function is declared in the stdio.h header file.

7. return 0;

Example:

return 0;

This statement returns the integer value 0 from the main() function.

A return value of 0 traditionally indicates that the program completed successfully.

The logic is:

main()
   ↓
Program executes
   ↓
return 0
   ↓
Program completed successfully
🔄 Execution Logic

The basic logic of a C program can be understood as:

C Source Code
      ↓
Preprocessor
      ↓
Compiler
      ↓
Executable Program
      ↓
Program Starts
      ↓
main()
      ↓
Statements Execute
      ↓
return 0
      ↓
Program Terminates
💻 Example
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
Output
Hello World
🔍 Line-by-Line Explanation
Code	Purpose
#include <stdio.h>	Includes the standard input/output header
int main()	Defines the main function
{	Starts the body of main()
printf()	Displays output
;	Ends the statement
return 0;	Returns success from main()
}	Ends the body of main()
⭐ Key Points
A C program normally has a main() function as its entry point.
#include is a preprocessor directive.
Header files provide declarations needed by programs.
{ } define blocks of code.
Statements contain instructions for the computer.
Most statements end with ;.
printf() is used for displaying output.
return 0; indicates successful completion of main().
