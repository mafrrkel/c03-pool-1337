#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int len;
	int len2;

	i = 0;
	len = 0;
	len2 = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len2] != '\0')
		len2++;
	while (src[i] != '\0' && (len + i) < size - 1)
	{
		dest [len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return(len + len2);
}
int	main(void)
{
	char des[20] = "hello";
	char sr[10] ="mohamde";
	int result;

	result = ft_strlcat(des, sr,20);
	printf ("%d", result);
	return 0;
}
