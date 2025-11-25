/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,key,flag;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter the key:");
    scanf("%d",&key);
    int arr1[n];
    printf("Enter the array elements:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr1[i]);
        if(arr1[i]==key)
        printf;
        {
            flag=1;
            break;
        }
    }
    if(flag=0)
    printf("key is not found\n");
    else
    printf("key is found\n");

    return 0;
}
output
Enter size of an array:5
Enter the key:40
Enter the array elements:10 20 30 40 50
key is found
