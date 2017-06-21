#include "TutorialConfig.h"

#include <math.h>
#include "Table.h"

double mysqrt(double x) {
  if ( x < 10 ) {
    return sqrtTable[static_cast<int>(x)];
  }
#if defined (HAVE_LOG) && defined (HAVE_EXP)
  return exp(log(x)*0.5);
# else
  return 7.1;
# endif
}
