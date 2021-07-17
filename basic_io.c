#include "types.h"
#include "stat.h"
#include "user.h"

int main()
{
  int s;
  char data[100];
  s=read(0,data,sizeof(data));
  write(1,data,s);
  exit();
}
