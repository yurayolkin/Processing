#pragma once
class IpTcp
{
public:
	IpTcp();
	~IpTcp();

	//Describe Ipv4 header;
	struct IpHeader
	{
		unsigned char HeaderLength : 4;
		unsigned char IpVersion : 4;
		unsigned char Services;
		unsigned short TotalLength;
		unsigned short Indentification;
		unsigned short FragmentOffset;
		unsigned char LifeTime;
		unsigned char Protocol;
		unsigned short HeaderChecksum;
		unsigned int Source;
		unsigned int Destination;
	};

	static unsigned short IpTcp::Razvorot16(unsigned short data)
	{
		return ((unsigned short)((data)) << 8 | (unsigned short)((data >> 8)));
	};
};

