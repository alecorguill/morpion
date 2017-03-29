//Renvoie le numero du joueur qui a gagné
//Renvoie 0 si aucun joueur n'a gagné
int player_won(int*grid)
{
  if( (grid[0] == grid[1]) && (grid[0] == grid[2]) && (grid[0] != 0) )
    return grid[0];
  if( (grid[3] == grid[4]) && (grid[3] == grid[5]) && (grid[0] != 0) )
    return grid[3];
  if( (grid[6] == grid[7]) && (grid[6] == grid[8]) && (grid[0] != 0) )
    return grid[6];
  if( (grid[0] == grid[3]) && (grid[0] == grid[6]) && (grid[0] != 0) )
    return grid[0];
  if( (grid[1] == grid[4]) && (grid[1] == grid[7]) && (grid[1] != 0) )
    return grid[1];
  if( (grid[2] == grid[5]) && (grid[2] == grid[8]) && (grid[2] != 0) )
    return grid[2];
  if( (grid[0] == grid[4]) && (grid[0] == grid[8]) && (grid[0] != 0) )
    return grid[0];
  if( (grid[2] == grid[4]) && (grid[2] == grid[6]) && (grid[2] != 0) )
    return grid[2];
  return 0;
}

