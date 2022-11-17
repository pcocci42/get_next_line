#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 700
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *str, char *buff);
size_t	ft_strlen(char *s);
char	*new_txt(char *txt);
char	*ft_strchr(char *s, int c);
#endif
