#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> 
int main()
{
   int i,LogonId; char a;
   char cmdpic[100]={"copy D:\\Wallpapers\\"};
   char address[100]={".jpg C:\\backgroundDefault.jpg"};
   FILE *in = fopen("C:\\Users\\Tejendra\\Desktop\\LogonPic.txt","r+");
   fscanf(in,"%d",LogonId);
   printf("%d",LogonId);
   char ch = (char) LogonId;
   const char *Logon = &ch;
   strcat(cmdpic,Logon);
   strcat(cmdpic,address);
   system(cmdpic);
   printf(cmdpic);
   system("pause");
   return 0;
}
