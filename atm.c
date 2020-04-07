#include "atm.h"

unsigned int get_money(unsigned short int amount)
{
  unsigned short int total_amount = amount;
  unsigned short int denominations[8] = {2000,500,100,50,20,10,5,1};
  unsigned num_of_notes = 0;

  if(total_amount <= 31999)
  { 
    for(int index = 0 ; index < 8 ; index++)
    {
      num_of_notes =  num_of_notes << sizeof(unsigned) | total_amount / denominations[index];
      total_amount = total_amount % denominations[index];
    }
  }
  return num_of_notes;
}
