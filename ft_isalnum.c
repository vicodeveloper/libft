/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebett <grebett@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:18:40 by grebett           #+#    #+#             */
/*   Updated: 2013/11/30 11:04:18 by grebett          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123))
		|| ((c > 47) && (c < 58)))
		return (1);
	return (0);
}
