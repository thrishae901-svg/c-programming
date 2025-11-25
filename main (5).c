/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,stars,spaces;
    scanf("%d",&n);
    stars=1;
    spaces=n-1;
    for (int i=1;i<=n;i++)
    {
        for (int j=spaces;j>=1;j--)
    printf(" ");
    spaces--;
    for (int j=1;j<=stars;j++)
    {
        printf("*");
    }
    stars++;
    printf("\n");
}

    return 0;
}   