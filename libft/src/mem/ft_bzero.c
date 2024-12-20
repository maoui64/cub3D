/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magahat <magahat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:59:37 by magahat           #+#    #+#             */
/*   Updated: 2024/08/28 15:01:55 by magahat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t	i;

	i = 0;
	while (len--)
	{
		((unsigned char *)b)[i] = 0;
		i++;
	}
}
