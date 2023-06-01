/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:16:04 by kyoshida          #+#    #+#             */
/*   Updated: 2023/05/30 19:56:05 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int num)
{
	return (48 <= num && num <= 57);
}

// int	main(void)
// {
// 	if(ft_isdigit('d')==0)
// 	puts("no");
// 	else
// 	puts("yes");
// }