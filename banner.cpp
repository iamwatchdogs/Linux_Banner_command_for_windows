/*
 * 		FILE DETAILS :-
 * 		------------
 * 
 *		Project Name 	 					: Banner
 * 		Current File Name					: Banner.cpp
 * 		Programming Language used			        : C++
 * 		Current File Type					: C++ program file ( ordinary driver program )
 * 		Project initiation Date/Time				: 19th December 2021 04:58 P.M.
 * 		Recent Data/Time of Modification			: 19th March 2022 12:30 A.M.
 * 		File Status						: Verified and working.
 * 		Author							: N.Shamith
 * 
 * 		FILE DESCRIPTION :-
 * 		----------------
 * 						     This a simple driver program which is used to demonatrate the functionalitiy / working of the
 * 		"Banner" project. The main source code is written in the header file named "banner.h" (which is also included in this source code).
 * 		The functioning ( or ) the working of this whole project is explained in detailed in file named "README.md".
 * 
 * 		DISCLAIMER :-
 * 		----------
 * 						      This project is just an imitation of "banner" command ( displays ASCII character strings in large
 *		size on the standard output) in Linux Envirnoment. This was not an original idea, It's just imitaion. The soucre code is only available 
 * 		for Educational purpose and to develop it even further. No credit will be given to anyone, including the author of this source code.
 * 
 */

#include <iostream>
#include "banner.h"
using namespace std;

// Driver Program
int main ( void )
{
	// Declaration
	string str;
	
	// Requesting INPUT
	cout << "Enter a string : ";
	getline(cin,str);
	
	//	Printing OUTPUT
	cout << endl;
	banner(str);
	
	return 0;
}
