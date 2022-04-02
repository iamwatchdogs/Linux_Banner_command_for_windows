/*
 * 		FILE DETAILS :-
 * 		------------
 * 
 *		Project Name 	 					: Banner
 * 		Current File Name					: banner.h
 * 		Programming Language used                               : C++
 * 		Current File Type					: C++ Header file
 * 		Project initiation Date/Time                            : 18th December 2021 12:13 A.M.
 * 		Recent Data/Time of Modification                        : 02th April 2022 10:49 P.M.
 * 		File Status                                             : Verified and working.
 * 		Author                                                  : N.Shamith
 * 
 * 		FILE DESCRIPTION :-
 * 		----------------
 * 					This is c++ header file which contain all the crucial methods/member functions required to convert
 * 		the given text into it's equivalent hash symbol representation which happens to the main goal of this project. 
 * 		All of these member functions belong to "Banner_Class" class and can not be accessed directly from the object. 
 * 		The only way to make use of these methods/member functions are throught the input_manager type method/member 
 * 		function explained below. This file contains mainly three types of methods/member functions in this file and
 * 		they are :
 * 
 * 			# Character_Representation :
 * 
 * 				  The representation of characters like alphabetical letters, numbers, symbols in their respective
 * 				hash forms come into this category. The use of switch-case statements plays a crucial role in this
 * 				section. The functioning ( or ) the working of these switch statements are explained in file named
 * 				"README.md".
 * 
 * 				The methods/member functions like "a(), b(), ..., s_0(), s_1(), ..., s_ampersand(),s_backslash(),
 * 				...,e.t.c." comes under this category.
 * 
 * 
 * 			# Character_selection :
 * 
 * 					    In this type of method/member function the input character will be distinguished between
 * 				other sysmbols and then it calls the respected hash form represetative function according to the
 * 				recived input. The functioning ( or ) the working of this method/member function is explained in
 * 				detailed in file named "README.md". 
 * 
 * 				The method/member function named "character_print()" comes under this category.
 * 
 * 
 * 			# Input_manager : 
 * 					Unlike the above two types of methods/member functions, this type of function ( friend
 * 				function ) is morelike a mediator between the methods/member functions of the class and the
 * 				input from the user. This a non-member function ( which means it's not part of a class i.e., a
 * 				friend function ) by which 'ONLY' we can use the above types of methods/member functions.The
 * 				functioning ( or ) the working of this method/member function is explained in detailed in file
 *  				named "README.md".
 * 
 * 				The friend function named "banner()" comes under this category.
 * 
 * 
 * 		DISCLAIMER :-
 * 		----------
 * 					   This project is just an imitation of "banner" command ( displays ASCII character strings in
 * 		large size on the standard output) in Linux Envirnoment. This was not an original idea, It's just imitaion. 
 * 		The soucre code is only available Educational purpose and to develop it even further. No credit will be
 * 		given to anyone, including the author of this source code.
 * 
 * 		NOTE :-
 * 		----
 *		+ This project is not an exact/perfect imitation as the original banner format consists of 7 line of equivalent it's
 *		  banner representation but i decided to make 6 line of equivalent representaion of the input string. And also there
 *		  minor change to the original banner representaion, just to make it a bit different to the original version of it.
 * 		+ The soucre code is also available for reusing in your presonal projects, Since it's easy to use, manage, extend it's 
 *		  functionalities and to debug ( if any ).
 * 
 */ 

class Banner_Class
{
	// # Character_Representation methods/member functions :-
	//   -------------------------------------------------
	
	// All these methods/member functions belong to private Banner_Class class.
	
	void a ( int n )
	{
		switch ( n )
		{
				case 0 :
					std::cout << "  ##    ";		// 1.   ##  
					break;					// 2.  #  # 
				case 1 :					// 3. #    #
					std::cout << " #  #   ";		// 4. ######
					break;					// 5. #    #
				case 2 :					// 6. #    #
					std::cout << "#    #  ";
					break;
				case 3 :
					std::cout << "######  ";
					break;
				case 4 :
				case 5 :
					std::cout << "#    #  ";
		}
	}

	void b ( int n )
	{
		switch ( n )
		{
				case 0 :
						std::cout << "#####   ";		// 1. ##### 
						break;					// 2. #    #
				case 1 :						// 3. ##### 
						std::cout << "#    #  ";		// 4. #    #
						break;					// 5. #    #
				case 2 :						// 6. ##### 
						std::cout << "#####   ";
						break;
				case 3 :
				case 4 :
						std::cout << "#    #  ";
						break;
				case 5 :
						std::cout << "#####   ";
		}
	}

	void C ( int n )
	{
		switch ( n )
		{
				case 0 :
                        std::cout << " #####  ";		// 1.  #####
                        break;					// 2. #     
                case 1 :					// 3. #
                case 2 :					// 4. #
                case 3 :					// 5. #
                case 4 :					// 6.  #####
                        std::cout << "#       ";
                        break;
                case 5 :
                        std::cout << " #####  ";
		}
	}

