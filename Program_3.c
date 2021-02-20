//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
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
  for(i=0;i<count;i++)
  {
  if(str[i]==rev[i])
  {
  printf("It is a Palindrome.\n");
  }
  }
  printf("It is not a Palindrome.\n");
  

	
	return 0;
}
