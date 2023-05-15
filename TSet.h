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
	// +-+-+-+-+-+-+-+-+-+-+-+ Constructors +-+-+-+-+-+-+-+-+-+-+-+

	TSet(size_t univers, size_t size)
		: m_field{ univers }, m_size{ (size <= univers) ? size : univers } {}

	TSet(const TBitField& field, size_t size)
		: m_field{ field }, m_size{ (size <= field.size() ? size : field.size()) } {}

	TSet(const TSet& other) : m_field{ other.m_field }, m_size{ other.m_size } {}


	// +-+-+-+-+-+-+-+-+-+-+-+ Methods +-+-+-+-+-+-+-+-+-+-+-+

	// Adds an element
	TSet& add(size_t elem);
        // Deletes an element
	TSet& del(size_t elem);


	// Combining sets
	TSet unionSets(const TSet& other) const;
        // Intersection of sets
	TSet intersectionSets(const TSet& other) const;
        // Negation of the set
	TSet negation() const;


	// The size of the universe
	size_t sizeUniverse() const noexcept;
    // Set size
	size_t sizeSet() const noexcept;
    // The number of elements in the set
	size_t countFillSet() const noexcept;


	// Checks for the presence of an element in the set
	bool checkElem(size_t elem);


	// Converts a set to a string
	std::string getString() const;
        // Outputs the vector of elements of the set
	std::vector<uint32_t> getValues() const;

	// Clears the elements
	void clear() { m_field.setAll(0); }
};






#endif // T_SET