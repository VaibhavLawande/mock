#include<stdio.h>
#include<string.h>
void my_fun(char *);
int main()
{
 char s1[100]="i work at thundersoft";
 void (*fp)(char *)=my_fun;
 fp(s1);
 }
void my_fun(char *s)
{
char largest[30];
int count = 0, max = 0,i,j,index=0,length;
 length = strlen(s);
 index=0;
 for( i = 0 ; i< length ; i++)
 {
  if(s[i] != ' ')
  {
   count++;
  }
  else
  {
   if(count > max)
   {
    max = count;
    index = i-max;
   }
   count = 0;
  }
 }
 if(count>max)
 {
  max = count;
  index = length-max;
 }

 j=0;
 for(i=index;i< index+max;i++)
 {
  largest[j] = s[i];
  j++;
 }

 largest[j] = '\0';
 printf("Longest word is: %s\n", longest);
 printf("And its length is: %d\n",max);
}


