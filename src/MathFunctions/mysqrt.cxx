#include "TutorialConfig.h"

#include <math.h>

double mysqrt(double x) {
#if defined (HAVE_LOG) && defined (HAVE_EXP)
  return exp(log(x)*0.5);
# else
  return 7.1;
# endif
}
