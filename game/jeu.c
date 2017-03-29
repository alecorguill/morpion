#include <stdio.h>
#include "game_over.h"
#include "print_grid.h"
#include "player_won.h"



int main()
{
  int grid[9]={0,0,0,0,0,0,0,0,0};
  print_grid(grid);
  //print the grid with numbers to help players
  while( !(player_won(grid)) || game_over(grid) )
    {

      int choix_1;
      int choix_2;
      //Tour du joueur 1
      printf("Player1's turn :");
      int valide = 0;
      while (!valide)
	{
	  scanf("%d",&choix_1);
	  choix_1--;
	  if( (choix_1 > 8) || (choix_1 < 0) )
	    printf("Veuillez choisir une case entre 0 et 8:");
	  
	  else if (grid[choix_1] == 0)
	    {
	      grid[choix_1] = 1;	      
	      valide=1;
	    }
	  else
	    printf("Case occupé, choisir une autre case :");
	}     
      print_grid(grid);
      if (player_won(grid))
	{
	  printf("Le joueur %d à gagné\n",player_won(grid));
	  return 1;
	}
      if ( game_over(grid) )
	{
	  printf("Match nul");
	  return 1;
	}
      

      valide=0;
      printf("Player2's turn :");
      while (!valide)
	{
	  scanf("%d",&choix_2);
	  choix_2--;
	  if( (choix_2 > 8) || (choix_2 < 0) )
	      printf("Veuillez choisir une case entre 0 et 8:");
	    
	  else if (grid[choix_2] == 0)
	    {
	      grid[choix_2] = 2;	      
	      valide=1;
	    }
	  else
	    printf("Case occupé, choisir une autre case :");
	}
      print_grid(grid);
      if (player_won(grid))
	{
	  printf("Le joueur %d à gagné\n",player_won(grid));
	  return 1;
	}
      if ( game_over(grid) )
	{
	  printf("Match nul");
	  return 1;
	}
      
    }
}
