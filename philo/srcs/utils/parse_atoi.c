/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:45:36 by jyolando          #+#    #+#             */
/*   Updated: 2022/03/15 18:33:04 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	parse_atoi(const char *s, int *res)
{
	int		i;
	int		neg;
	long	temp;

	i = 0;
	temp = 0;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			return (0);
	if (!ft_isdigit(s[i]))
		return (0);
	while (ft_isdigit(s[i]))
	{
		temp = temp * 10 + s[i] - 48;
		i++;
	}
	if (s[i] != '\0')
		return (0);
	*res = temp;
	return (1);
}
