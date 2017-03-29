int game_over(int*grid)
{
  int i=0;
  for(i ; i < 9 ; i++)
    {
      if (grid[i] == 0)
	return 0;
    }
  return 1;
}
