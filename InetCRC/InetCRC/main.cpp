#include <iostream>
#include "CCRC32.h"

using namespace std;

unsigned char testData[] = {0x0F, 0xE1, 0xC3, 0xA5,
                            0x00, 0x00, 0x0C, 0x08,
                            0xFF, 0xFF, 0xFF, 0xFF,
                            0xFF, 0xFF, 0xFF, 0xFF};

/*
unsigned char testData1[] ={0xA5, 0xC3, 0xE1, 0x0F,
                            0x08, 0x0C, 0x00, 0x00,
                            0xFF, 0xFF, 0xFF, 0xFF,
                            0xFF, 0xFF, 0xFF, 0xFF};
*/

int main()
{
  cout << "Hello World!" << endl;
  CCRC32 AbmCRC;

  unsigned int long dwCRCResult;
  dwCRCResult = AbmCRC.FullCRC(testData, sizeof(testData));

  return 0;
}

