/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:50:10 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 16:58:20 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <limits>
# include <iterator>
# include <numeric>
# include <exception>
# include <stdexcept>

#define MIN_RANDOM -420000
#define MAX_RANDOM 420000

class Span {

  public:

    // ? Cannonical
    Span(void);
    Span(unsigned int N);
    Span(const Span& inst);
    ~Span(void);
    // ? Equal operator
    Span& operator=(const Span& inst);

    // ? getters
    unsigned int  getSize(void) const;
    unsigned int  getMaxSize(void) const;

    // ? funcs
    void          addNumber(const int n);
    long          shortestSpan(void) const;
    long          longestSpan(void) const;
    
    // ? utils
    void          fillSpanWithNValues(unsigned int n);

    template <typename T>
    void          addNumber(const typename T::iterator& begin, const typename T::iterator& end);

  private:

    std::multiset<int> _arr;
    unsigned int  _maxSize;

};

# include "Span.tpp"

#endif 