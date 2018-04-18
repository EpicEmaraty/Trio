#include <iostream>

using namespace std;

void swapNum (int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  swapNum(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void swapNum ( int& red, int& green, int& blue)
{
  int R =0;
  int B =0;
  int G =0;
  
  R = red;
  G = green;
  B = blue;

  if ( red < green )
  {
    red = green;
    green = R;
  }
  if ( red < blue )
  {
    blue = red;
    red = B;
    
  }
  if ( green < blue )
  {
    G = green;
    green = blue;
    blue = G;
  }
}
