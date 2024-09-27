/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbasse <thbasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:40:03 by thbasse           #+#    #+#             */
/*   Updated: 2024/09/27 17:50:15 by thbasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	main(int argc, char **argv)
{
	t_philo philo_de_tes_morts;
	
	if (argc < 5 || argc > 6)
	{
		printf("Format: ./philo <number_of_philosophers> <time_to_die> ");
		printf("<time_to_eat> <time_to_sleep> ");
		printf("optional:[number_of_times_each_philosopher_must_eat]\n");
		return (-1);
	}
	if (check_is_number(argv) == -1)
	{
		printf("philo use ONLY numbers\n");
		return (-1);
	}
	// parsing_et_initialisation(argv);
	// partie_active();
	return (0);
}

int	check_is_number(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return(-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n'
		|| *str == '\r' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	// if (result > INT_MAX)				??????????????????????
		// return (EXIT_FAILURE);			pas sur de ca
	return (sign * result);
}
