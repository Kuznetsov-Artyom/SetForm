#ifndef T_BIT_FIELD
#define T_BIT_FIELD

#include <ostream>
#include <string>
#include <vector>

class TBitField
{
private:
	std::vector<uint8_t> m_arr{};
	size_t m_size{};
	size_t m_countTrue{};

public:
	// +-+-+-+-+-+-+-+-+-+-+-+ Constructors +-+-+-+-+-+-+-+-+-+-+-+

	TBitField(size_t bits);
	TBitField(const char* cstr);
	TBitField(std::string str);
	TBitField(const TBitField& other);




	// +-+-+-+-+-+-+-+-+-+-+-+ Methods +-+-+-+-+-+-+-+-+-+-+-+

	// Sets all bits to the same value
	TBitField& setAll(bool val = true);
    // Sets one bit to a specific value
	TBitField& setBit(size_t pos, bool val = true);


	// Changes all bits to the opposite (0 -> 1, 1 -> 0)
	TBitField& flipAll();
    // Changes one bit to the opposite (0 -> 1, 1 -> 0)
	TBitField& flipBit(size_t pos);


	// Shows the bit value
	bool checkBit(size_t pos) const;
    // Returns true if all bits = 1, otherwise false
	bool all() const noexcept;
    // Returns true if there is at least one bit = 1, otherwise false
	bool any() const noexcept;


	// Returns the size of the bit string
	size_t size() const noexcept;
    // Returns the number of bits with a certain value
	size_t count(bool val = true) const noexcept;
    // Returns bits in std::string format
	std::string toString() const noexcept;




	// +-+-+-+-+-+-+-+-+-+-+-+ Operator overloading +-+-+-+-+-+-+-+-+-+-+-+

	TBitField& operator = (const TBitField& other) noexcept;
	bool operator == (const TBitField& other) const noexcept;
	bool operator != (const TBitField& other) const noexcept;
	TBitField operator & (const TBitField& other) const noexcept;
	TBitField operator | (const TBitField& other) const noexcept;
	TBitField operator ^ (const TBitField& other) const noexcept;
	TBitField operator ~ () const noexcept;
	TBitField operator >> (const size_t val) const noexcept;
	TBitField operator << (const size_t val) const noexcept;
	friend std::ostream& operator << (std::ostream& out, const TBitField& obj);
};

std::ostream& operator << (std::ostream& out, const TBitField& obj);

#endif // T_BIT_FIELD