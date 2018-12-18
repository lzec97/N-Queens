#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void InitTable(int n);
void PrintTable(int n);

int Chess_Table [Table_MaxSize * Table_MaxSize];

int main()
{
    int n;
    printf("Please Enter an Integer n:");
    scanf("%d", &n);
    LinkStNode * s;
    InitStack(s);
    //Set up a Chess_Table by entering integer from user
    
    /*Requirement:
        1. No 2 queen share the same row
        2. No 2 queen share the same column
        3. No 2 queen share the same diagonal
    */

    return 0;
}

void PutQueen(int n, LinkStNode * &s)
{
    
}


void InitTable(int n)
{
    
}

void PrintTable(int n)
{
    
}

bool valid(int row, int col)
{
    
}
