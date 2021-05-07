#include "cylindricalBlocks.h"
#include <cmath>
#include <iostream>


using namespace std; 

CylindricalBlocks::CylindricalBlocks() {}

CylindricalBlocks::CylindricalBlocks(int diameter, int length) : SqrBaseRectBlocks { diameter, length } {}

int CylindricalBlocks::getdiameter() {
  return getWidth();
}

double CylindricalBlocks::getradius() {
  return getdiameter()/2.0;
}

double CylindricalBlocks::getsurface() {
  return 2 * M_PI * getradius() * getHeight() +  2 * M_PI * pow(getradius(), 2);

}

double CylindricalBlocks::getarea() {
  return M_PI * pow(getradius(), 2); 
}

void CylindricalBlocks::cdisplay() {
           cout << "Diameter: "<< getdiameter() << " Length: "<< getLength() << " SurfaceArea: " << getsurface() << endl;
}

    
