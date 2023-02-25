#include<stdio.h>

int main(void)
{
	char a;
	printf("Enter an alphabet: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&a);


switch (a)
	{case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c is a vowel",a);
		break;
	default:
		printf("%c is a consonant.",a);
	}

return 0;

}


