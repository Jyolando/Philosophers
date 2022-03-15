/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyolando <jyolando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:45:39 by jyolando          #+#    #+#             */
/*   Updated: 2022/03/15 18:34:40 by jyolando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/philosophers.h"

static void load_params(t_params *philos, int *arr, int size)
{
	philos->num_philos = arr[0];
	philos->time_die = arr[1];
	philos->time_eat = arr[2];
	philos->time_sleep = arr[3];
	if (size == 5)
		philos->philo_times = arr[4];
	else
		philos->philo_times = -1;
}

int	check_args(t_params *philos, int size, char **v)
{
	int *arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		if (!parse_atoi(v[i + 1], &arr[i]))
			return (0);
		i++;
	}
	load_params(philos, arr, size);
	return (1);
}

int main(int c, char **v)
{
	t_params philos;

	if ((c < 5 || c > 6) || !check_args(&philos, c - 1, v))
		printf("\x1b[31;1mError, non valid arguments.\n");
	print_params(philos);
}
