/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_pr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 20:23:52 by isaadi            #+#    #+#             */
/*   Updated: 2019/12/29 05:23:25 by dhaouhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

//#include <stdio.h>
// #include <string.h>
//int		ft_printf(const char *format, ...);


int main(int argc, char **argv)
{
	t_data	data;
	int		pfd[2];
	int		save_stdout;

	int k = 0;
	char str[100];
	str[99] = '\0';
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%05d|%%|\n");
	printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%05d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%05d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 3, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 3, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -3, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -3, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -3, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -3, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 3, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 3, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, 42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, 42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*d|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*i|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, -42);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, -42);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of d conversion test%%%%==============================>\n\n");
	fflush(stdout);
	k = 0;
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.7s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.3s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, "lorem");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, "lorem");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, "loremipsum");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, "loremipsum");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*s|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, NULL);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of s conversion test%%%%==============================>\n\n");
	fflush(stdout);
	k = 0;
	char c;
	c = 'a';
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*c|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, c);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, c);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	c++;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of c conversion test%%%%==============================>\n\n");
	fflush(stdout);
	k = 0;
	void *ptr = (void*)0xfedcba9876543210;
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, (void*)0xffffFFFFffffFFFF);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, (void*)0xffffFFFFffffFFFF);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, (void*)0xffffFFFFffffFFF);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, (void*)0xffffFFFFffffFFF);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, (void*)0xf0f0F0F0f0f0F0F);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, (void*)0xf0f0F0F0f0f0F0F);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, (void*)0xabcdef0123456789);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, (void*)0xabcdef0123456789);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, (void*)0xF0F);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, (void*)0xf0f);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, (void*)0x0);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, (void*)0x0);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%20p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-20p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 20, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 20, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -20, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -20, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 20, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 20, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -20, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -20, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%p|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 20, ptr);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 20, ptr);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	ptr--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of p conversion test%%%%==============================>\n");
	fflush(stdout);
	k = 0;
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%015u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 4294967295);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 4294967295);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 3, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 3, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -3, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -3, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*u|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, 84);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, 84);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of u conversion test%%%%==============================>\n\n");
	fflush(stdout);
	k = 0;
	unsigned int	hex = 0xdab;
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%015x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 4294967295);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 4294967295);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 3, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 3, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -3, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -3, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*x|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of x conversion test%%%%==============================>\n\n");
	fflush(stdout);
	hex = 0xdab;
	k = 0;
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%015X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 4294967295);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 4294967295);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%010.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%0*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-10.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.3X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 3, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 3, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-5.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -3, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -3, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%-*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%5.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%10.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.5X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, 5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, 5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, 10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, 10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("----------------------------\ntest number #:%d\n", k++);
	fflush(stdout);
	strcpy(str, "%*.*X|%%|\n");
		printf("test format: ");
	printf("\033[0;34m");
	printf("%s\n", str);
	printf("\033[0m\n");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf(str, -10, -5, hex);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf(str, -10, -5, hex);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	fflush(stdout);
	hex--;
	printf("\nft_printf:%d\n", data.r1);
	fflush(stdout);
	printf("printf:%d\n", data.r2);
	fflush(stdout);
	if (data.r1 != data.r2 || ft_strcmp(data.s1, data.s2))
	{
		printf("\033[0;31m\n");
		printf("[KO]\n");
		printf("\033[0m\n");
	}
	else{
		printf("\033[0;32m\n");
		printf("[OK]\n");
		printf("\033[0m\n");
	}
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	fflush(stdout);
	printf("\n<==============================%%%%end of X conversion test%%%%==============================>\n\n");
	fflush(stdout);
	printf("run \033[1m\033[37m./a.out | grep -B 10 \"\\[KO\\]\"\033[0m to see where the returns differ. (turn on infinite scroll in your terminal settings)\n");
	fflush(stdout);
	printf("run \033[1m\033[37m./a.out | grep -A 6 -B 1 'x|%%%%|'\033[0m to see specific conversion tests. (this specific command for example outputs the x conversion test only)\n");
	printf("run \033[1m\033[37m./a.out | grep \"|%%|\" | awk 'NR %% 2 == 0' > 1; ./a.out | grep '|%%|' | awk 'NR %% 2 == 1'> 2; diff 1 2 > 3; cat 3; rm 1 2 3 \033[0m to get the different outputs.\nThis line shows up so don't worry.\n");
}
