//added 161212
#include <stdio.h>


unsigned int long crc32b(unsigned char *Buff, int iLength)
{
   int i, j;
   unsigned int long byte, crc, mask;

   i = 0;
   //crc = 0xFFFFFFFF;
   crc = 0x00000000;

   for (i=0;  i<iLength; i++)
   {
      byte = Buff[i];            // Get next byte.
      crc = crc ^ byte;
      for (j = 7; j >= 0; j--)
      {    // Do eight times.
         mask = -(crc & 1);
         crc = (crc << 1) ^ (0x04C11DB7 & mask);

      }
   }
   return crc;
   //return crc;

}




unsigned char testData[] = {0x0F, 0xE1, 0xC3, 0xA5,
                            0x00, 0x00, 0x0C, 0x08,
                            0xFF, 0xFF, 0xFF, 0xFF,
                            0xFF, 0xFF, 0xFF, 0xFF};

unsigned char testData1[] ={0xA5, 0xC3, 0xE1, 0x0F,
                            0x08, 0x0C, 0x00, 0x00,
                            0xFF, 0xFF, 0xFF, 0xFF,
                            0xFF, 0xFF, 0xFF, 0xFF};










int main(void)
{
  //printf("Hello World!\n");
  unsigned int long dwCRCResult;
  dwCRCResult = crc32b(testData1, sizeof(testData));
  return 0;
}

