/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:48:42 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 21:18:36 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./classes/Span.hpp"

int main(void)
{
  Span sp = Span(5);

  sp.addNumber(25);
  
  return (0);
}