#include <stdio.h>
#include "atm.h"

void print_notes(unsigned int);

void print_notes(unsigned int amount)
{
  unsigned short int denominations[8] = {2000,500,100,50,20,10,5,1};
  for(int index = 0 ; index < 8 ; index++)
  {
    int notes = amount >> 28;
    amount = amount << 4;
    printf("%d notes of %d\n",notes,denominations[index]);
  }
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    print_notes(notes);
    printf("%5u %08x\n", amounts[i], notes);
  }

  return 0;
}
