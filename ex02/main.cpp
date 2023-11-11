/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:12:13 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 18:58:58 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
  try
  {
    MutantStack<int> mut1;
    unsigned int c = 0;

    std::cout << std::endl << "Adding 7 numbers to the stack" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    while (c < 5)
    {
      int num = rand()%(MAX_RANDOM - (MIN_RANDOM + 1)) + MIN_RANDOM;
      std::cout << "Pushing " << num << " into position " << c << std::endl;
      mut1.push(num);
      c++;
    }

    MutantStack<int>::iterator it = mut1.begin();	

    (void)*it;
    
    std::cout << "========================" << std::endl;
    std::cout << "Top number in stack is " << mut1.top() << std::endl;
    std::cout << "Stack size is " << mut1.size() << std::endl;
    std::cout << "========================" << std::endl;


    while (c < 15)
    {
      int num = rand()%(MAX_RANDOM - (MIN_RANDOM + 1)) + MIN_RANDOM;
      std::cout << "Pushing " << num << " into position " << c << std::endl;
      mut1.push(num);
      c++;
    }

    std::cout << "========================" << std::endl;
    std::cout << "Top number in stack is " << mut1.top() << std::endl;
    std::cout << "Stack size is " << mut1.size() << std::endl;
    std::cout << "========================" << std::endl;
    
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  try
  {
    MutantStack< int >	mut2;
	  unsigned int		c = 0;

    std::cout << std::endl << "Adding 10 numbers to the stack" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    while (c < 5)
    {
      int num = rand()%(MAX_RANDOM - (MIN_RANDOM + 1)) + MIN_RANDOM;
      std::cout << "Pushing " << num << " into position " << c << std::endl;
      mut2.push(num);
      c++;
    }

    std::cout << std::endl << "Iterating the stack" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    MutantStack< int >::iterator it = mut2.begin();
    MutantStack< int >::iterator ite = mut2.end();
    ++it;
    --it;
    c = 0;
    while ( it != ite )
    {
      std::cout << "MutantStack [ " << c << " ]: " << *it << std::endl;
      ++it;
      c++;
    }

    std::cout << std::endl << "Remove top element from stack" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    mut2.pop();

    std::cout << "Now top number in stack is " << mut2.top() << std::endl;

  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  } 
  
  
  
  
  return (0);
}