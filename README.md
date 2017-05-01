# OS-Project - Jarvis 

## About
* Building our own Operating System using 

## TO COMPILE THE CODE:
Run the makefile by writing the code `make`

    ____________________
## |-----What's new-----|

** In build.sh
-We added the "-ffreestanding" label to prevent the compiler "GCC" from using any other libraries except what we define ourselves.

** In include/
-We added two headers: "math.h" , "kb.h"

** In include/math.h
-This header contains two functions

** In include/kb.h
-This header is used to take data from the user using keyboard.

** In include/screen.h
-We updated the print function to make it execute faster (Check the function code for more informations)

   ___________________
## |--Keyboard Theory--|

The keyboard is one of the devices which we interact with using Ports (Unlike screen device)
To interact with the keyboard means to take data from it (or to send data to it), and to do that all we need to do is to read from the address port reserved for it, The ports used to interact with the keyboard(and the mouse) are 0x60 and 0x64, but since we can not write data directly to these addresses using the C programming language we will be using the inportb and outportb functions that we have defined in the previous episodes since these couple of functions are written in assembly and they are the gate to pass our data where we want it to be.
        @@..@@
       @@@::@@@
       @ @::@ @
     @ @ @::@ @ @
     @@@ @::@ @@@
         @::@
     @@@@@::@@@@@
         @::@
     @@@ @::@ @@@
     @@@ @::@ @@@
       @      @
 
## Team Members
* Salman Shah
* Aiman Abdullah
* Jyoti Prakash
* Abhishek S.
