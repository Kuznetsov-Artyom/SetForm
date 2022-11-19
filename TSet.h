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
	// +-+-+-+-+-+-+-+-+-+-+-+ ������������ +-+-+-+-+-+-+-+-+-+-+-+

	// ����������� � ��������� ���������� (�������, ������)
	TSet(size_t univers, size_t size)
		: m_field{ univers }, m_size{ (size <= univers) ? size : univers } {}

	// ����������� � ��������� ���������� (������� ����, ������)
	TSet(const TBitField& field, size_t size)
		: m_field{ field }, m_size{ (size <= field.size() ? size : field.size()) } {}

	// ����������� �����������
	TSet(const TSet& other) : m_field{ other.m_field }, m_size{ other.m_size } {}


	// +-+-+-+-+-+-+-+-+-+-+-+ ������ +-+-+-+-+-+-+-+-+-+-+-+

	// ��������� �������
	TSet& add(size_t elem);
	// ������� �������
	TSet& del(size_t elem);


	// ����������� ��������
	TSet unionSets(const TSet& other) const;
	// ����������� ��������
	TSet intersectionSets(const TSet& other) const;
	// ��������� ���������
	TSet negation() const;


	// ������ �������� � ������� ��������� ���������
	size_t sizeUniverse() const noexcept;
	// ������ ���������
	size_t sizeSet() const noexcept;
	// ���������� ��������� � ���������
	size_t countFillSet() const noexcept;


	// ��������� ������� �������� � ���������
	bool checkElem(size_t elem);


	// ��������� ��������� � ������
	std::string getString() const;
	// ������� ������ ��������� ���������
	std::vector<uint32_t> getValues() const;

	// ������� ��������
	void clear()
	{
		m_field.setAll(0);
	}
};






#endif // T_SET