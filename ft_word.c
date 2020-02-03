/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvo-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 03:36:38 by mvo-van-          #+#    #+#             */
/*   Updated: 2018/11/27 06:47:44 by mvo-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_word(char const *s, char c)
{
	int		len;
	int		j;

	len = 0;
	j = 0;
	while (s[len])
	{
		if (s[len] != c && (s[len + 1] == c || s[len + 1] == '\0'))
			j++;
		len++;
	}
	return (j);
}
