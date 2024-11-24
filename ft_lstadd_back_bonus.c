
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabferna <pabferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:19:57 by pabferna          #+#    #+#             */
/*   Updated: 2024/11/22 12:20:20 by pabferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*finish;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new; //si la lista está vacía,, el nodo new es el primero de la lista
		return ;
	}
	finish = ft_lstlast_bonus(*lst); // Con esta función localizamos el ultimo nodo de la lista.

	finish->next = new; // apuntamos el nuevo nodo al final de la lista.
}