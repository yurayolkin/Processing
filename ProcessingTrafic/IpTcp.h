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
		unsigned short Indendification;
		unsigned short FragmentOffset;
		unsigned char LifeTime;
		unsigned char Protocol;
		unsigned short HeaderChecksum;
		unsigned int Source;
		unsigned int Destination;
	};
};

