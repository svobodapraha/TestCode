#ifndef _CCRC32_H
#define _CCRC32_H
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class CCRC32{

	public:
		CCRC32(void);
		~CCRC32(void);

		void Initialize(void);


		unsigned long FullCRC(const unsigned char *sData, unsigned long ulDataLength);
		void PartialCRC(unsigned long *ulCRC, const unsigned char *sData, unsigned long ulDataLength);

	private:
		unsigned long Reflect(unsigned long ulReflect, const char cChar);
		unsigned long ulTable[256]; // CRC lookup table array.
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif
