#include "atm.h"

unsigned int get_money(unsigned short int amount)
{
  unsigned short int total_amount = amount;
  if(total_amount > 31999)
  {
    return 0;
  }
  unsigned short int denominations[8] = {2000,500,100,50,20,10,5,1};
  unsigned num_of_notes = 0;

  for(int i = 0 ; i < 8 ; i++)
  {
    num_of_notes =  num_of_notes << 4 | total_amount / denominations[i];
    total_amount = total_amount % denominations[i];
  }
  return num_of_notes;
}
