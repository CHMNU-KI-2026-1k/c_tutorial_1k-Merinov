/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int functionType;
int signal = 1;

int IfWork()
{
    whil:
        if (signal != 5) { //condition to interrupt
                
            if (1) //work part
            {
                printf("if working...\n");
            }
                
            ++signal;
            goto whil;
        }
    
        printf("\nif while done its work");
        return 0;
}

int WhileWork()
{
    while (signal != 5)
    {
        printf("while working...\n");
        
        ++signal;
    }
    
    printf("\nfunction while done its work");
    return 1;
}

void FunctionSelection(int functionType) {
    if (functionType == 0) { IfWork(); } else { WhileWork(); };
    
}

int main()
{
    srand(time(NULL));
    functionType = rand() % 2;
    
    FunctionSelection(functionType);
	_getch();
}
