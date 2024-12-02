/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:53:30 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/17 19:03:26 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst -> next)
		lst = lst -> next;
	return (lst);
}

//int main()
//{
//	void *content = "hello";
//	void *content2 = "hello2";

//	t_list *node = ft_lstnew(content);
//	t_list **lst = &(node);
//	t_list *new = ft_lstnew(content2);
//	ft_lstadd_front(lst, new);
//	t_list *tail = ft_lstlast(*lst);
//	printf("%s", (char *)tail -> content);
//}
