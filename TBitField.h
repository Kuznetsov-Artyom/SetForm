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
	// +-+-+-+-+-+-+-+-+-+-+-+ ������������ +-+-+-+-+-+-+-+-+-+-+-+

	// ����������� � ��������� ��������� bits (���������� �����)
	TBitField(size_t bits);
	// ����������� � ��������� ��������� cstr (const char*)
	TBitField(const char* cstr);
	// ����������� � ��������� ��������� str (std::string)
	TBitField(std::string str);
	// ����������� �����������
	TBitField(const TBitField& other);




	// +-+-+-+-+-+-+-+-+-+-+-+ ������ +-+-+-+-+-+-+-+-+-+-+-+

	// ������������� ���� ����� ���� � ���� ��������
	TBitField& setAll(bool val = true);
	// ������������� ������ ���� ������������ ��������
	TBitField& setBit(size_t pos, bool val = true);


	// �������� ��� ���� �� ��������������� (0 -> 1, 1 -> 0)
	TBitField& flipAll();
	// �������� ���� ��� �� ��������������� (0 -> 1, 1 -> 0)
	TBitField& flipBit(size_t pos);


	// ���������� �������� ����
	bool checkBit(size_t pos) const;
	// ��������� true, ���� ��� ���� = 1, ����e false
	bool all() const noexcept;
	// ���������� ture, ���� �������� ���� �� ���� ��� = 1, ����� false
	bool any() const noexcept;


	// ���������� ������ ������� ������
	size_t size() const noexcept;
	// ���������� ���������� ����� � ������������ ���������
	size_t count(bool val = true) const noexcept;
	// ���������� ���� � ������� std::string
	std::string toString() const noexcept;




	// +-+-+-+-+-+-+-+-+-+-+-+ ���������� ���������� +-+-+-+-+-+-+-+-+-+-+-+

	// ���������� ��������� ������������ (=)
	TBitField& operator = (const TBitField& other) noexcept;
	// ���������� ��������� ��������� (==)
	bool operator == (const TBitField& other) const noexcept;
	// ���������� ��������� ����������� (!=)
	bool operator != (const TBitField& other) const noexcept;
	// �������� ���������� � (&)
	TBitField operator & (const TBitField& other) const noexcept;
	// �������� ���������� ��� (|)
	TBitField operator | (const TBitField& other) const noexcept;
	// �������� ���������� ������������� ��� (^)
	TBitField operator ^ (const TBitField& other) const noexcept;
	// ����� ���������� ��������� (~)
	TBitField operator ~ () const noexcept;
	// �������� ���������� ������ ������ �� ������������ ���������� ���
	TBitField operator >> (const size_t val) const noexcept;
	// �������� ���������� ������ ����� �� ������������ ���������� ���
	TBitField operator << (const size_t val) const noexcept;
	// ������������ ������� ���������� ������ ������
	friend std::ostream& operator << (std::ostream& out, const TBitField& obj);
};

std::ostream& operator << (std::ostream& out, const TBitField& obj);

#endif // T_BIT_FIELD