#include <iostream>
		
#include <vector>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm> //required for sorting vector<> class
#include <stdlib.h>
#include <bits/stdc++.h>
#include "rectBlocks.h"
#include "sqrBaseRectBlocks.h"
#include "cuboidBlocks.h"
#include "cylindricalBlocks.h"
#include "sphericalBlocks.h"
#define MAX 1000

using namespace std;

 void print_rect_list(list<RectBlocks> listParam)
     {
         list<RectBlocks>::iterator listItr;
         printf("\nObjects of rect blocks are:\n");
          for (listItr = listParam.begin(); listItr != listParam.end(); listItr++)
    {
        (*listItr).display();
    }
}


     void print_sphere_list(list<SqrBaseRectBlocks> listParam)
     {
         list<SqrBaseRectBlocks>::iterator listItr;
         printf("\nObjects of Sqr base rect blocks are:\n");
          for (listItr = listParam.begin(); listItr != listParam.end(); listItr++)
    {
        (*listItr).display();
    }
}
// Looping to identify the dimension of cylindrical block
     void print_cylinder_list(list<CylindricalBlocks> listParam)
{
    list<CylindricalBlocks>::iterator listItr;
    printf("\nObjects of cylinder blocks are: \n");
    for (listItr = listParam.begin(); listItr != listParam.end(); listItr++)
    {
        (*listItr).cdisplay(); 
    }
}

// Comparing dimensions to get square base blocks.
bool Compare_width2(SqrBaseRectBlocks First, SqrBaseRectBlocks Second)
{
    if (First.getWidth() == Second.getWidth())
    return false;
    return true;
}
// Comparing dimensions to get cylinderical blocks.
bool Compare_area(CylindricalBlocks First, CylindricalBlocks Second)
{
    if (First.getarea() > Second.getarea())
    return false;
    return true;
}

// looping to indentify cuboid block dimensions
void print_cube_list(list<CuboidBlocks> listParam)
{
    list<CuboidBlocks>::iterator listItr;
    printf("\nObjects of CuboidBlocks are:\n");
    for (listItr = listParam.begin(); listItr != listParam.end(); listItr++)
    {
        (*listItr).display();
    }
}
//looping to identify spherical blocks

void print_sphere_list(list<sphericalBlocks> listParam)
{
    list<sphericalBlocks>::iterator listItr;
    printf("\nObjects of SphericalBlocks are:\n");
    for (listItr = listParam.begin(); listItr != listParam.end(); listItr++)
    {
        (*listItr).sdisplay();
    }
}
// Comparing dimensions to get rect blocks.
bool Compare_width(RectBlocks First, RectBlocks Second)
{
    if (First.getWidth() > Second.getWidth())
    return false;
    return true;
}
// Comparing dimensions to get spherical blocks.
bool Compare_surface(sphericalBlocks First, sphericalBlocks Second)
{
    if (First.getsarea() > Second.getsarea())
    return false;
    return true;
}


  


 
int main() {


    list<RectBlocks> listR;
    list<SqrBaseRectBlocks> listA;
    list<CylindricalBlocks> listB;
    list<CuboidBlocks> listC;
    list<sphericalBlocks> listS;

 string line, s;


  ifstream inputFile;
    inputFile.open("dataBlocks.dat");
    if (inputFile.is_open()) {
      while (!inputFile.eof()) {
        getline(inputFile,line);
        
        istringstream input(line);
        int w,h,l;
        input >> w;
        input >> h;
        input >> l;

        listR.push_back(RectBlocks(w, h, l));

        if (w == h) {
          listA.push_back(SqrBaseRectBlocks(w, l));

          if(h == l) {
            listC.push_back(CuboidBlocks(w));
            listS.push_back(sphericalBlocks(w));
          } else {
            listB.push_back(CylindricalBlocks(w, l));
          }
        }
    }
    inputFile.close();


  }
   else
    {
        cout << "File not found!!!!!";
    }

    print_rect_list(listR);
    listA.sort(Compare_width2);
    print_sphere_list(listA);
    listC.sort(Compare_width);
    print_cube_list(listC);
    listB.sort(Compare_area);
    print_cylinder_list(listB);
    listS.sort(Compare_surface);
    print_sphere_list(listS);
    
    
}
 