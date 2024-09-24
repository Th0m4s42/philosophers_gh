/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbasse <thbasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:40:03 by thbasse           #+#    #+#             */
/*   Updated: 2024/09/24 15:19:08 by thbasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	if (argc < 5 || argc > 6)
	{
		printf("Format: ./philo <number_of_philosophers> <time_to_die> ");
		printf("time_to_eat> <time_to_sleep> ");
		printf("optional:[number_of_times_each_philosopher_must_eat]\n");
	}
	return (0);
}
