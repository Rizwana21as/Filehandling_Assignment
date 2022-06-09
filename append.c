//Description: Write a C program to append content to a file.

#include <stdio.h>
#include <stdlib.h> 
int main()
{
      FILE *fp1, *fp2;
      char fname1[50],fname2[50],c;
      printf("Enter filename to open for reading : ");
      scanf("%s", fname1);
      // Open one file for reading
      fp1 = fopen(fname1, "r");
      if (fp1 == NULL)
     {
            printf("%s file does not exist..", fname1);
            exit(0);
      }
      printf("Enter filename to append the content : ");
      scanf("%s", fname2);
      // Open another file for appending content
      fp2 = fopen(fname2, "a");
      if (fp2 == NULL)
      {
            printf("%s file does not exist...", fname2);
            exit(0);
      }
      printf("Content in %s appended to %s", fname1,fname2);
      fclose(fp1);
      fclose(fp2);
      return 0;
}
