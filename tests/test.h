#ifndef TEST_H
# define TEST_H

# include <wchar.h>
# include <locale.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <sys/signal.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct	s_data
{
	int		r1;
	int		r2;
	char	*s1;
	char	*s2;
}				t_data;
int				ft_printf(const char *format, ...);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
static char		*ft_strjoin(char const *s1, char const *s2);
void			ft_connect_stdout(int *pfd, int *save);
char			*ft_get_stdout(int *pfd, int *save);

#endif
