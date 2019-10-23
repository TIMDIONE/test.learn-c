# include <stdio.h>
int main()
{
	int ch = 0;
	while (ch=getchar() != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A'&&ch <= '9')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	return 0;
}