#include<stdio.h>
int main()
{
 int i;
 FILE *fp;
 char ch;
 fp=fopen("/home/desktop/s.txt","r");
 //(/home/desktop/s.txt) which is written is to be changed by the path of
 // your file which u want to the console to read.
 if(fp==NULL)
 printf("Error in opening the File...\n");
 while(1)
 {
  ch=fgetc(fp);
  if(ch=='\n')
  {
   i++;
   printf("\n(Line address:%d)",i);
  }
  else if(ch==EOF)
  {
   break;
  }
  printf("%c",ch);
 }
 fclose(fp);
 return(0);
}
