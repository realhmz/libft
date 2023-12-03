/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-taja <het-taja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:23:21 by het-taja          #+#    #+#             */
/*   Updated: 2023/12/02 00:50:37 by het-taja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strrlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 || s2)
	{
		len1 = ft_strrlen(s1);
		len2 = ft_strrlen(s2);
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (!str)
			return (NULL);
		i = -1;
		while (s1 && s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2 && s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}
