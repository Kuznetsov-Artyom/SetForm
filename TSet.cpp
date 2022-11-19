#include "TSet.h"


// +-+-+-+-+-+-+-+-+-+-+-+ ������ +-+-+-+-+-+-+-+-+-+-+-+

// ��������� �������
TSet& TSet::add(size_t elem)
{
	if (m_field.count() == m_size) return *this;

	m_field.setBit(elem - 1);

	return *this;
}
// ������� �������
TSet& TSet::del(size_t elem)
{
	m_field.setBit(elem - 1, 0);

	return *this;
}


// ����������� ��������
TSet TSet::unionSets(const TSet& other) const
{
	TBitField field(m_field | other.m_field);

	TSet set{ field, field.count() };

	return set;
}
// ����������� ��������
TSet TSet::intersectionSets(const TSet& other) const
{
	TBitField field(m_field & other.m_field);

	TSet set{ field, field.count() };

	return set;
}
// ��������� ���������
TSet TSet::negation() const
{
	TBitField field(~m_field);

	TSet set{ field, field.count() };

	return set;
}


// ������ �������� � ������� ��������� ���������
size_t TSet::sizeUniverse() const noexcept { return m_field.size(); }
// ������ ���������
size_t TSet::sizeSet() const noexcept { return m_size; }
// ���������� ��������� � ���������
size_t TSet::countFillSet() const noexcept { return m_field.count(); }


// ��������� ������� �������� � ���������
bool TSet::checkElem(size_t elem)
{
	return m_field.checkBit(elem - 1);
}


// ��������� ��������� � ������
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
// ������� ������ ��������� ���������
std::vector<uint32_t> TSet::getValues() const
{
	std::vector<uint32_t> arr;

	if (!m_field.any()) return arr;

	for (size_t i = 0; i < m_field.size(); ++i)
		if (m_field.checkBit(i)) arr.emplace_back(i + 1);

	return arr;
}
