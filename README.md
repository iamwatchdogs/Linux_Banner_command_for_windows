# PROJECT BANNER <img src="https://visitor-badge.laobi.icu/badge?page_id=iamwatchdogs.Linux_Banner_command_for_windows" alt="" align="right" />

## PROJECT INITIZATION :

- The idea of this project started out when I encounted the banner command in Linux Operating System.

- Then to recreate banner command, I used the concept of Pattern Printing and Command line Argument of C language.

- Then to avoid the a bit longer standard I\O function syntax of C language, I decided to programe it in C++.

- Since, Every charater has it's own 'banner' format representation, The number of functions and codelines has increased
  and then i decide to make it complete seperate module apart from the main program.
  
- Initially, I have only made the 'banner' format of Alphanumeric Characters including white space character.

- For testing while coding, I made a simple source code for testing and for a simple demonatratation of the project.

- Then I added the concept of Command Line Argumnet to it and my first demo for the project was ready.

- Later, I have coded the 'banner' formats of all other characters which are present in the standard keyboard and added up
  with a bit of object oriented programming.
 
- Now, The project has been finished with completion of the testing phase.

## WHAT IS BANNER ?

- Banner command in Linux displays ASCII character strings in large size on the standard output.
- This is useful when you want to display a string to be seen when someone logs in using the terminal.
- The strings are created using the character '#'.
- For example,

  ```
  banner "Hello World" ( will give the output as )

 	#    #  #####   #        #         #####          #       #   #####   #####   #        ####	
 	#    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #	
 	######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #	
 	#    #  #       #        #        #     #         # #   # #  #     #  #####   #        #    #	
 	#    #  #       #        #        #     #         ##     ##  #     #  #   #   #        #   #	
 	#    #  ######  #######  #######   #####          #       #   #####   #    #  #######  ####	
  ```

## WHAT DOES THIS PROJECT CONTAINS ?

- This project is divided into three files/sections and they are :

	- Header File.
	   > "**banner.h**"
	  
	- Simple Program file.
	   > "*banner.cpp*"
	  
	- Command Line Argument Program File.
	   > "*banner_cmd_arg.cpp*"
   
   
###### 1) HEADER FILE :-

- ***banner.h*** is the name of the header file which is a part of this project.

- The header file contains a class named "***Banner_Class***" which contains all the required member functions and a single
  friend function.
  
- All the methods/member functions are ***Private***, so we *can not access them directly* through object.

- The Reason for making the methods/member functions is to provide security to the flow of control. By limiting the access
  of the method/member functions, we can make sure that nobody can access the method/member function directly.
 
- Hence, the *only way to access the method/member function* is throught a non-member function of the class who can access 
  private members of the class as a friend named as ***banner()***.
  
- Since, the sub module (*methods/member functions*) of this module (*header file*) depend more on each other it increases
  the cohesion between the module and since, the input string is the only input required to this whole module from the main 
  module/program, thus decrease in coupling.
  
- The Functionning/Working of this header file is explained in detail down below.


###### 2) SIMPLE PROGRAM FILE :-

- **banner.cpp** is the name of the simple program file.

- The main intention of this program file is to test the newly developed module to a test.

- I parallely tested every character which was newly designed to a test through this file.

- And after integrating all of the modules, then i performed the integration test with various inputs/test cases and
  debugged the program if any problem was found.
 
- It was also helpful in demonstrating the expected output and give a better understanding to the people who tried to
  understand this source code.
  

###### 3) COMMAND LINE ARGUMENT PROGRAM FILE :-

- **banner_cmd_arg.cpp** os the name of this command line argument program file.

- This like the last final product/result of the whole project.

- Since, the *banner* command take the argument while typing it in the command line.

- The ***best way to imitate the banner command*** is by *using the concept of command line argument* in the developed source code.

- After finishing of the all coding and testing, at last I developed the this command line argument program which pretty much does
  the same thing but by taking the input arguments mentioned directly in the command line.
 
