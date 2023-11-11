/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:02:32 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 17:01:54 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// ? Canonical

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

// ? Member funcs

void Span::addNumber(const int n)
{
  if (this->_arr.size() + 1 > this->_maxSize)
    throw std::length_error("Span is already full");
  this->_arr.insert(n);
}

long  Span::shortestSpan(void) const
{
  if ( this->_arr.size() < 2 )
		throw std::length_error( "Too few numbers..." );
  
  long minSpan = std::numeric_limits< unsigned int >::max(); // ? Take the min Span as the maximum value for the int on the positive
  long last = 0; // ? take the min val as 0 for now
    
  for (std::multiset<int>::const_iterator el = this->_arr.cbegin(); el != this->_arr.cend(); el++) // ? iterate the whole array
  {
    if ( el != this->_arr.cbegin() && std::abs( *el - last ) < minSpan )
			minSpan = std::abs( *el - last ); // ? set minSpan
		last = *el; // ? reset last ocurrence
  }

  return (minSpan);
}

long Span::longestSpan(void) const
{
  if ( this->_arr.size() < 2 )
		throw std::length_error( "Too few numbers..." );

  std::multiset< int >::const_iterator	minEl;
	std::multiset< int >::const_iterator	maxEl;

  minEl = std::min_element( this->_arr.begin(), this->_arr.end() );
	maxEl = std::max_element( this->_arr.begin(), this->_arr.end() );

  long result = std::abs( static_cast< long >(*maxEl) - static_cast< long >(*minEl));

  return (result);

}


void Span::fillSpanWithNValues(unsigned int n)
{
  if (static_cast< long >(this->getSize()) + static_cast< long >(n) > static_cast< long >(this->getMaxSize()))
    throw std::length_error("Too many numbers to add...");
  
  unsigned int c = 0;
  while (c < n)
  {
    int num = rand()%(MAX_RANDOM - (MIN_RANDOM + 1)) + MIN_RANDOM;
    std::cout << "Adding " << num << " at position " << this->_arr.size() + 1  << std::endl;    
    this->_arr.insert(num);
    c++;
  }
}



// ? Getters

unsigned int	Span::getSize( void ) const
{
	return ( this->_arr.size() );
}

unsigned int	Span::getMaxSize( void ) const
{
	return ( this->_maxSize );
}

