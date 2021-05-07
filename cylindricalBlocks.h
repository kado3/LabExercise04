#ifndef CYLINDRICALBLOCKS_H
#define CYLINDRICALBLOCKS_H

#include "sqrBaseRectBlocks.h"

class CylindricalBlocks : public SqrBaseRectBlocks {

  public:
  CylindricalBlocks();
  CylindricalBlocks(int diameter, int length);
  int getdiameter();
  double getsurface();
  double getarea();
  double getradius();
  void cdisplay();


};

#endif