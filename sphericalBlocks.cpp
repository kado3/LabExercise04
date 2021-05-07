#include "sphericalBlocks.h"
#include <cmath>
#include <iostream>

using namespace std;


sphericalBlocks::sphericalBlocks() {}

sphericalBlocks::sphericalBlocks(int diameter) : CuboidBlocks { diameter } {}

double sphericalBlocks::getsarea() {
  return 4 * M_PI * pow(getradius(), 2);
}

double sphericalBlocks::getvolume() {
  return 1.3333 * M_PI * pow(getradius(), 3);
}

int sphericalBlocks::getdiameter() {
  return getWidth();
}

double sphericalBlocks::getradius() {
  return getdiameter()/2.0;
}

void sphericalBlocks::sdisplay() {
   cout << "Diameter: "<< getdiameter() << " SurfaceArea: "<< getsarea() << "  Volume: " << getvolume() << endl;
}

