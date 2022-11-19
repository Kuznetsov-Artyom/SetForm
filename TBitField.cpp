#include "TBitField.h"


// +-+-+-+-+-+-+-+-+-+-+-+ Конструкторы +-+-+-+-+-+-+-+-+-+-+-+

// Конструктор с передачей параметра bits (количество битов)
TBitField::TBitField(size_t bits)
{
	if (bits == 0)
		throw std::invalid_argument{ "parameter countBits cannot be zero" };

	m_size = bits;
	m_arr.resize((m_size + 7) >> 3);
}
// Конструктор с передачей параметра cstr (const char*)
TBitField::TBitField(const char* cstr)
{
	std::string str(cstr);

	if (str.size() == 0)
		throw std::invalid_argument{ "parameter countBits cannot be zero" };

	m_size = str.size();
	m_arr.resize((m_size + 7) >> 3);

	for (size_t i = 0; i < m_size; ++i)
	{
		int code = str[i] - '0';

		if (code != 1 && code != 0)
			throw std::invalid_argument{ "invalid string values" };

		this->setBit(i, code);
	}
}
// Конструктор с передачей параметра str (std::string)
TBitField::TBitField(std::string str) : TBitField(str.c_str()) {}
// Конструктор копирования
TBitField::TBitField(const TBitField& other)
{
	this->m_size = other.m_size;
	this->m_arr = other.m_arr;
	this->m_countTrue = other.m_countTrue;
}




// +-+-+-+-+-+-+-+-+-+-+-+ Методы +-+-+-+-+-+-+-+-+-+-+-+

// Устанавливает всем битам одно и тоже значение
TBitField& TBitField::setAll(bool val)
{
	if (val)
	{
		for (auto& elem : m_arr) elem = 255;
		m_countTrue = m_size;
	}
	else
	{
		for (auto& elem : m_arr) elem = 0;
		m_countTrue = 0;
	}

	return *this;
}
// Устанавливает одному биту определенное значение
TBitField& TBitField::setBit(size_t pos, bool val)
{
	if (pos >= m_size)
		throw std::out_of_range{ "going out of the acceptable range" };

	size_t indInArr = (pos >> 3);
	uint8_t bit = (1 << (pos - indInArr * 8));

	if (val)
	{
		if ((m_arr[indInArr] & bit) == 0) ++m_countTrue;
		m_arr[indInArr] |= bit;
	}
	else
	{
		if (m_arr[indInArr] & bit) --m_countTrue;
		m_arr[indInArr] ^= (m_arr[indInArr] & bit);
	}

	return *this;
}


// Изменяет все биты на противоположные (0 -> 1, 1 -> 0)
TBitField& TBitField::flipAll()
{
	m_countTrue = m_size - m_countTrue;
	for (auto& elem : m_arr) elem = ~elem;

	return *this;
}
// Изменяет один бит на противоположный (0 -> 1, 1 -> 0)
TBitField& TBitField::flipBit(size_t pos)
{
	if (pos >= m_size)
		throw std::out_of_range{ "going out of the acceptable range" };

	size_t indInArr = (pos >> 3);
	uint8_t bit = (1 << (pos - indInArr * 8));

	m_countTrue = (m_arr[indInArr] & bit) ? m_countTrue - 1 : m_countTrue + 1;
	m_arr[indInArr] ^= bit;

	return *this;
}


// Показывает значение бита
bool TBitField::checkBit(size_t pos) const
{
	if (pos >= m_size)
		throw std::out_of_range{ "going out of the acceptable range" };

	size_t indInArr = (pos >> 3);

	return m_arr[indInArr] & (1 << (pos - indInArr * 8));
}
// Взвращает true, если все биты = 1, иначe false
bool TBitField::all() const noexcept
{
	for (const auto& elem : m_arr)
		if (!elem) return false;
	return true;
}
// Возвращает ture, если найдется хотя бы один бит = 1, иначе false
bool TBitField::any() const noexcept
{
	for (const auto& elem : m_arr)
		if (elem) return true;

	return false;
}


