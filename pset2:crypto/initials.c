/****************************************************************************
 * initials.c
 *
 * Fanney Zhu
 * fanneyzhu@college.harvard.edu
 *
 * Computer Science 50
 * Problem Set 2
 *
 *
 * Prompt user for name and output their initials in uppercase.
 ***************************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // get name from user
    string name = GetString();
    
    // print first initial in uppercase
    printf("%c", toupper(name[0]));
    
    // print other initials in uppercase
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] == ' ' && i != n - 1)
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    
    // print new line
    printf("\n");
    
    return 0;
}
