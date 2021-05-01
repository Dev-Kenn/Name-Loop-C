#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*Mark Kenneth Ferrer DICT 1-3*/
int main()
{
	char name[30];
	int a;
	
		p("Enter your full name: ");
		s("%[^\n]", &name);
		for (a=1; a<=20; a++)
	{
		p("%s\n", name);
	}

	
	return 0;
}
