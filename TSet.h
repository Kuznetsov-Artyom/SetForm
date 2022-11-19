#ifndef T_SET
#define T_SET

#include "TBitField.h"
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>




class TSet
{
private:
	TBitField m_field;
	size_t m_size;

public:
	// +-+-+-+-+-+-+-+-+-+-+-+ Конструкторы +-+-+-+-+-+-+-+-+-+-+-+

	// Конструктор с передачей параметров (универс, размер)
	TSet(size_t univers, size_t size)
		: m_field{ univers }, m_size{ (size <= univers) ? size : univers } {}

	// Конструктор с передачей параметров (битовое поле, размер)
	TSet(const TBitField& field, size_t size)
		: m_field{ field }, m_size{ (size <= field.size() ? size : field.size()) } {}

	// Конструктор копирования
	TSet(const TSet& other) : m_field{ other.m_field }, m_size{ other.m_size } {}


	// +-+-+-+-+-+-+-+-+-+-+-+ Методы +-+-+-+-+-+-+-+-+-+-+-+

	// Добавляет элемент
	TSet& add(size_t elem);
	// Удаляет элемент
	TSet& del(size_t elem);


	// Объединение множеств
	TSet unionSets(const TSet& other) const;
	// Пересечение множеств
	TSet intersectionSets(const TSet& other) const;
	// Отрицание множества
	TSet negation() const;


	// Размер универса в котором находится множество
	size_t sizeUniverse() const noexcept;
	// Размер множества
	size_t sizeSet() const noexcept;
	// Количество элементов в множестве
	size_t countFillSet() const noexcept;


	// Проверяет наличие элемента в множестве
	bool checkElem(size_t elem);


	// Переводит множество в строку
	std::string getString() const;
	// Выводит вектор элементов множества
	std::vector<uint32_t> getValues() const;

	// Очищает элементы
	void clear()
	{
		m_field.setAll(0);
	}
};






#endif // T_SET