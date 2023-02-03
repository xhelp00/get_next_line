/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:52:22 by phelebra          #+#    #+#             */
/*   Updated: 2023/02/03 07:59:55 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *s)
{
	int		bytes_number;
	char	*buffer;
	
	bytes_number = 1;
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if(!buffer)
		return(NULL);
	while (bytes_number != 0 && !ft_strchr(s, '\n'))
	{
		if (bytes_number == -1)
		{
			free(buffer);
			return(NULL);
		}
		buffer[bytes_number] = '\0';
		s = ft_strjoin(s, buffer);
	}
	free(buffer);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*s;
	char		*next_line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	s = read_file(fd, s);
	if(!s)
		return (NULL);
	//next_line = //TBD function that return next line
	//s = //TBD function that updates static pointer to char showing where actual nextline ended
	return (next_line);
}