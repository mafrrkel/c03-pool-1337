#include <stdio.h>
#include <unistd.h>


char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;

	if (*to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
                        	return (&str[i]);
		}
		i++;
	}
	return (0);
}
int	main(void)
{
	char st[15]= "hello mohamede";
	char find[9] = "mohamede";
	char *ptr;
	int i = 0;
	ptr = ft_strstr(st,find);
	if (*ptr == '\0')
	{
		write(1, "NUllE", 5);
		return 0;
	}

	while (ptr[i] != '\0')
	{
		printf ("%c",ptr[i]);
		i ++;
	}
	return 0;
}
