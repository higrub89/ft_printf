/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:12:41 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 18:30:31 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *content)
{
	printf("content: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("Hello");
	t_list	*node2 = ft_lstnew("World");

	ft_lstadd_back(&node1, node2);
	ft_lstiter(node1, f);
}*/
