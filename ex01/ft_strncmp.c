#include <stdio.h>
#include <unistd.h>

int
ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0'
			&& i < n)
	{
		i++;
	}
	if (i == n)
		return 0;
	return (*(s1 + i) - *(s2 + i));

}

int     main(void)
{
        char    ss1[6] = "hello";
        char    ss2[7] = "helfgid";
        int     exit;

        exit = ft_strncmp(ss1,ss2,5);
        printf ("%d", exit);
        return 0;
}
