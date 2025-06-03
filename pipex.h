#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include<sys/types.h>
# include<sys/stat.h>
# include <fcntl.h>  
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		open_file(char *file, int n);
char	*my_getenv(char *name, char **env);
char	*get_path(char *cmd, char **env);
void	exec(char *cmd, char **env);
void	ft_free_tab(char **tab);
void	exit_handler(int n_exit);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strcmp(char *s1, char *s2);
void	*ft_calloc( size_t elementCount, size_t elementSize );
size_t	ft_strlcpy( char *dst, const char *src, size_t size);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *theString);
void	ft_bzero(void *s, size_t n);




#endif