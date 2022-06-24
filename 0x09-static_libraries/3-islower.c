int _islower(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 0;
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	return (i);
}

