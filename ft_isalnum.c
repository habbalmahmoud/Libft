/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabbal <mhabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:01:37 by mhabbal           #+#    #+#             */
/*   Updated: 2024/06/11 12:57:27 by mhabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int C)
{
	if ((C >= '0' && C <= '9')
		|| (C >= 'a' && C <= 'z')
		|| (C >= 'A' && C <= 'Z'))
		return (1);
	return (0);
}
