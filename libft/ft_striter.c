/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoze <gdoze@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 14:31:39 by gdoze             #+#    #+#             */
/*   Updated: 2019/12/23 13:37:59 by gdoze            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s != NULL && f != NULL)
	{
		while (*s)
		{
			(*f)(s);
			s++;
		}
	}
}
