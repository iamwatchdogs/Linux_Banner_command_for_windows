/*
 * 		FILE DETAILS :-
 * 		------------
 * 
 *		Project Name 	 					: Banner
 * 		Current File Name					: banner_cmd_arg.cpp
 * 		Programming Language used			        : C++
 * 		Current File Type					: C++ program file ( command line argument driver program )
 * 		Project initiation Date/Time		                : 19th December 2021 05:08 P.M.
 * 		Recent Data/Time of Modification	                : 19th March 2022 12:26 A.M.
 * 		File Status					 	: Verified and working.
 * 		Author							: N.Shamith
 * 
 * 		FILE DESCRIPTION :-
 * 		----------------
 * 				  	This is the closest imitation program written for the "banner" command in Linux Envirnoment. Since the "banner"
 * 		is a command in Linux Envirnoment and the we have to pass arguments to make use of it. The concept of command line argument plays a key
 * 		role in imitating the original command as close as possible & that's what done here. This Source code does the same as the "banner.cpp"
 * 		does, but it's done throght the concept of command line argument. The functioning ( or ) the working of this whole project is explained
 * 		in detailed in file named "README.md".
 * 
 * 		DISCLAIMER :-
 * 		----------
 * 				  This project is just an imitation of "banner" command ( displays ASCII character strings in large size on the
 * 		standard output) in Linux Envirnoment. This was not an original idea, It's just imitaion. The soucre code is only available for
 * 		Educational purpose and to develop it even further. No credit will be given to anyone, including the author of this source code.
 * 
 */
 
 #include <iostream>
 #include "banner.h"
 using namespace std;
 
// Command Line Driven Program
int main(int argc, char * argv[])
{
	// stream flush and new line
	cout << endl;
	
	// Printing OUTPUT
	banner(argv[1]);
	
	// stream flush and new line
	cout <<endl;
	
	return 0;
}
