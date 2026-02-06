#include <stdio.h>
#include <unistd.h>


char *ft_strncat(char *dest, char *src,unsigned int nb)
{
        int i;
        int len;

        i = 0;
        len = 0;
        while (dest[len] != '\0')
        {
                len ++;
        }
        while (src[i] != '\0'&& i < nb)
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
	char des[8] = "hello";
	char sr[3] = "Br";
	ft_strncat(des,sr,2);
	printf ("%s",des);

}
