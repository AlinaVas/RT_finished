/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadavyde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:48:11 by dadavyde          #+#    #+#             */
/*   Updated: 2017/11/14 19:48:12 by dadavyde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_c(char *s, char c)
{
	int		idx;

	idx = 0;
	while (s[idx] != c && s[idx] != '\0')
		idx++;
	if (s[idx] == c)
		return (idx);
	else
		return (-1);
}
