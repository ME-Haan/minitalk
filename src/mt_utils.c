/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mt_utils.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mhaan <mhaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 11:14:33 by mhaan         #+#    #+#                 */
/*   Updated: 2023/03/29 14:46:37 by mhaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"mini_talk.h"

void	mt_send_signal(pid_t PID, int sig)
{
	if (kill(PID, sig) == -1)
	{
		ft_putstr_fd("Error sending signal.\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
