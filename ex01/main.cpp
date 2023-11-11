/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:48:42 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 16:54:35 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./classes/Span.hpp"

int main(void)
{ 
  
  try {
    
    Span sp = Span(5);
    unsigned int c = 0;
    
    std::cout << std::endl << "Adding 5 numbers to an array of size 5" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    while (c < 5)
    {
      int num = rand()%(MAX_RANDOM - (MIN_RANDOM + 1)) + MIN_RANDOM;
      std::cout << "Adding " << num << std::endl;
      sp.addNumber(num);
      c++;
    }
    
    // sp.addNumber(8);
    // sp.addNumber(3);

    // sp.addNumber(2);
    // sp.addNumber(-25);
    // sp.addNumber(250000);

    std::cout << "Shortest span is " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span is " << sp.longestSpan() << std::endl;
    
  }
  catch(std::length_error &e)
  {
    std::cerr << e.what() << std::endl;
    return (1);
  }  

  try
  {
    Span sp = Span(20000);

    std::cout << std::endl << "Adding 3000 numbers to an array of size 20000" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    sp.fillSpanWithNValues(3000);
  }
  catch(std::length_error &e)
  {
    std::cerr << e.what() << std::endl;
  }

  try
  {
    Span sp = Span(20);

    std::cout << std::endl << "Adding 1000 numbers to an array of size 20" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    sp.fillSpanWithNValues(1000);
  }
  catch(std::length_error &e)
  {
    std::cerr << e.what() << std::endl;
  }

  return (0);
}