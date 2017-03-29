#include <stdio.h>

void print_grid(int* grid)
{
  int i = 0;
  int j = 0;
  
  while(i < 3)
    {
      printf("\n");
      j = 3*i;
	while(j < 3*(i+1))
	{
	  if(grid[j] == 1)
	    printf("|X"); 
	  if(grid[j] == 2)
	    printf("|O");
	  if(grid[j] == 0)
	    printf("| ");
	  
	  j++;
	}
	printf("|");
	i++;
    }
  printf("\n");
}
