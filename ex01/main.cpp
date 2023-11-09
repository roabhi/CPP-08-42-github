/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:48:42 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/09 20:17:26 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./classes/Span.hpp"

int main(void)
{
  Span sp = Span(5);

  try {
    sp.addNumber(25);
    sp.addNumber(25);
    sp.addNumber(25);
    sp.addNumber(25);
    sp.addNumber(25);
    //sp.addNumber(25);
  }
  catch(std::length_error &e)
  {
    std::cout << e.what() << std::endl;
    return (1);
  }  
  return (0);
}