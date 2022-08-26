#include <cmath>

bool isprime(int x){
  if (x == 2) return true;

  if (x < 2 or x%2==0) return false;

  int i = 3;
  while (i <= sqrt(x)) {
    if (x%i==0) return false;
    i = i + 2;
  }

 return true;
}
