#Purpose of Header Files

Every C++ program needs at leaset one header file. For example most C++ programms need the *cin* 
object to take input from the user and much other pre written code, Which helps to make programming easier,
so use such functionalites, we need a header file.

Another use case of header files is that when a program grows larger and has many files, it 
becomes a difficult task to define every function repetedly. So instead of this, we can define function 
in seprate files and import them in any other file when required.

#Introduction

Header file contains definitions of function and data types in C++;

These Header files are imported in any C++ code by using #include preprocessor directive;

#contents of Header Files

A Header Files contents 

(a) Function definitions:- A header contains predeined functions such as cin from <iostream>.
(b) Data Type:- Header File also contains some data types definitions, which are frequently used in C++ such as int.
(c) Macros:- Macros is a peice od code that gets replaced by its value. We use macros to avoid 
retyping of whole peice of code if it frequently used in program.

Macros are defined by using #define directive.
Ex:- #define MAX 100;

In program Every time MAX replaced with given value.

(d) Classes:- Header files also contain pre deined classes which provide many usefule functionalites.

#Types of C++ Header Files

(a) Pre-exisiting Header Files
(b) User Defined Header Files

#How do C++ Header Files work?

There are two things we need to remember while including header file.

(a) #include :- This is the pre-preprocessor directive that tells the compiler to process the files 
before compilation and includes all functions and data members.

(b) <filename.h> :- This is the name of the header which you want to include.

#including multiple headers

We can inlcude multiple header files in our program, but when a header file is included more than 
once in a program, the compiler process the contents of that file twice, leading to an error in the program. 
To reolve this error we use conditional preprocessor directives, known as guards.

'''

#ifndef symbol_name
#define Header_file_name

#endif

#ifndef ensure that header is not included again.

'''

#Angle brackets(<>) vs double quotes("")

There are two ways in which we can include a header file in our program:

using Angle brackets:- Angle brackets tells the preprocessor that we didnot write tis file and tells 
the compiler to serach the header file in the directories specififed by the include directive only.

using double quotes:- double quotes tells the preprocessor that we wrote this header file and
tells the compiler to search current directory.