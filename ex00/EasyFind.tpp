/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:35:19 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 20:04:53 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

template <typename T>
int	easyFind( const T& arr, int toFind )
{
	if ( std::find( arr.begin(), arr.end(), toFind ) == arr.end() ) // ? If we reach the end of the vector without match
		throw std::invalid_argument( "Integer value not found" );
	return ( toFind ); // ? else return toFind
}