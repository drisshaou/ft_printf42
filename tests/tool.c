#include "test.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		exit(1);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

static char	*strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	tmp = ft_strnew(strlen(s1) + strlen(s2));
	strcat(strcpy(tmp, s1), s2);
	return (tmp);
}

void	ft_connect_stdout(int *pfd, int *save)
{
	*save = dup(1);
	if (pipe(pfd) == -1)
		exit(1);
	if (dup2(pfd[1], 1) == -1)
		exit(1);
}

char	*ft_get_stdout(int *pfd, int *save)
{
	char	*rslt;
	char	*tmp;
	char	buff[10 + 1];

	fflush(stdout);
	rslt = ft_strnew(0);
	close(pfd[1]);
	close(1);
	bzero(buff, 10 + 1);
	while (read(pfd[0], buff, 10) > 0)
	{
		tmp = rslt;
		rslt = strjoin(tmp, buff);
		free(tmp);
		bzero(buff, 10 + 1);
	}
	close(pfd[0]);
	dup2(*save, 1);
	close(*save);
	return (rslt);
}
