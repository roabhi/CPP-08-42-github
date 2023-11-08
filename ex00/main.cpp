/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:30:48 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 20:05:28 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "EasyFind.hpp"

#define MAX_VALUE 10

int main(void)
{
  size_t counter = 0;
  int num;
  
  std::vector<int> myVec;


  while (counter < MAX_VALUE)
  {
    num = rand()%(10-1 + 1) + 0;
    std::cout << "El valor que inserto en el vector en la posicion " << counter << " es " << num << std::endl;
    myVec.push_back(num);    
    counter++;
  }	

  std::cout << std::endl << "Trying to find 7 inside the vector" << std::endl;

  counter = 0;

	try
	{
		counter = easyFind(myVec, 7);
		std::cout << counter << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
    return (1);
	}
		   
	counter = 0;

  std::cout << std::endl << "Trying to find 15 inside the vector" << std::endl;  

	try
	{
		counter = easyFind(myVec, 15);
		std::cout << counter << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
    return (1);
	}

  

  return (0);
}