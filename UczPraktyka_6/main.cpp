﻿#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> list{2, 52, 228, 666};

	//1.push_back, erase, insert
	list.push_back(1337); //данный метод добавляет в конец массива копию указанного элемента.
	list.erase(list.begin(), list.begin() + 1); //данный метод удаляет из массива элементы указанного с помощью итераторов диапозона
	list.insert(list.begin(), 2023); //данный метод добавляет на указанную позицию новый элемент, передвигая каждые последующие элементы вправо на одну позицию

	//2.emplace_back - точно так же, как и push_back добавляет в конец массива указанный элемент, однако вместе с этим создает новый объект в векторе, а не его копию.
	list.emplace_back(-111);

	//3.resize, reserve, shrink_to_fit, capacity
	list.resize(16); //данный метод переопределяет размер массива, преобразуя элементы вновь выделенного участка памяти в нули
	list.reserve(10); //данные метод изменяет вместимость массива, то есть вектор выделяет достаточно памяти для хранения минимум N элементов
	cout << list.capacity(); //данный метод показывает, сколько элементов массив может вместить без повторного выделения памяти
	list.shrink_to_fit(); //данный метод изменяет вместимость массива подстраиваясь под количество его элементов

	//5.опер-ры присв-я и []
	list[0] = -1000; //"точечное" присвоение значения элементу определенного индекса(оператор [] получает элемент по индексу)

	//4.clear
	//list.clear(); //данный метод очищает все элементы массива

	cout << endl << "========" << endl;
	
	for (int i : list)
		cout << i << " ";
	cout << endl << list.size(); //размер массива

	return 0;
}