/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:53:16 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/26 17:27:47 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return;
	if (lst)
	{
		del(lst -> content);
		free(lst);
	}
}

void ft_delete(void *content)
{
	free(content);
}
int main()
{
	void *content = malloc(6);
    strcpy(content, "hello");

    void *content2 = malloc(7);
    strcpy(content2, "hello2");
	t_list *node = ft_lstnew(content);
	t_list **lst = &(node);

	t_list *new = ft_lstnew(content2);
	ft_lstadd_front(lst, new);

	t_list *head = *lst;
	ft_lstdelone(head, ft_delete);
	head = *lst;
	printf("%d",ft_lstsize(head));
}

//#include <stdio.h>
//int main()
//{
//	void *content = "hello";
//	void *content2 = "hello2";

//	t_list *node = ft_lstnew(content);
//	t_list **lst = &(node);

//	t_list *new = ft_lstnew(content2);
//	ft_lstadd_front(lst, new);

//	t_list *head = *lst;
//	while (head)
//	{
//		printf("%s", (char *)head -> content);
//		head = head -> next;
//		if (head)
//            printf(" -> ");
//	}
//	head = *lst;
//	while (head)
//	{
//		t_list *temp = head;
//		head = head -> next;
//		free (temp);
//	}
//	return 0;
//}
