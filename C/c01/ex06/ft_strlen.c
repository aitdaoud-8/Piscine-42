/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:13:44 by alaamimi          #+#    #+#             */
/*   Updated: 2021/04/21 17:18:09 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int cmt;
	int i;

	cmt = 0;
	i = 0;
	while(str[i] != '\0')
	{
		cmt++;
	}
	return (cmt);
}