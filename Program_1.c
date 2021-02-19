//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[10]; 
	scanf("%s", str);

	//Write your code 
    int i,count=0;

  for(i=0;str[i]!='\0';i++)
  {
  if(str[i]=='a'||
  str[i]=='e'||
  str[i]=='i'||
  str[i]=='o'||
  str[i]=='u')
  {
    count++;
  }
  }
  printf("%d",count);

	return 0;
}