// Возвращает размер битовой строки
size_t TBitField::size() const noexcept
{
	return m_size;
}
// Возвращает количество битов с определенным значением
size_t TBitField::count(bool val) const noexcept
{
	return (val) ? m_countTrue : m_size - m_countTrue;
}
// Возвращает биты в формате std::string
std::string TBitField::toString() const noexcept
{
	std::string str;

	for (size_t i = 0; i < m_size; ++i)
		str += std::to_string(this->checkBit(i));

	return str;
}




// +-+-+-+-+-+-+-+-+-+-+-+ Перегрузка операторов +-+-+-+-+-+-+-+-+-+-+-+

// Перегрузка оператора присваивания (=)
TBitField& TBitField::operator = (const TBitField& other) noexcept
{
	if (this->m_size == other.m_size)
	{
		this->m_arr = other.m_arr;
		this->m_countTrue = other.m_countTrue;
	}

	return *this;
}
// Перегрузка оператора равенства (==)
bool TBitField::operator == (const TBitField& other) const noexcept
{
	if (this->m_size != other.m_size) return false;

	size_t sizeArr = this->m_arr.size();

	for (size_t i = 0; i < sizeArr; ++i)
		if (this->m_arr[i] != other.m_arr[i]) return false;

	return true;
}
// Перегрузка оператора неравенства (!=)
bool TBitField::operator != (const TBitField& other) const noexcept
{
	return !(*this == other);
}
// Оператор побитового И (&)
TBitField TBitField::operator & (const TBitField& other) const noexcept
{
	TBitField newStr(this->m_size);

	if (this->m_size != other.m_size) return newStr;

	size_t sizeArr = this->m_arr.size();

	for (size_t i = 0; i < sizeArr; ++i)
		newStr.m_arr[i] = this->m_arr[i] & other.m_arr[i];

	return newStr;
}
// Оператор побитового ИЛИ (|)
TBitField TBitField::operator | (const TBitField& other) const noexcept
{
	TBitField newStr(this->m_size);

	if (this->m_size != other.m_size) return newStr;

	size_t sizeArr = this->m_arr.size();

	for (size_t i = 0; i < sizeArr; ++i)
		newStr.m_arr[i] = this->m_arr[i] | other.m_arr[i];

	return newStr;
}
// Оператор побитового ИИСКЛЮЧАЮЩЕГО ИЛИ (^)
TBitField TBitField::operator ^ (const TBitField& other) const noexcept
{
	TBitField newStr(this->m_size);

	if (this->m_size != other.m_size) return newStr;

	size_t sizeArr = this->m_arr.size();

	for (size_t i = 0; i < sizeArr; ++i)
		newStr.m_arr[i] = this->m_arr[i] ^ other.m_arr[i];

	for (size_t i = 0; i < newStr.m_size; ++i)
		if (newStr.checkBit(i)) ++newStr.m_countTrue;

	return newStr;
}
// Оператор побитового отрицания NOT (~)
TBitField TBitField::operator ~ () const noexcept
{
	TBitField newStr(*this);
	return newStr.flipAll();
}
// Оператор побитового сдвига вправо на определенное количество бит
TBitField TBitField::operator >> (const size_t val) const noexcept
{
	TBitField newStr(*this);

	if (val == 0) return newStr;
	if (val >= m_size) return newStr.setAll(0);

	for (size_t i = 0; i < val; ++i)
		newStr.setBit(i, 0);

	for (size_t i = val, ind = 0; i < m_size; ++i, ++ind)
		newStr.setBit(i, this->checkBit(ind));

	return newStr;
}
// Оператор побитового сдвига влево на определенное количество бит
TBitField TBitField::operator << (const size_t val) const noexcept
{
	TBitField newStr(*this);

	if (val == 0) return newStr;
	if (val >= m_size) return newStr.setAll(0);

	for (size_t i = 0, ind = val; ind < m_size; ++i, ++ind)
		newStr.setBit(i, this->checkBit(ind));

	for (size_t i = m_size - val; i < m_size; ++i)
		newStr.setBit(i, 0);

	return newStr;
}
// Дружственная функция оператороа потока вывода
std::ostream& operator << (std::ostream& out, const TBitField& obj)
{
	for (size_t i = 0; i < obj.size(); ++i)
		out << obj.checkBit(i);

	return out;
}