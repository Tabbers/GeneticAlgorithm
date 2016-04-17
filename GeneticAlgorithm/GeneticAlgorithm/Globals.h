#pragma once

struct Genome
{
	union Container
	{
		struct Bytes
		{
			char A;
			char B;
			char C;
			char D;
			char E;
			char F;
			char G;
			char H;
		}G;
	};
	char all[8];
};