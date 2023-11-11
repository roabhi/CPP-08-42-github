/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:16:01 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 17:39:11 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# define MIN_RANDOM -420000
# define MAX_RANDOM 420000

template <typename T>
class MutantStack: public std::stack<T>
{

  public:
    MutantStack(void);
    MutantStack(const MutantStack& inst);
    MutantStack& operator=(const MutantStack& inst);
    ~MutantStack(void);

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator  begin(void);
    iterator  end(void);
};

#include "MutantStack.tpp"

#endif