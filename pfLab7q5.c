// we were tasked with finding the number of vowels and consonants in a given string.
#include<stdio.h>
#include<string.h>	//important for strlen to work
int main()
{
// reads a string and counts the number of vowels and consonants in it.
	char name[25];	
	
	printf("Enter a word, or a sentence with spaces:\n");
	scanf("%[^\n]",&name);
	
	int c, spaces=0;
	int length = strlen(name);
	
	for(int i=0; i<length; i++)	// finding the whitespaces (space)
	{if(name[i]==' '){spaces+=1;}}

	char vowels[]={'a','e','i','o','u'};
	char VOWELS[]={'A','E','I','O','U'};
	
	int i, d=0, present=0;
	for(i=0; i<length; i++)
	{
		for(int abc=0; abc<5; abc++)
		{
			if(name[i]==VOWELS[abc])
			{d = d+1; present=1; break;}
		}
		if(!present){		
			for(int abc=0; abc<5; abc++)
			{
			if(name[i]==vowels[abc])
			{d = d+1; break;}
			}
		}
		present=0;
	}
	printf("The number of vowels is: %d and consonants is: %d",d,length-d-spaces);
	return 0;
}
