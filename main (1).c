/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

                        //   STRING & SUBSTRING


// AIM : TO PRINT A STRING AND DISPLAY THE REPEATATION OF SUBSTRING

#include <stdio.h>
#include <string.h>  // we are using string header file because of strln
 
char str[100], sub[100];
int count = 0, count1 = 0;
 
void main()
{
    int i, j, l, l1, l2;  //declarement of variable
 
    printf("\nEnter a string : ");  //printing of string minimum of 100  array size
    scanf("%[^\n]s", str);
 
    l1 = strlen(str);
 
    printf("\nEnter a substring : ");  //printing of substring minimum of 100 array size
    scanf(" %[^\n]s", sub);
 
    l2 = strlen(sub);
 
    for (i = 0; i < l1;)        // For loping the statement we are using for loop in this case
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);
}

//RESULT : THUS THE STRING IS DISPLAYED AND REPETATION OF SUBSTRIG IS DONE.