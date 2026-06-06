/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 00:11:57 by lucferre          #+#    #+#             */
/*   Updated: 2026/06/06 00:51:57 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	n;
	size_t	i;
	char	**split;

	len = ft_strlen(s);
	if (len == 0)
		return (NULL);
	n = 0;
	i = 1;
	while (s[i++ + 1] != '\0')
	{
		if (s[i] == c)
			n++;
	}
	split = malloc((n + 2) * sizeof(char *));
}

";a;\0"