#include "printer.h"

void furniture::Printer::printInfo(const vector<const Furniture*>& furniture) const
{
	for (auto& vec : furniture)
	{
		cout << "\n\n\n";
		for (size_t i = 0; i < 50; i++) cout << "-";
		cout << "\n";
		vec->info();
		cout << "\n\n";
	}
}