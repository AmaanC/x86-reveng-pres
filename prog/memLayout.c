int globalInitVal = 2;
int globalUninitVal;

int main()
{
  int localA = 1;
  int localB = 2;
  int localC = 3;
  
  globalInitVal = localA + 0xcafe;
  globalUninitVal = localB + 0xc0ffee;
  localC = 0xdeadbeef;

  return 0;
}
