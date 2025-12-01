/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;
    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    scanf("%d", &A[i][j]);
    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    scanf("%d", &B[i][j]);
    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++){
    C[i][j] = 0;
    for(k = 0; k < 3; k++)
    C[i][j] += A[i][j] * B[i][j];
}
for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    printf("%d ", C[i][j]);
    printf("\n");
}
return 0;
}