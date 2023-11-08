/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:59:26 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 21:13:07 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename T>
void  Span::addNumber(const typename T::iterator& begin, const typename T::iterator& end)
{
  if (std::distance(begin, end) + this->_arr.size() > this->_maxSize)
    throw std::length_error("The length is out of range");
  this->_arr.insert(begin, end); 
}