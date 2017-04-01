#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/types.h"
#include <stdio.h>


kmain()
{
       clearScreen();
       print("Welcome to JARVIS Operating System\n");
       string condition = "1"; 
       while (condition)
       {
                print("\nJARVIS> ");
                
                string ch = readStr();
                if(strEql(ch,"clear"))
                {
                        clearScreen();
                }
                
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
	print("Good Buy :)");

        
}
