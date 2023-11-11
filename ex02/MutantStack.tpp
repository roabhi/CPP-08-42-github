/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:20:35 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 17:33:47 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void):std::stack <T>() 
{
  return ;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& inst):std::stack<T>(inst)
{
  return ;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& inst)
{
  return (std::stack<T>::operator=(inst));
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
  return ;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
  return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
  return (this->c.end());
}
