/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdlib.h>

void 	init_random (int *array, unsigned long length)
{
  for (unsigned int i = 0; i < length; i++) {
    int r = rand() % 20;
    array[i] = r;
  }
}

void 	bubble_sort (int *array, unsigned long length)
{
  int tmp;

   for (unsigned int i = 1; i < length ; i++)
   {
      for (unsigned int j = 0; j < length - i ; j++)
      {
          if (array[j] > array[j+1])
          {
              tmp = array[j];
              array[j] = array[j+1];
              array[j+1] = tmp;
          }
      }
   }
}

void 	insertion_sort (int *array, unsigned long length)
{
  int key;
   for (unsigned int i = 1; i < length; i++) {
       key = array[i];
       int j = i - 1;

       while (j >= 0 && array[j] > key) {
           array[j + 1] = array[j];
           j = j - 1;
       }
       array[j + 1] = key;
   }
}
