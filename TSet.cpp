#include "TSet.h"


// +-+-+-+-+-+-+-+-+-+-+-+ Методы +-+-+-+-+-+-+-+-+-+-+-+

// Добавляет элемент
TSet& TSet::add(size_t elem)
{
	if (m_field.count() == m_size) return *this;

	m_field.setBit(elem - 1);

	return *this;
}
// Удаляет элемент
TSet& TSet::del(size_t elem)
{
	m_field.setBit(elem - 1, 0);

	return *this;
}


// Объединение множеств
TSet TSet::unionSets(const TSet& other) const
{
	TBitField field(m_field | other.m_field);

	TSet set{ field, field.count() };

	return set;
}
// Пересечение множеств
TSet TSet::intersectionSets(const TSet& other) const
{
	TBitField field(m_field & other.m_field);

	TSet set{ field, field.count() };

	return set;
}
// Отрицание множества
TSet TSet::negation() const
{
	TBitField field(~m_field);

	TSet set{ field, field.count() };

	return set;
}


// Размер универса в котором находится множество
size_t TSet::sizeUniverse() const noexcept { return m_field.size(); }
// Размер множества
size_t TSet::sizeSet() const noexcept { return m_size; }
// Количество элементов в множестве
size_t TSet::countFillSet() const noexcept { return m_field.count(); }


// Проверяет наличие элемента в множестве
bool TSet::checkElem(size_t elem)
{
	return m_field.checkBit(elem - 1);
}


// Переводит множество в строку
std::string TSet::getString() const
{
	std::stringstream str;
	std::vector<uint32_t> arr{ this->getValues() };

	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		if (i != arr.begin()) { str << ' '; }
		str << *i;
	}

	return str.str();
}
// Выводит вектор элементов множества
std::vector<uint32_t> TSet::getValues() const
{
	std::vector<uint32_t> arr;

	if (!m_field.any()) return arr;

	for (size_t i = 0; i < m_field.size(); ++i)
		if (m_field.checkBit(i)) arr.emplace_back(i + 1);

	return arr;
}
