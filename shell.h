#ifndef SHELL_H
#define SHELL_H

#include "system.h"
#include "string.h"
#include "kb.h"
#include "screen.h"
#include "types.h"
#include "util.h"

void launch_shell()
{
	
	while(1)
	{
		    print("\nJARVIS: ");
		    string ch = readStr();
		    if(strEql(ch,"clear"))
		    {
		            clearScreen();
		    }
		    else if(strEql(ch,"exit"))
		    {
		    	print("\nGood Bye!\n");
			break;
		    }
		    else if(strEql(ch,"echo"))
		    {
			echo();
		    }
		    
		    else if(strEql(ch,"help"))
		    {
		    	help();
		    }
		    
		    else if(strEql(ch,"reverse-print"))
		    {
		    	reverse_print();
		    }
		    
		    
		    else
		    {
		            print("\nBad command!\n");
		    } 
	} 
}

void help()
{
	print("\nclear              : Clears the screen");
	print("\nreverse-print      : Reprint a given text in reverse order");
	print("\necho               : Reprint a given text");
	print("\nexit               : Quits the current shell");
	
	
	print("\n\n");
}



void echo()
{
	print("\nEnter a sentence: ");
	string statement = readStr();
	print("\n\n");
	print(statement);
	print("\n");
}

void reverse_print()
{
	print("\nEnter a sentence: ");
	string statement = readStr();
	int i=strlength(statement)-1;
	print("\n\n");
	for(i;i>=0;i--){
		printch(statement[i]);
	}
	print("\n");
}



#endif

