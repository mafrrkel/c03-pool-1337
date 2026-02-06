#include <stdio.h>
#include <unistd.h>


char *ft_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len ++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i ++;
		len++;
	}
	dest[len] = '\0';
	return (dest);


} 
int	main(void)
{
	char ds[6] = "hello";
	char sr[9] = " mohamde";
//	char *re;
	int i = 0;
	ft_strcat(ds,sr);
	while (*(ds + i) != '\0')
	{
		printf("%c", *(ds + i));
		i++;
	}
	return 0;
}
