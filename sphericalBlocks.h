#ifndef SPHERICALBLOCKS_H
#define SPHERICALBLOCKS_H

#include "cuboidBlocks.h"

class sphericalBlocks : public CuboidBlocks {

  public:
  sphericalBlocks();
  sphericalBlocks(int diameter);
  double getsarea();
  double getvolume();
  int getdiameter();
  double getradius();
  void sdisplay();
  };



#endif