#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char *nameformat(char *text)
{
	int i;
	char *blank = (char*)malloc(sizeof(text));
    int c = 0, d = 0;
	while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }
   blank[d] = '\0';
   for(i=0; blank[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((blank[i]>='a' && blank[i]<='z'))
				blank[i]=blank[i]-32; 
			continue;
		}
		if(blank[i]==' ')
		{
			++i;
			if(blank[i]>='a' && blank[i]<='z')
			{
				blank[i]=blank[i]-32; 
				continue; 
			}
		}
		else
		{
			if(blank[i]>='A' && blank[i]<='Z')
				blank[i]=blank[i]+32; 
		}
	}
	return blank;
}

int main()
{
	char text[100];
	printf("Enter some text\n");
	gets(text);
	printf("String becomes: %s\n", nameformat(text));
	getch();
	return 0;
}
