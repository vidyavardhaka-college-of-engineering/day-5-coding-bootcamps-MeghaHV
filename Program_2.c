//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	//Write your code here
 char rev[10];
  int i,j,k,count=0;
  for(i=0;str[i]!='\0';i++ )
  {
    count++;
  }
  k=count-1;
for(j=0;j<count;j++)
{
rev[j]=str[k];
k--;
}
rev[j]='\0';
  printf("%s",rev);
  printf("\n");
  return 0;
}
