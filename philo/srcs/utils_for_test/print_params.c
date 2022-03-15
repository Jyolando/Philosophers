#include "../headers/philosophers.h"

void print_params(t_params philos)
{
	printf("\x1b[31;1mPARAMS:\n%s - %d\n%s - %d\n%s - %d\n%s - %d\n%s - %d\n", \
	"\x1b[00;1mnumber_of_philosophers", philos.num_philos, \
	"time_to_die", philos.time_die, \
	"time_to_eat", philos.time_eat, \
	"time_to_sleep", philos.time_sleep, \
	"number_of_times_each_philosopher_must_eat", philos.philo_times);
}
