/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:47:58 by ancoulon          #+#    #+#             */
/*   Updated: 2021/06/01 15:15:17 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# define BUFFER_SIZE 1024

int	io_next_line(int fd, char **line);

int	ft_retrieve_rest_util(char **rest, int *i, char **tmp);

#endif
