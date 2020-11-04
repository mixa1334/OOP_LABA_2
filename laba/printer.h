#pragma once
#ifndef PRINTER_H
#define PRINTER_H
#include "furniture.h"

namespace furniture
{
	class Printer
	{
	public:
		void printInfo(const vector<const Furniture*>& furniture) const;
	};
}



#endif // !PRINTER_H