	void d ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "####    ";		// 1. ####  
                        break;					// 2. #   # 
                case 1 :					// 3. #    # 
                        std::cout << "#   #   ";		// 4. #    #
                        break;					// 5. #   # 
                case 2 :					// 6. ####  
                case 3 :
                        std::cout << "#    #  ";
                        break;
                case 4 :
                        std::cout << "#   #   ";
                        break;
                case 5 :
                        std::cout << "####    ";
		}
	}

	void e ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#####   ";		// 1. ##### 
                        break;					// 2. #     
                case 1 :					// 3. ##### 
                        std::cout << "#       ";		// 4. #     
                        break;					// 5. #     
                case 2 :					// 6. ######
                        std::cout << "#####   ";
                        break;
                case 3 :
                case 4 :
                        std::cout << "#       ";
                        break;
                case 5 :
                        std::cout << "######  ";
		}
	}

	void f ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "######  ";		// 1. ######
                        break;					// 2. #     
                case 1 :					// 3. ####  
                        std::cout << "#       ";		// 4. #     
                        break;					// 5. #     
                case 2 :					// 6. #     
                        std::cout << "####    ";
                        break;
                case 3 :
                case 4 :
                case 5 :
                        std::cout << "#       ";
		}
	}

	void g ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "########  ";		// 1. ########
                        break;					// 2. #      #
                case 1 :					// 3. #       
                        std::cout << "#      #  ";		// 4. #   ####
                        break;					// 5. #   #  #
                case 2 :					// 6. #####  #
                        std::cout << "#         ";
                        break;
                case 3 :
                        std::cout << "#   ####  ";
                        break;
                case 4 :
                        std::cout << "#   #  #  ";
                        break;
                case 5 :
                        std::cout << "#####  #  ";
		}
	}

	void h ( int n )
	{
		switch ( n )
		{
                case 0 :					// 1. #    #	
                case 1 :					// 2. #    #
                        std::cout << "#    #  ";		// 3. ######
                        break;					// 4. #    #
                case 2 :					// 5. #    #
                        std::cout << "######  ";		// 6. #    #
                        break;
                case 3 :
                case 4 :
                case 5 :
                        std::cout << "#    #  ";
        }
	}

	void i ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#######  ";		// 1. #######
                        break;					// 2.    #
                case 1 :					// 3.    #   
                case 2 :					// 4.    #   
                case 3 :					// 5.    #   
                case 4 :					// 6. #######
                        std::cout << "   #     ";
                        break;
                case 5 :
                        std::cout << "#######  ";
		}
	}

	void j ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << " #######  ";		// 1.  #######
                        break;					// 2.     #   
                case 1 :					// 3.     #   
                case 2 :					// 3.     #   
                case 3 :					// 5. #   #   
                        std::cout << "    #     ";		// 6. #####   
                        break;
                case 4 :
                        std::cout << "#   #     ";
                        break;
                case 5 :
                        std::cout << "#####     ";
		}
	}

	void k ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#   #  ";		// 1. #   #
                        break;				// 2. #  # 
                case 1 :				// 3. # #  
                        std::cout << "#  #   ";		// 4. ##   
                        break;				// 5. # #  
                case 2 :				// 6. #   # 
                        std::cout << "# #    ";
                        break;
                case 3 :
                        std::cout << "##     ";
                        break;
                case 4 :
                        std::cout << "# #    ";
                        break;
                case 5 :
                        std::cout << "#  #   ";
		}
	}

	void l ( int n )
	{
		switch ( n )
		{
                case 0 :					// 1. #      
                case 1 :					// 2. #      
                case 2 :					// 3. #      
                case 3 :					// 4. #      
                case 4 :					// 5. #      
                        std::cout << "#        ";		// 6. #######
                        break;
                case 5 :
                        std::cout << "#######  ";
		}
	}

	void m ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#     #  ";		// 1. #     #
                        break;					// 2. ##   ##
                case 1 :					// 3. # # # #
                        std::cout << "##   ##  ";		// 4. #  #  #
                        break;					// 5. #     #
                case 2 :					// 6. #     #
                        std::cout << "# # # #  ";
                        break;
                case 3 :
                        std::cout << "#  #  #  ";
                        break;
                case 4 :
                case 5 :
                        std::cout << "#     #  ";
		}
	}

	void N ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#     #  ";		// 1. #     #
                        break;					// 2. # #   #
                case 1 :					// 3. #  #  #
                        std::cout << "# #   #  ";		// 4. #   # #
                        break;					// 5. #    ##
                case 2 :					// 6. #     #
                        std::cout << "#  #  #  ";
                        break;
                case 3 :
                        std::cout << "#   # #  ";
                        break;
                case 4 :
                        std::cout << "#    ##  ";
                        break;
                case 5 :
                        std::cout << "#     #  ";
		}
	}

	void o ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << " #####   ";		// 1.  ##### 
                        break;					// 2. #     #
                case 1 :					// 3. #     #						
                case 2 :					// 4. #     #
                case 3 :					// 5. #     #
                case 4 :					// 6.  ##### 
                        std::cout << "#     #  ";
                        break;
                case 5 :
                        std::cout << " #####   ";
		}
	}

	void p ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#####   ";		// 1. ##### 
                        break;					// 2. #    #
                case 1 :					// 3. #    #
                case 2 :					// 4. #####    
                        std::cout << "#    #  ";		// 5. #     
                        break;					// 6. # 
                case 3 :
                        std::cout << "#####   ";
                        break;
                case 4 :
                case 5 :
                        std::cout << "#       ";
		}
	}

	void q ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#######  ";		// 1. #######
                        break;					// 2. #     #
                case 1 :					// 3. #     #
                case 2 :					// 4. #   # #
                        std::cout << "#     #  ";		// 5. #######
                        break;					// 6.      # 
                case 3 :
                        std::cout << "#   # #  ";
                        break;
                case 4 :
                        std::cout << "#######  ";
                        break;
                case 5 :
                        std::cout << "     #   ";
		}
	}

	void r ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#####   "; 		// 1. ##### 
                        break;					// 2. #    #
                case 1 :					// 3. #    #		
                case 2 :					// 4. ##### 
                        std::cout << "#    #  ";		// 5. #   # 
                        break;					// 6. #    #
                case 3 :
                        std::cout << "#####   ";
                        break;
                case 4 :
                        std::cout << "#   #   ";
                        break;
                case 5 :
                        std::cout << "#    #  ";
		}
	}

	void s ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << " #####   ";		// 1.  ##### 
                        break;					// 2. #      
                case 1 :					// 3.  ##### 
                        std::cout << "#        ";		// 4.       #
                        break;					// 5. #     #
                case 2 :					// 6.  ##### 
                        std::cout << " #####   ";
                        break;
                case 3 :
                        std::cout << "      #  ";
                        break;
                case 4 :
                        std::cout << "#     #  ";
                        break;
                case 5 :
                        std::cout << " #####   ";
		}
	}

	void t ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#######  ";	// 1. #######
                        break;				// 2.    #   
                case 1 :				// 3.    #   
                case 2 :				// 4.    #   
                case 3 :				// 5.    #   
                case 4 :				// 6.    #   
                case 5 :
                        std::cout << "   #     ";
		}
	}

	void u ( int n )
	{
		switch ( n )
		{
                case 0 :					// 1. #      #
                case 1 :					// 2. #      #
                case 2 :					// 3. #      #
                case 3 :					// 4. #      #
                case 4 :					// 5. #      #
                        std::cout << "#      #  ";		// 6.  ###### 
                        break;
                case 5 :
                        std::cout << " ######   ";
		}
	}

	void v ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#         #  ";			// 1. #         #
                        break;						// 2.  #       # 
                case 1 :						// 3.   #     #  
                        std::cout << " #       #   ";			// 4.    #   #   
                        break;						// 5.     # #    
                case 2 :						// 6.      #     
                        std::cout << "  #     #    ";
                        break;
                case 3 :
                        std::cout << "   #   #     ";
                        break;
                case 4 :
                        std::cout << "    # #      ";
                        break;
                case 5 :
                        std::cout << "     #       ";
		}
	}

	void w ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#       #  ";		// 1. #       #
                        break;					// 2. #   #   #
                case 1 :					// 3. #  # #  #
                        std::cout << "#   #   #  ";		// 4. # #   # #
                        break;					// 5. ##     ##
                case 2 :					// 6. #       #
                        std::cout << "#  # #  #  ";
                        break;
                case 3 :
                        std::cout << "# #   # #  ";
                        break;
                case 4 :
                        std::cout << "##     ##  ";
                        break;
                case 5 :
                        std::cout << "#       #  ";
		}
	}

	void x ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#     #  ";		// 1. #     #
                        break;					// 2.  #   # 
                case 1 :					// 3.   # #  
                        std::cout << " #   #   ";		// 4.    #   
                        break;					// 5.  #   # 
                case 2 :					// 6. #     #
                        std::cout << "  # #    ";
                        break;
                case 3 :
                        std::cout << "   #     ";
                        break;
                case 4 :
                        std::cout << " #   #   ";
                        break;
                case 5 :
                        std::cout << "#     #  ";
		}
	}

	void y ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "#     #  ";		// 1. #     #
                        break;					// 2.  #   # 
                case 1 :					// 3.   # #  
                        std::cout << " #   #   ";		// 4.    #   
                        break;					// 5.    #
                case 2 :					// 6.    #
                        std::cout << "  # #    ";
                        break;
                case 3 :
                case 4 :
                case 5 :
                        std::cout << "   #     ";
		}
	}

	void Z ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "######  ";		// 1. ######
                        break;					// 2.     # 
                case 1 :					// 3.    #  
                        std::cout << "    #   ";		// 4.   #   
                        break;					// 5.  #    
                case 2 :					// 6. ######
                        std::cout << "   #    ";
                        break;
                case 3 :
                        std::cout << "  #     ";
                        break;
                case 4 :
                        std::cout << " #      ";
                        break;
                case 5 :
                        std::cout << "######  ";
			}
	}

	void s_0 ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << " ###   ";		// 1.  ### 
                        break;				// 2. #   #
                case 1 :				// 3. #   #
                case 2 :				// 4. #   # 
                case 3 :				// 5. #   #
                case 4 :				// 6.  ### 
                        std::cout << "#   #  ";
                        break;
                case 5 :
                        std::cout << " ###   ";
		}
	}

	void s_1 ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "   #     ";		// 1.    #   
                        break;					// 2.  # #   
                case 1 :					// 3. #  #   
                        std::cout << " # #     ";		// 4.    #   
                        break;					// 5.    #   
                case 2 :					// 6. #######
                        std::cout << "#  #     ";
                        break;
                case 3 :
                case 4 :
                        std::cout << "   #     ";
                        break;
                case 5 :
                        std::cout << "#######  ";
		}
	}

	void s_2 ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << " #####    ";		// 1.  #####  
                        break;					// 2. #     # 
                case 1 :					// 3.      #  
                        std::cout << "#     #   ";		// 4.    #    
                        break;					// 5.  #      
                  case 2 :					// 6. ########
                        std::cout << "     #    ";
                        break;
                case 3 :
                        std::cout << "   #      ";
                        break;
                case 4 :
                        std::cout << " #        ";
                        break;
                case 5 :
                        std::cout << "########  ";
		}
	}

	void s_3 ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << " #####   ";		// 1.  ##### 
                        break;					// 2. #     #
                case 1 :					// 3.      # 
                        std::cout << "#     #  ";		// 4.      # 
                        break;					// 5. #     #
                case 2 :					// 6.  ##### 
                case 3 :
                        std::cout << "     #   ";
                        break;
                case 4 :
                        std::cout << "#     #  ";
                        break;
                case 5 :
                        std::cout << " #####   ";
		}
	}

	void s_4 ( int n )
	{
		switch ( n )
		{
                case 0 :
                        std::cout << "   ##     ";		// 1.    ##   
                        break;					// 2.   # #   
                case 1 :					// 3.  #  #   
                        std::cout << "  # #     ";		// 4. ########
                        break;					// 5.     #   
                case 2 :					// 6.     #   
                        std::cout << " #  #     ";
                        break;
                case 3 :
                        std::cout << "########  ";
                        break;
                case 4 :
                case 5 :
                        std::cout << "    #     ";
		}
	}

	void s_5 ( int n )
	{
        switch ( n )
        {
                case 0 :
                        std::cout << "#######  ";			// 1. #######
                        break;						// 2. #      
                case 1 :						// 3. ###### 
                        std::cout << "#        ";			// 4.       #
                        break;						// 5. #     #
                case 2 :						// 6.  ##### 
                        std::cout << "######   ";
                        break;
                case 3 :
                        std::cout << "      #  ";
                        break;
                case 4 :
                        std::cout << "#     #  ";
                        break;
                case 5 :
                        std::cout << " #####   ";
        }
	}

	void s_6 ( int n )
	{
        switch ( n )
        {
                case 0 :
                        std::cout << " #####   ";		// 1.  ##### 
                        break;					// 2. #      
                case 1 :					// 3. ###### 
                        std::cout << "#        ";		// 4. #     #
                        break;					// 5. #     #
                case 2 :					// 6.  ##### 
                        std::cout << "######   ";
                        break;
                case 3 :
                case 4 :
                        std::cout << "#     #  ";
                        break;
                case 5 :
                        std::cout << " #####   ";
        }
	}

	void s_7 ( int n )
	{
        switch ( n )
        {
                case 0 :
                        std::cout << "#########  ";		// 1. #########
                        break;					// 2.        # 
                case 1 :					// 3.       #  
                        std::cout << "       #   ";		// 4.      #   
                        break;					// 5.     #    
                case 2 :					// 6.    #     
                        std::cout << "      #    ";
                        break;
                case 3 :
                        std::cout << "     #     ";
                        break;
                case 4 :
                        std::cout << "    #      ";
                        break;
                case 5 :
                        std::cout << "   #       ";
        }
	}

	void s_8 ( int n )
	{
        switch ( n )
        {
                case 0 :
                        std::cout << " #####   ";		// 1.  ##### 
                        break;					// 2. #     #
                case 1 :					// 3.  ##### 
                        std::cout << "#     #  ";		// 4. #     #
                        break;					// 5. #     #
                case 2 :					// 6.  ##### 
                        std::cout << " #####   ";
                        break;
                case 3 :
                case 4 :
                        std::cout << "#     #  ";
                        break;
                case 5 :
                        std::cout << " #####   ";
        }
	}

	void s_9 ( int n )
	{
        switch ( n )
        {
                case 0 :
                        std::cout << " ######   ";		// 1.  ###### 
                        break;					// 2. #      #
                case 1 :					// 3.  #######
                        std::cout << "#      #  ";		// 4.        #
                        break;					// 5.  #     #
                case 2 :					// 6.   ##### 
                        std::cout << " #######  ";
                        break;
                case 3 :
                        std::cout << "       #  ";
                        break;
                case 4 :
                        std::cout << "#     #   ";
                        break;
                case 5 :
                        std::cout << " #####    ";
        }
       
	}

	void s_space ( int n )
	{
		switch(n)
		{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
						std::cout << "       ";
		}
	}

	void s_dot ( int n )
	{
		switch(n)
		{
				case 0:						// 1.          
				case 1:						// 2.          
				case 2:						// 3.          
						std::cout << "         ";	// 4.    ###   
						break;				// 5.    ###   
				case 3:						// 6.    ###   
				case 4:
				case 5:
						std::cout << " ### ";
		}
	}

	void s_inverted_comma ( int n )
	{
		switch(n)
		{
				case 0:						// 1.    ###   
				case 1:						// 2.    ###   
						std::cout << "   ###   ";	// 3.     #    
						break;				// 4.    #     
				case 2:						// 5.          
						std::cout << "    #    ";	// 6.          
						break;
				case 3:
						std::cout << "   #     ";
						break;
				case 4:
				case 5:
						std::cout << "         ";
		}
	}

	void s_comma ( int n )
	{
		switch(n)
		{
				case 0:							// 1.           
				case 1:							// 2.           
						std::cout << "          ";		// 3.   ####    
						break;					// 4.   ####    
				case 2:							// 5.      #    
				case 3:							// 6.     #     
						std::cout << "  ####    ";
						break;
				case 4:
						std::cout << "     #    ";
						break;
				case 5:
						std::cout << "    #     ";
		}
	}

	void s_paranthesis_left ( int n )
	{
		switch(n)
		{
				case 0:						// 1.     ##  
						std::cout << "    ##  ";	// 2.    #    
						break;				// 3.   #     
				case 1:						// 4.   #     
						std::cout << "   #    ";	// 5.    #    
						break;				// 6.     ##  
				case 2:
				case 3:
						std::cout << "  #     ";
						break;
				case 4:
						std::cout << "   #    ";
						break;
				case 5:
						std::cout << "    ##  ";
		}
	}

	void s_paranthesis_right( int n )
	{
		switch(n)
		{
				case 0:							// 1.   ##    
						std::cout << " ##      ";		// 2.     #   
						break;					// 3.      #  
				case 1:							// 4.      #  
						std::cout << "   #     ";		// 5.     #   
						break;					// 6.   ##    
				case 2:
				case 3:
						std::cout << "    #    ";
						break;
				case 4:
						std::cout << "   #     ";
						break;
				case 5:
						std::cout << " ##      ";
		}
	}

	void s_inverted_cap ( int n )
	{
		switch(n)
		{
				case 0:							// 1.     #    
						std::cout << "    #    ";		// 2.    # #   
						break;					// 3.   #   #  
				case 1:							// 4.          
						std::cout << "   # #   ";		// 5.          
						break;					// 6.          
				case 2:
						std::cout << "  #   #  ";
						break;
				case 3:
				case 4:
				case 5:
						std::cout << "         ";
		}
	}

	void s_dollar ( int n )
	{
		switch(n)
		{
			case 0 :			// 1.   #     
                        std::cout << "  #     ";	// 2.  ####   
                        break;				// 3. # #     
                case 1 :				// 4.   # #   
                        std::cout << " ####   ";	// 5.  ###    
                        break;				// 6.   #     
                case 2 :
                        std::cout << "# #     ";    
                        break;
                case 3 :
                        std::cout << "  # #   ";
                        break;
                case 4 :
                        std::cout << " ###    ";
                        break;
                case 5 :
                        std::cout << "  #     ";
					
		}
	}

	void s_at_the_rate ( int n )
	{
		switch(n)
		{
				case 0:							// 1.   ######  
						std::cout << "  ######    ";		// 2.  #      # 
						break;					// 3.  # ###  # 
				case 1:							// 4.  # #####  
						std::cout << " #      #   ";		// 5.  #        
						break;					// 6.   ######  
				case 2:
						std::cout << " # ###  #   ";
						break;
				case 3:
						std::cout << " # #####    ";
						break;
				case 4:
						std::cout << " #          ";
						break;
				case 5:
						std::cout << "  ######    ";
		}
	}

	void s_reversed_quotation ( int n )
	{
		switch(n)
		{
				case 0:							// 1.  ### 
				case 1:							// 2.  ### 
						std::cout << " ###   ";			// 3.   #  
						break;					// 4.    # 
				case 2:							// 5.      
						std::cout << "  #    ";			// 6.      
						break;
				case 3:
						std::cout << "   #   ";
						break;
				case 4:
				case 5:
						std::cout << "       ";
		}
	}

	void s_tilde ( int n )
	{
		switch(n)
		{
				case 0:							// 1.          
						std::cout << "           ";		// 2.   ##     
						break;					// 3.  #  #  # 
				case 1:							// 4.      ##  
						std::cout << "  ##       ";		// 5.          
						break;					// 6.          
				case 2:
						std::cout << " #  #  #   ";
						break;
				case 3:
						std::cout << "     ##    ";
						break;
				case 4:
				case 5:
						std::cout << "           ";
		}
	}

	void s_exclamation_mark ( int n )
	{
		switch(n)
		{
				case 0:							// 1.   ###  
				case 1:							// 2.   ###  
				case 2:							// 3.   ###  
						std::cout << "  ###    ";		// 4.    #   
						break;					// 5.         
				case 3:							// 6.    #   
						std::cout << "   #     ";
						break;
				case 4:
						std::cout << "         ";
						break;
				case 5:
						std::cout << "   #     ";
						break;
						
		}
	}

	void s_hash_mark ( int n )
	{
		switch(n)
		{
				case 0:							// 1.     #  #    
						std::cout << "   #  #    ";		// 2.   ########  
						break;					// 3.     #  #    
				case 1:							// 4.     #  #    
						std::cout << " ########  ";		// 5.   ########  
						break;					// 6.     #  #    
			case 2:
				case 3:
						std::cout << "   #  #    ";
						break;
				case 4:
						std::cout << " ########  ";
						break;
				case 5:
						std::cout << "   #  #    ";

		}
	}

	void s_percentage ( int n )
	{
		switch(n)
		{
				case 0:							// 1.  ###   #   
						std::cout << " ###   #   ";		// 2.  # #  #    
						break;					// 3.  ### #     
				case 1:							// 4.     # ###  
						std::cout << " # #  #    ";		// 5.    #  # #  
						break;					// 6.   #   ###  
				case 2:
						std::cout << " ### #     ";
						break;
				case 3:
						std::cout << "    # ###  ";
						break;
				case 4:
						std::cout << "   #  # #  ";
						break;
				case 5:
						std::cout << "  #   ###  ";
		}
	}

	void s_ampersand ( int n )
	{
		switch(n)
		{
				case 0:							// 1.    ##    
						std::cout << "   ##     ";		// 2.   #  #   
						break;					// 3.    ##    
				case 1:							// 4.  #   # # 
						std::cout << "  #  #    ";		// 5.  #    #  
						break;					// 6.   ###  # 
				case 2:
						std::cout << "   ##     ";
						break;
				case 3:
						std::cout << " #   # #  ";
						break;
				case 4:
						std::cout << " #    #   ";
						break;
				case 5:
						std::cout << "  ###  #  ";
				
		}
	}

	void s_star ( int n )
	{
		switch(n)
		{
				case 0:							// 1.            
						std::cout << "             ";		// 2.  #   #   # 
						break;					// 3.    # # #   
				case 1:							// 4.  ######### 
						std::cout << " #   #   #   ";		// 5.    # # #   
						break;					// 6.  #   #   # 
				case 2:
						std::cout << "   # # #     ";
						break;
				case 3:
						std::cout << " #########   ";
						break;
				case 4:
						std::cout << "   # # #     ";
						break;
				case 5:
						std::cout << " #   #   #   ";
						break;
						
		}
	}

	void s_hyphen ( int n )
	{
		switch(n)
		{
				case 0:						// 1.        
				case 1:						// 2.        
						std::cout << "       ";		// 3.  ##### 
						break;				// 4.        
				case 2:						// 5.        
						std::cout << " ##### ";		// 6.        
						break;
				case 3:
				case 4:
				case 5:
						std::cout << "       ";
		}
	}

	void s_underscore ( int n )
	{
		switch(n)
		{
				case 0:						// 1.        
				case 1:						// 2.        
				case 2:						// 3.        
				case 3:						// 4.        
				case 4:						// 5.        
						std::cout << "       ";		// 6.  ##### 
						break;
				case 5:
						std::cout << " ##### ";
		}
	}

	void s_plus ( int n )
	{
		switch(n)
		{
				case 0:						// 1.          
						std::cout << "          ";	// 2.     #    
						break;   			// 3.     #    
				case 1:						// 4.  ####### 
				case 2: 					// 5.     #    
						std::cout << "    #     ";	// 6.     #    
						break;
				case 3:	
						std::cout << " #######  ";
						break;
				case 4:
				case 5:
						std::cout << "    #     ";
		}
	}

	void s_equal_to ( int n )
	{
		switch(n)
		{
				case 0:						// 1.        
						std::cout << "         ";	// 2.  ##### 
						break; 				// 3.        
				case 1:						// 4.  ##### 
						std::cout << " #####   ";	// 5.        
						break;				// 6.        
				case 2:
						std::cout << "         ";
						break;
				case 3:
						std::cout << " #####   ";
						break;
				case 4:
				case 5:
						std::cout << "         ";
		}
	}

	void s_vertical_bar ( int n )
	{
		switch(n)
		{
				case 0:						// 1.  ## 
				case 1:						// 2.  ## 
				case 2:						// 3.  ## 
				case 3:						// 4.  ## 
				case 4:						// 5.  ## 
				case 5:						// 6.  ## 
						std::cout << " ##   ";
		}
	}

	void s_backslash ( int n )
	{
		switch(n)
		{
				case 0:							// 1.   #       
						std::cout << " #        ";		// 2.    #      
						break;					// 3.     #     
				case 1:							// 4.      #    
						std::cout << "  #       ";		// 5.       #   
						break;					// 6.        #  
				case 2:
						std::cout << "   #      ";
						break;
				case 3:
						std::cout << "    #     ";
						break;
				case 4:
						std::cout << "     #    ";
						break;
				case 5:
						std::cout << "      #   ";
		}
	}

	void s_square_bracket_left ( int n )
	{
		switch(n)
		{
				case 0:						// 1.  ##### 
						std::cout << " ##### ";		// 2.  #     
						break;				// 3.  #     
				case 1:						// 4.  #     
				case 2:						// 5.  #     
				case 3:						// 6.  ##### 
				case 4:
						std::cout << " #     ";
						break;
				case 5:
						std::cout << " ##### ";
		}
	}

	void s_square_bracket_right ( int n )
	{
		switch(n)
		{
				case 0:						// 1.  ##### 
						std::cout << " #####    ";	// 2.      # 
						break;				// 3.      # 
				case 1:						// 4.      # 
				case 2:						// 5.      # 
				case 3:						// 6.  ##### 
				case 4:
						std::cout << "     #    ";
						break;
				case 5:
						std::cout << " #####    ";
		}
	}

	void s_cruve_bracket_left ( int n )
	{
		switch(n)
		{
				case 0:							// 1.     ##### 
						std::cout << "    ##### ";		// 2.    #      
						break;					// 3.  ##       
				case 1:							// 4.    #      
						std::cout << "   #      ";		// 5.    #      
						break;					// 6.     ##### 
				case 2:
						std::cout << " ##       ";
						break;
				case 3:
				case 4:
						std::cout << "   #      ";
						break;
				case 5:
						std::cout << "    ##### ";
		}
	}

	void s_cruve_bracket_right ( int n )
	{
		switch(n)
		{
				case 0:
						std::cout << " #####      ";		// 1.  #####    
						break;					// 2.       #   
				case 1:							// 3.        ## 
						std::cout << "      #     ";		// 4.       #   
						break;					// 5.       #   
				case 2:							// 6.  #####    
						std::cout << "       ##   ";
						break;
				case 3:
				case 4:
						std::cout << "      #     ";
						break;
				case 5:
						std::cout << " #####      ";
		}
	}

	void s_colon ( int n )
	{
		switch(n)
		{
				case 0:						// 1.       
						std::cout << "      ";		// 2.   ##  
						break;				// 3.   ##  
				case 1:						// 4.       
				case 2:						// 5.   ##  
						std::cout << " ##   ";		// 6.   ##  
						break;
				case 3:
						std::cout << "      ";
						break;
				case 4:
				case 5:
						std::cout << " ##   ";
		}
	}

	void s_semi_colon ( int n )
	{
		switch(n)
		{
				case 0:						// 1.   ##  
						std::cout << " ##    ";		// 2.       
						break;				// 3.   ##  
				case 1:						// 4.   ##  
						std::cout << "       ";		// 5.   #    
						break; 				// 6.  #     
				case 2:
				case 3:
						std::cout << " ##    ";
						break;
				case 4:
						std::cout << " #     ";
						break;
				case 5:
						std::cout << "#      ";
		}
	}

	void s_doble_inverted_commas ( int n )
	{
		switch(n)
		{
				case 0:						// 1.  ## ## 
				case 1:						// 2.  ## ## 
						std::cout << " ## ##  ";	// 3.  #  #  
						break;				// 4.        
				case 2:						// 5.        
						std::cout << " #  #   ";	// 6.        
						break;
				case 3:
				case 4:
				case 5:
						std::cout << "        ";
		}
		
	}

	void s_less_than ( int n )
	{
		switch(n)
		{
				case 0:						// 1.        
						std::cout << "         ";	// 2.      # 
						break;				// 3.    #   
				case 1:						// 4.  #     
						std::cout << "     #   ";	// 5.    #   
						break;				// 6.      # 
				case 2:
						std::cout << "   #     ";
						break;
				case 3:
						std::cout << " #       ";
						break;
				case 4:
						std::cout << "   #     ";
						break;
				case 5:
						std::cout << "     #   ";
		}
	}

	void s_greater_than ( int n )
	{
		switch(n)
		{
				case 0:						// 1.        
						std::cout << "        ";	// 2.  #     
						break;				// 3.    #   
				case 1:						// 4.      # 
						std::cout << " #      ";	// 5.    #   
						break;				// 6.  #     
				case 2:
						std::cout << "   #    ";
						break;
				case 3:
						std::cout << "     #  ";
						break;
				case 4:
						std::cout << "   #    ";
						break;
				case 5:
						std::cout << " #      ";
		}
	}

	void s_question_mark ( int n )
	{
		switch(n)
		{
				case 0:							// 1.   #####   
						std::cout << "  #####   ";		// 2.  #     #  
						break;					// 3.     ###   
				case 1:							// 4.     #     
						std::cout << " #     #  ";		// 5.           
						break;					// 6.     #     
				case 2:
						std::cout << "    ###   ";
						break;
				case 3:
						std::cout << "    #     ";
						break;
				case 4:
						std::cout << "          ";
						break;
				case 5:
						std::cout << "    #     ";
		}
	}

	void s_forward_slash ( int n )
	{
		switch(n)
		{
				case 0:							// 1.        #  
						std::cout << "      #   ";		// 2.       #   
						break;					// 3.      #    
				case 1:							// 4.     #     
						std::cout << "     #    ";		// 5.    #      
						break;					// 6.   #       
				case 2:
						std::cout << "    #     ";
						break;
				case 3:
						std::cout << "   #      ";
						break;
				case 4:
						std::cout << "  #       ";
						break;
				case 5:
						std::cout << " #        ";
		}
	}

	// # Character_selection :-
	//	 -------------------
	
	//	This is also an private member which can be accessed directly
	
	void character_print (char c, int n)
	{
        	switch(c)
        	{
                	case 'a' :
                	case 'A' :
				a(n);   break;

                	case 'b' :
                	case 'B' :
                        	b(n);   break;

                	case 'c' :
                	case 'C' :
				C(n);   break;

                	case 'd' :
                	case 'D' :
                        	d(n);   break;

               		case 'e' :
                	case 'E' :
                        	e(n);   break;

                	case 'f' :
                	case 'F' :
                        	f(n);   break;

                	case 'g' :
                	case 'G' :
                        	g(n);   break;

                	case 'h' :
                	case 'H' :
                        	h(n);   break;

                	case 'i' :
                	case 'I' :
                        	i(n);   break;

                	case 'j' :
                	case 'J' :
                        	j(n);   break;

                	case 'k' :
                	case 'K' :
                        	k(n);   break;

                	case 'l' :
                	case 'L' :
                        	l(n);   break;

                	case 'm' :
                	case 'M' :
                        	m(n);   break;

                	case 'n' :
                	case 'N' :
                        	N(n);   break;

                	case 'o' :
                	case 'O' :
                        	o(n);   break;

                	case 'p' :
                	case 'P' :
                        	p(n);   break;

                	case 'q' :
                	case 'Q' :
                        	q(n);   break;

                	case 'r' :
                	case 'R' :
                        	r(n);   break;

                	case 's' :
                	case 'S' :
                        	s(n);   break;

                	case 't' :
                	case 'T' :
                        	t(n);   break;

                	case 'u' :
                	case 'U' :
                        	u(n);   break;

                	case 'v' :
                	case 'V' :
                        	v(n);   break;

                	case 'w' :
                	case 'W' :
                        	w(n);   break;

                	case 'x' :
                	case 'X' :
                        	x(n);   break;

                	case 'y' :
                	case 'Y' :
                        	y(n);   break;

                	case 'z' :
                	case 'Z' :
                        	Z(n);   break;

                	case '0' :
                        	s_0(n);        break;

                	case '1' :
                        	s_1(n);        break;

                	case '2' :
                        	s_2(n);        break;

                	case '3' :
                        	s_3(n);        break;

                	case '4' :
                        	s_4(n);        break;

                	case '5' :
                        	s_5(n);        break;

                	case '6' :
                        	s_6(n);        break;

                	case '7' :
                        	s_7(n);        break;

                	case '8' :
                        	s_8(n);        break;

                	case '9' :
                        	s_9(n);        break;
                	case '.' :
					s_dot(n);	   break;
			case '+':
					s_plus(n);	   break;
			case '*':
					s_star(n);	   break;
			case ':':
					s_colon(n);	   break;
                	case ' ' :
					s_space(n);	   break;
			case '~':
					s_tilde(n);	   break;
			case ',' :
					s_comma(n);	   break;
			case '$':
					s_dollar(n);	  break;
			case '-':
					s_hyphen(n); 	  break;
			case '=':
					s_equal_to(n);			break;
			case '#' :
					s_hash_mark(n);			break;
			case '&':
					s_ampersand(n);			break;
			case '\\':
					s_backslash(n);			break;
			case '<':
					s_less_than(n);			break;
			case ';':
					s_semi_colon(n);		break;
			case '_':
					s_underscore(n);		break;
			case '%':
					s_percentage(n);		break;
			case '@':
					s_at_the_rate(n);		break;
			case '>':
					s_greater_than(n);		break;
			case '|':
					s_vertical_bar(n);		break;
			case '^':
					s_inverted_cap(n);		break;
			case '/':
					s_forward_slash(n);		break;
			case '?':
					s_question_mark(n);		break;
			case '\'' :
					s_inverted_comma(n);    	break;
			case '!':
					s_exclamation_mark(n);		break;
			case '(' :
					s_paranthesis_left(n);  	break;
			case ')' :
					s_paranthesis_right(n); 	break;
			case '`':
					s_reversed_quotation(n);	break;
			case '{':
					s_cruve_bracket_left(n);	break;
			case '}':
					s_cruve_bracket_right(n);	break;
			case '[':
					s_square_bracket_left(n);	break;
			case ']':
					s_square_bracket_right(n);	break;
			case '\"':
					s_doble_inverted_commas(n);	break;
        	}
		return;
	}
	
	friend void banner( std::string str, Banner_Class &obj );
	
}default_obj;	// Declaration of Default object of the Banner_Class.

// # Input_manager :-
//   -------------

// This is an friend function by which 'ONLY' we can access the
// method/member function to perform the required operation.

// Even thought is was declared in the class using friend keyword,
// it's not considered as a method/member function of the class.

void banner( std::string str, Banner_Class &obj = default_obj )	// The Default object is passed as the default agrument to the friend function.
{
	for( int i = 0; i < 6; ++i )				// Represents the 6 lines(or) 6 row iterations.
	{
		for( char j : str )				// Sequential iteration which represebts the column iterations.
			obj.character_print( j, i );
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl << "\n";
	return ;
}
