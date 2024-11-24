#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("first_file.txt","r");
    if(fp1==NULL)
    {
        printf("Error: File is not opening.");
        exit (1);
    }
    fp2=fopen("second_file.txt","w");
        if(fp2==NULL)
        {
          printf("Unable to open second file.");
          exit (1);
        }
         while(1)
        {   ch=fgetc(fp1);
            
          if(ch==EOF)
           { break;
           }
           fputc(ch,fp2);
        }
        printf("File copied successfully.");
        printf("\nName: Isha Negi \nRoll no.:24 CE 47");
        fclose(fp1);
        fclose(fp2);
        return 0;
}        
