//Description: Write a C program to create a file and write contents, save and close the file.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;   /* file pointer*/
    char fName[20];
 
    printf("Enter file name to create :");
    scanf("%s",fName);
 
    /*creating (open) a file*/
    fp=fopen(fName,"w");
    /*check file created or not*/
    if(fp==NULL)
    {
        printf("File does not created!!!");
        exit(0); /*exit from program*/
    }
 
    printf("File created successfully.");
    /*writting into file*/
    putc('A',fp);
    putc('B',fp);
    putc('C',fp);
 
    printf("\nData written successfully.");
    
    fclose(fp);
 
    /*again open file to read data*/
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
        exit(0);
    }
 
    printf("\nContents of file is :\n");
    printf("%c",getc(fp));
    printf("%c",getc(fp));
    printf("%c",getc(fp));
    /* Success message */
    printf("\nFile created and saved successfully:\n");

    fclose(fp);
    return 0;
}
