/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:13:52 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/05 18:14:16 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int lentgh;

	lentgh = 0;
	while (str[lentgh] != '\0')
	{
		lentgh++;
	}
	return (lentgh);
}