- **To replicate the banner command**, we have to *name/rename* the complied and built *executable file* as "***banner***".

- Then we have to place in the file location which your command prompt is displaying,
  > *(ex: C:\Users\user_name>_ )*.
 
- go to that location and paste the executable file and then you can use the banner program just like how you use in Linux
  Envirnoment.
  
  ```
  for example,
	C:\Users\user_name>banner "hello world"

 	#    #  #####   #        #         #####          #       #   #####   #####   #        ####	
 	#    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #	
 	######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #	
 	#    #  #       #        #        #     #         # #   # #  #     #  #####   #        #    #	
 	#    #  #       #        #        #     #         ##     ##  #     #  #   #   #        #   #	
 	#    #  ######  #######  #######   #####          #       #   #####   #    #  #######  ####	
	
	C:\Users\user_name>_
  ```

## BEHIND THE SCENES ( WORKING OF THE PROJECT )

- Before you understand the working of this project it's better to give you a small idea about two most important concepts
  (*which usually most of us don't understand*) used in this project and they are,
  
	- Pattern Printing.
	
	- Command Line Argument.
	
- If you have ***no idea*** about *object oriented programming*, then ***ignore*** how i did the class, obj, friend function
  and everything realted to OOPs atleast for now. Because it's only about limiting th access of the function written in 
  the class, nothing more. The remaining logic and functioning is pretty much the same.
 
- If you think you have a decent idea about those two topics then you can move directly to the *working of the project*. 


###### 1) Pattern Printing :

- The basic, traditional pattern printing works on the bases of iterations inside another iteraton which basically
  represented as rows and columns.
 
- Actually, it was never meant to be rows and column but it's easy to understand if we visualize it that way.

- The first loop (or) the first iteration determine the *number of time the new line should be printed* ( or ) ***the number
  of row to be printed***.
 
- but by using a any looping syntax, we'll always get the output in a single line until we give a special symbol "***new
  line***". This is typically called a row.
  
``` 
Program 1:                            Program 2:
 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
| for ( int i = 0; i < 5; ++i ) |     | for ( int i = 0; i < 5; ++i ) |
| {                             |     | {                             |
|	cout << "* ";           |     |	       cout << "* ";          |
| }                             |     |	       cout << '\n';          |
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|     | }			      |
                                      |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
Output :
 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _      Output : 
|                               |      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
| * * * * *                     |     |                               |
|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|     | *                             |
                                      | *                             |
                                      | *                             |
                                      | *                             |
                                      | *                             |
                                      |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|


 
 ```
 
- And the column is just another loop inside the loop of the row, It's more like "*How many seat do you have for a
  single row of bench ?*". The column decide that factor.
  
   ```
  Program :
    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  | for ( int i = 0; i < 5; ++i )       |
  | {                                   |
  |      for ( int j = 0; j < 5; ++j )  |
  |      {                              |
  |             cout << "* ";           |
  |      }                              |
  |      cout << '\n';                  |
  | }                                   |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  Output :
    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                     |
  | * * * * *                           |
  | * * * * *                           |
  | * * * * *                           |
  | * * * * *                           |
  | * * * * *                           |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  ```
- And also the column need not to be like that for all cases. Columns can change from row to row and that how we
  can print any type of pattern accordingly. We can achive that either by finding and applying relation between
  the counter variable used for row iteration *(looping)* or by creating an sepearte variable to create a new
  relation *(mathematical or conditional relation)* with the counter variable used for iterating the column.
  
  ```
  Program :
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  | for ( int i = 0; i < 5; ++i )       |
  | {                                   |
  |      for ( int j = 0; j <= i; ++j ) |
  |      {                              |
  |             cout << "* ";           |
  |      }                              |
  |      cout << '\n';                  |
  | }                                   |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  Output :
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                     |
  | *                                   |
  | * *                                 |
  | * * *                               |
  | * * * *                             |
  | * * * * *                           |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  ```
- Now that you got an basic idea about the pattern printing  we can move on the next topic and then to the working
  of the project.

###### 2) Command Line Argument :

- ***Command Line Argument*** is a concept which is supported by c/c++ programming languages.

- It's basically taking argument from the command line which is used to execute the executable file of our program.

- Since, The program execution starts from the main() function and we can pass argument to any function ( expect for
  void argumented function ).
 
- We can use the main() function to take the arguments given in the command line which is used to execute the program.

- The Program contain command line argument will be like,

  ```
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                     |
  | // for c++ programing language.                                     |
  | #include <iostream>                                                 |
  | using namespace std;  // optional basing on type of the program.    |
  |                                                                     |
  | int main ( int argc, char * argv [] )                               |
  | {                                                                   |
  | //body of the program.                                              |
  | return 0;                                                           |
  | }                                                                   |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  ```
  
- In command line argument, we basically write two argument and traditionally they are named as "**argc**" and "**argv**".

- The "***argc***" is an integer variable which returns the total number of arguments given as arguments in the command line.

- The "***argv***" is an array of the char pointer which store the given argument in the format of character array/ String
  and they can be accessed by specifying the indexing of the required argument in argv[].
 
- Remember that **argv[0]** always stores the name of the program/executable file and from the next index we can access the
  input argument according to the order of the input given in the command line.
  
- Now, that you have understand both the concepts required to understand the working. Let's just jump right in...


## Working of the Project

- The ***Working of this project*** is explained from the execution of the program, right from the ***beginning of execution***,
  from the input itself.
  
- The executable placed should be place in the file location shown in command prompt, the location will be like,
  > *C:\Users\user_name*>_
  
- After palce the executable file, then execute the program by passing the some text *(string)* as argument.
  > C:\Users\user_name>banner "hello world"
  
- Now, the text *(string)* is stored in the **argv[1]** variable. And we use the ***banner()*** to print the '*banner*' format
  of given text *(string)*.
  > banner(argv[1]);
 
- Mind the Syntax of banner(),
  > void banner( std::string str, Banner_Class &obj );
 
- As we see the syntax of the banner() function, we are passing the input string and also an reference object of the "***Banner_Class***".
  Because this a friend function which is not a member of this class but still it can access the members of the class.
  
- As you might have notice that according to syntax we need to pass an object of the class "***Banner_Class***" and yet we are not passing
  anything. It's because, we have given an default argument and hence we need not about creating a new object and then passing it to make
  the friend function work.
  > void banner( std::string str, ***Banner_Class &obj = default_obj*** )		// In function definition

- Keep that aside of awhile, Let's talk about pattern printing application here, I started this project thinking the number of rows to
  be six. So, I have to ***iterate six times*** for the whole string (*each charater of the string*).
 
- We also know that to print a pattern, after fixing the row iteration. We need to focus on column iteration to print the pattern in our
  desired way.
  
- Let's talk about column iteration with an example (* say "Hello World" *). Now, keeping in mind that ***we are going to print a complete
  row before going to the next one***. So, we have to make sure that the single row covers the 'banner' representation of all the characters
  of the input string/character array.
  
- and the best approach (*atleast in my sense*) is to create 'banner' format of each and every character present on the keyboard and use a
  switch-case statement to access the 'banner' repesentation of all the character at that particular line/row and print it as a whole line/
  row before moving to new line/row.
  
- Let me illustrate the visual working of **Row iteration** with an example,

  ```
  argv[1]="Hello world";	// We get the value from command line as an argument.
  
  banner(argv[1]);		// Now we pass "Hello world" as input string to banner() function.
  
  // Now the whole string is going to iterate 6 times (6 rows) same as for any input string.
  
  // at row_counter = 0; it will print all the first line/row 'banner' representation of all characters of the input string.
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  // h(0);   e(0);   l(0);    l(0);     o(0); s_space(0); w(0);   o(0);    r(0);  l(0);     d(0);


  // at row_counter = 1; it will print all the second line/row 'banner' representation of all characters of the input string.
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  // h(1);   e(1);   l(1);    l(1);     o(1); s_space(1); w(1);   o(1);    r(1);  l(1);     d(1);


  // at row_counter = 2; it will print all the third line/row 'banner' representation of all characters of the input string.
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #  |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  // h(2);   e(2);   l(2);    l(2);     o(2); s_space(2); w(2);   o(2);    r(2);  l(2);     d(2);


  // at row_counter = 3; it will print all the fourth line/row 'banner' representation of all characters of the input string.
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #  |
  |  #    #  #       #        #        #     #         # #   # #  #     #  #####   #        #    #  |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  // h(3);   e(3);   l(3);    l(3);     o(3); s_space(3); w(3);   o(3);    r(3);  l(3);     d(3);


  // at row_counter = 4; it will print all the fifth line/row 'banner' representation of all characters of the input string.
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #  |
  |  #    #  #       #        #        #     #         # #   # #  #     #  #####   #        #    #  |
  |  #    #  #       #        #        #     #         ##     ##  #     #  #   #   #        #   #   |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  // h(4);   e(4);   l(4);    l(4);     o(4); s_space(4); w(4);   o(4);    r(4);  l(4);     d(4);


  // at row_counter = 5; it will print all the sixth line/row 'banner' representation of all characters of the input string.
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #  |
  |  #    #  #       #        #        #     #         # #   # #  #     #  #####   #        #    #  |
  |  #    #  #       #        #        #     #         ##     ##  #     #  #   #   #        #   #   |
  |  #    #  ######  #######  #######   #####          #       #   #####   #    #  #######  ####    |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  // h(5);   e(5);   l(5);    l(5);     o(5); s_space(5); w(5);   o(5);    r(5);  l(5);     d(5);

  // And that's how the pattern printing in this project is done...
  ```
  
- Now that you understand how the pattern printing is working, Let's discuss about the flow of data and how it works within
  the system.
  
- As soon as the input string comes into the banner() function. The whole string will be iterated 6 times as show above and
  each time the member function named "***character_print()***" will be called. The syntax of ***character_print()*** is
  > void character_print (char c, int n);
 
- In each row iteration, we call the function ***character_print()*** which require an charater and an integer as arguments and
  we call the function in column iteration of ***the length of the input string***.
  
- Talking about column iteration; for each beginning of a single row iteration, we call the ***character_print()*** starting from
  the first character of the string to the last character of the string. And then it will move on to next row iteration.
  
- Let me illustrate the visual working of ***Column iteration*** with an example,

  ```
  argv[1]="Hello world";	// We get the value from command line as an argument.
  
  banner(argv[1]);		// Now we pass "Hello world" as input string to banner() function.
  
  // Now the whole string is going to iterate 6 times (6 rows) same as for any input string.
  ```
  
  
  - at row_counter = 0; it will print all the first line/row 'banner' representation of all characters of the input string.
  
  ```
  // at column_counter = 0; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('h',0); => calls h(0) and it prints the first line of h();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #                                                                                         |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 1; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('e',0); => calls e(0) and it prints the first line of e();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####                                                                                  |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 2; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',0); => calls l(0) and it prints the first line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #                                                                              |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 3; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',0); => calls l(0) and it prints the first line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #                                                                     |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 4; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('o',0); => calls o(0) and it prints the first line of o();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####                                                       |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 5; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print(' ',0); => calls s_space(0) and it prints the first line of s_space();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####                                                       |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 6; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('w',0); => calls w(0) and it prints the first line of w();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #                                    |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 7; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('o',0); => calls o(0) and it prints the first line of o();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####                            |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 8; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('r',0); => calls r(0) and it prints the first line of r();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####                    |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 9; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',0); => calls l(0) and it prints the first line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #                |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 10; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('d',0); => calls d(0) and it prints the first line of d();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  
  ```
  
  
  - at row_counter = 1; it will print all the first line/row 'banner' representation of all characters of the input string.
  
  ```
  // at column_counter = 0; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('h',1); => calls h(1) and it prints the second line of h();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #                                                                                         |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 1; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('e',1); => calls e(1) and it prints the second line of e();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #                                                                                      |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 2; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',1); => calls l(1) and it prints the second line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #                                                                              |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 3; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',1); => calls l(1) and it prints the second line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #                                                                     |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 4; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('o',1); => calls o(1) and it prints the second line of o();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #                                                      |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 5; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print(' ',1); => calls s_space(1) and it prints the second line of s_space();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #                                                      |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 6; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('w',1); => calls w(1) and it prints the second line of w();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #                                    |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 7; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('o',1); => calls o(1) and it prints the second line of o();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #                           |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 8; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('r',1); => calls r(1) and it prints the second line of r();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #                   |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 9; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',1); => calls l(1) and it prints the second line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #                |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 10; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('d',1); => calls d(1) and it prints the second line of d();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|
  ```
  
  
  - at row_counter = 2; it will print all the first line/row 'banner' representation of all characters of the input string.
  
  ```
  // at column_counter = 0; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('h',2); => calls h(2) and it prints the third line of h();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######                                                                                         |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 1; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('e',2); => calls e(2) and it prints the third line of e();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####                                                                                  |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 2; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',2); => calls l(1) and it prints the third line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #                                                                              |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 3; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',2); => calls l(2) and it prints the third line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #                                                                     |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 4; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('o',2); => calls o(2) and it prints the third line of o();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #                                                      |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 5; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print(' ',2); => calls s_space(2) and it prints the third line of s_space();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #                                                      |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 6; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('w',2); => calls w(1) and it prints the third line of w();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #                                    |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 7; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('o',2); => calls o(1) and it prints the third line of o();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #                           |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 8; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('r',2); => calls r(2) and it prints the third line of r();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #                   |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 9; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('l',2); => calls l(2) and it prints the third line of l();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #                |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  // at column_counter = 10; function calling will be done as character_print(input_str[colum_counter], row_counter);
  // which derives as, character_print('d',2); => calls d(2) and it prints the third line of d();
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #  |
  |                                                                                                 |
  |                                                                                                 |
  |                                                                                                 |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  ```
  

  - This process continue till the end of all 6 iteration of row and 'length of input string' times of column iteration.
  
  - At the end it results, something like this...
  
  ```
   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
  |                                                                                                 |
  |  #    #  #####   #        #         #####          #       #   #####   #####   #        ####    |
  |  #    #  #       #        #        #     #         #   #   #  #     #  #    #  #        #   #   |
  |  ######  #####   #        #        #     #         #  # #  #  #     #  #    #  #        #    #  |
  |  #    #  #       #        #        #     #         # #   # #  #     #  #####   #        #    #  |
  |  #    #  #       #        #        #     #         ##     ##  #     #  #   #   #        #   #   |
  |  #    #  ######  #######  #######   #####          #       #   #####   #    #  #######  ####    |
  |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|

  ```

- That's the whole behind the scenes (or) working of this project... I tried my best to explain the working in detail.



## DISCLAIMER

- This project is just an ***imitation*** of "banner" command ( displays ASCII character strings in large size on the standard
  output) in *Linux Envirnoment*. This was not an original idea, It's just imitaion. The soucre code is only available for 
  ***Educational purpose and to develop it even further***. *~~No credit~~ will be given to anyone, including the author of this 
  source code*.


## NOTE

- The soucre code is also available for reusing in your presonal projects, Since it's easy to ***use, manage, extend*** it's 
  functionalities and to ***debug*** *( if any )*.
