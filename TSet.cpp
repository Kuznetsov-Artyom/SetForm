#include "TSet.h"


// +-+-+-+-+-+-+-+-+-+-+-+ Methods +-+-+-+-+-+-+-+-+-+-+-+

// Adds an element
TSet& TSet::add(size_t elem)
{
	if (m_field.count() == m_size) return *this;

	m_field.setBit(elem - 1);

	return *this;
}
// Deletes an element
TSet& TSet::del(size_t elem)
{
	m_field.setBit(elem - 1, 0);

	return *this;
}


// Combining sets
TSet TSet::unionSets(const TSet& other) const
{
	TBitField field(m_field | other.m_field);

	TSet set{ field, field.count() };

	return set;
}
// Intersection of sets
TSet TSet::intersectionSets(const TSet& other) const
{
	TBitField field(m_field & other.m_field);

	TSet set{ field, field.count() };

	return set;
}
// Negation of the set
TSet TSet::negation() const
{
	TBitField field(~m_field);

	TSet set{ field, field.count() };

	return set;
}


// The size of the universe
size_t TSet::sizeUniverse() const noexcept { return m_field.size(); }
// Set size
size_t TSet::sizeSet() const noexcept { return m_size; }
// The number of elements in the set
size_t TSet::countFillSet() const noexcept { return m_field.count(); }


// Checks for the presence of an element in the set
bool TSet::checkElem(size_t elem)
{
	return m_field.checkBit(elem - 1);
}


// Converts a set to a string
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
// Outputs the vector of elements of the set
std::vector<uint32_t> TSet::getValues() const
{
	std::vector<uint32_t> arr;

	if (!m_field.any()) return arr;

	for (size_t i = 0; i < m_field.size(); ++i)
		if (m_field.checkBit(i)) arr.emplace_back(i + 1);

	return arr;
}
