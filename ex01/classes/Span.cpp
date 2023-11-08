/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:02:32 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 21:17:28 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _maxSize(0)
{
  return ;
}

Span::Span(unsigned int N) : _maxSize(N)
{
  return ;
}

Span::Span(const Span& inst) : _arr(inst._arr), _maxSize(inst._maxSize)
{
  return ;
}

Span& Span::operator=(const Span& inst)
{
  if (this != &inst)
  {
    this->_arr.clear();
    this->_arr = inst._arr;
    this->_maxSize = inst._maxSize;
  }

  return (*this);
}

Span::~Span(void)
{
  this->_arr.clear();
}

void Span::addNumber(const int n)
{
  if (this->_arr.size() + 1 > this->_maxSize)
    throw std::length_error("Span is already full");
  this->_arr.insert(n);
}