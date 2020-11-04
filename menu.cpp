#include "laba/bed.h"
#include "laba/chair.h"
#include "laba/cupboard.h"
#include "laba/furniture.h"
#include "laba/secretaire.h"
#include "laba/table.h"
#include "laba/closet.h"
#include "laba/tableTransformer.h"
#include "laba/printer.h"
#include <vector>
using namespace furniture;



int main()
{
	system("chcp 1251>null");

	Printer PR;

	vector<const Furniture*> vec;

	Cupboard CU(100, "сосна", "Книжный шкаф", "Пинскдрев", -100, 60, 200, 4, 4);

	Secretaire S(500, "МДФ", "Секретер", "RIVAL", 300, 60, 1000, 34, 19, 34, 78);

	Chair CH(500, "дуб", "Стул", "СИЛЬВА", 300, 60, 1000, 34, "хлопок", "хлопок");

	Table T(500, "Пластик", "Стол", "Трия", 70, 60, 60, 1, 9);

	Bed B(400, "дуб", "Кровать", "Пинскдрев", 100, 10, 600, 4, 89);

	Closet C(600, "дуб", "Шкаф-купе", "RIVAL", 100, 30, 100, -2, 10, 200, 2);

	TableTransformer A(500, "ДСП", "Стол-трансформер", "Лазурит", 70, 60, 60, 4, 9, 2);

	vec.push_back(&CU);
	vec.push_back(&S);
	vec.push_back(&T);
	vec.push_back(&C);
	vec.push_back(&A);
	PR.printInfo(vec);

	cout << "\n\n\n";
	for (size_t i = 0; i < 50; i++) cout << "-";
	cout << "\n";
	B.info();
	cout << "\n\n\n";
	for (size_t i = 0; i < 50; i++) cout << "-";
	cout << "\n";
	CH.info();

	return 0;
}


