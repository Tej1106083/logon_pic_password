#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> 
int rdtsc()    
{    
    __asm__ __volatile__("rdtsc");    
}
int main()
{
   int i,j;
   char cmd[100]={"net user Tej "}, command[8][50], a;
   char cmdpic[100]={"copy D:\\MyPics\\Images\\Logon\\"};
   char pic[16][2]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"}; 
   char address[100]={".jpg C:\\backgroundDefault.jpg"};
   FILE *in1,*in2;
   in1=fopen("D:\\MyPics\\Images\\Logon\\logp.dll","r+");
   in2=fopen("C:\\sampsw.dll","w+");
   if(in1==NULL) { printf("Error Opening Password Hash File, Kindly Contact to the Administrator"); goto end;}
   for(i=0;a!=EOF;i++)
   {fscanf(in1,"%[^\n]",command[i]); a=fgetc(in1);}
   srand(rdtsc());
   i=rand()%8; fputs(command[i],in2);
   j=rand()%2;
   strcat(cmd,command[i]);
   strcat(cmdpic,pic[8*j+i]);
   strcat(cmdpic,address);
   system(cmd); system(cmdpic); fclose(in1); fclose(in2);
   end: return 0;
}
