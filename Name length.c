#include <stdio.h>
void main()
{
    char s[10];
    int t;
    clrscr();
    printf("Enter your Name\n");
    gets(s);
    t=strlen(s);
    printf("Lenth of %s is %d",s,t);
    getch();
}
