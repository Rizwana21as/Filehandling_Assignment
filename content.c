//Description: Write a C program to read file contents and display on console.

#include <stdio.h>
int main()
{
    FILE* ptr;
    char ch;
    char buf[20]; 
    int i=0;
    // Opening file in reading mode
    ptr = fopen("ok.txt", "r");
 
    if (ptr==NULL)
    {
        printf("file can't be opened \n");
        return 0;
    }
    printf("content of this file are \n");
 
    // Printing what is written in file
    // character by character using loop.

    while((ch=fgetc(ptr))!=EOF)
    {
        buf[i++]=ch;
    }
   buf[i]='\0'; 
    // Closing the file
    fclose(ptr);
    puts(buf);
    return 0;
}
