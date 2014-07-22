#include "stdafx.h"
#include "CppUnitTest.h"
#include "IpTcp.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProcessingTraficTests
{		
	

	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(IpHeaderTest)
		{
			unsigned char ip[20] = { 0x45, 0x00, 0x00, 0x28, 0x2a, 0x38, 0x40, 0x00, 0x80, 0x06, 0x00, 0x00, 0xc0, 0xa8, 0x01, 0x64, 0xc3, 0xd3, 0x3d, 0xe8 };
			IpTcp::IpHeader *ipHeader = (IpTcp::IpHeader*)ip;
			unsigned char version = 4;
			Assert::AreEqual(ipHeader->IpVersion, version);
			unsigned char headerLength = 5;
			Assert::AreEqual(ipHeader->HeaderLength, headerLength);
			unsigned char service = 0;
			Assert::AreEqual(ipHeader->Services, service);
			unsigned short length = 0x0028;
			Assert::AreEqual(ipHeader->TotalLength, length);
			unsigned short indentificator = 0x2a38;
			Assert::AreEqual(ipHeader->Indentification, indentificator);
		}
	};
}