/*
  !!DESCRIPTION!! global non-static and static conflicts
  !!ORIGIN!!      cc65 regression tests
  !!LICENCE!!     Public Domain
  !!AUTHOR!!      Greg King
*/

/*
  see: https://github.com/cc65/cc65/issues/191
*/

#pragma warn(error, on)

static int n;
int n;                  /* should give an error */

int main(void)
{
    return n;
}
