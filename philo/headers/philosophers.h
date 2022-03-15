/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:45:42 by jyolando          #+#    #+#             */
/*   Updated: 2022/03/15 18:33:02 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_params
{
	int	num_philos;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	philo_times;
}				t_params;

int	parse_atoi(const char *s, int *res);

/* NOT IMPORTANT */
void print_params(t_params philos);

#endif
