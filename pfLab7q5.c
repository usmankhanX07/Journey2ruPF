// we were tasked with finding the number of vowels and consonants in a given string.
#include<stdio.h>
int main()
{
// reads a string and counts the number of vowels and consonants in it.
// try incoporating for spaces and for uppercase vowels.
	char name[25];	
	for(int i=24; i>=0; i--)  //setting all to zero
		{name[i]=0;}
	
	printf("Enter a word, or a sentence with no spaces:\n");
	scanf("%s",&name);
	
	int c;
	
	for(int i=0; i<25; i++)	//find the length being occupied by the characters and not zero
	{if(name[i]=='\0'){c = i; break;}}	//starts from beginning of array until it finds \0 as rest are 0.
	
	char vowels[]={'a','e','i','o','u'};
	
	int i, d=0;
	for(i=0; i<=c; i++)
	{
		for(int abc=0; abc<5; abc++)
		{
			if(name[i]==vowels[abc])
			{d = d+1;}
		}
	}
	printf("The number of vowels is: %d and consonants is: %d",d,c-d);
	return 0;
}
