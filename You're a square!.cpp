bool is_square(int n)
{
  for (int i = 0; i < 1000; ++i)
  {
    if (i*i == n)
    {
      return true;
    }
  }
  return false;
}
